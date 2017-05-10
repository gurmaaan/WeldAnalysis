#ifndef USBMANAGER_HPP
#define USBMANAGER_HPP

#include <string>
#include <iostream>
#include <sstream>

#include <windows.h>
#include <hidsdi.h>

#include <QDebug>


const std::string DEVICE_VID = "0403";
const std::string DEVICE_PID = "6001";

class USBDevice {
public:
    USBDevice(std::wstring name, std::string type, std::string hidVID="", std::string hidPID=""):
        name(name),
        type(type),
        hidVID(hidVID),
        hidPID(hidPID){
    }

    operator QString() const {
        std::wstringstream ss;

        ss << "<USBDevice (";
        ss << "name='" << name;
        ss << ", type='" << std::wstring(type.begin(), type.end()) << "'";

        if (type == "hid") {
            ss << ", VID=" << std::wstring(hidVID.begin(), hidVID.end());
            ss << ", PID=" << std::wstring(hidPID.begin(), hidPID.end());
        }

        ss << ")>";

        return QString::fromStdWString(ss.str());
    }

    std::wstring name;
    std::string type;
    std::string hidVID;
    std::string hidPID;
};

class USBManager {
public:
    static std::list<USBDevice> getDevicesList() {
        std::list<USBDevice> devices;

        UINT nDevices;
        GetRawInputDeviceList(NULL, &nDevices, sizeof(RAWINPUTDEVICELIST));

        PRAWINPUTDEVICELIST pRawInputDeviceList = new RAWINPUTDEVICELIST[nDevices];

        GetRawInputDeviceList(pRawInputDeviceList, &nDevices, sizeof(RAWINPUTDEVICELIST));

        for (UINT i = 0; i < nDevices; ++i) {
            int isOk = 0;

            UINT nBufferSize = 0;
            isOk = GetRawInputDeviceInfo(
                pRawInputDeviceList[i].hDevice,
                RIDI_DEVICEINFO,
                NULL,
                &nBufferSize);

            if (isOk == -1) {
                std::cerr << "Some error - shit heppends" << std::endl;
                continue;
            }

            RID_DEVICE_INFO deviceInfo{};
            deviceInfo.cbSize = sizeof(RID_DEVICE_INFO);

            isOk = GetRawInputDeviceInfo(
                pRawInputDeviceList[i].hDevice,
                RIDI_DEVICEINFO,
                &deviceInfo,
                &nBufferSize);

            if (isOk == -1) {
                std::cerr << "Some error - shit heppends" << std::endl;
                continue;
            }

            int nResult = 0;
            nResult = GetRawInputDeviceInfo(
                pRawInputDeviceList[i].hDevice,
                RIDI_DEVICENAME,
                NULL,
                &nBufferSize);

            WCHAR* wcDeviceName = new WCHAR[nBufferSize + 1];

            nResult = GetRawInputDeviceInfo(
                pRawInputDeviceList[i].hDevice,
                RIDI_DEVICENAME,
                wcDeviceName,
                &nBufferSize);

//            wchar_t DeviceName[126];
//            HANDLE HIDHandle = CreateFile(wcDeviceName, GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, NULL, NULL);
//            if(HIDHandle)
//            {
//                BOOLEAN Result = HidD_GetProductString(HIDHandle, DeviceName, sizeof(wchar_t) * 126);
//                CloseHandle(HIDHandle);
//            }

            std::wstring name(wcDeviceName);

            if (deviceInfo.dwType == RIM_TYPEMOUSE)
                devices.emplace_back(USBDevice(name, "mouse"));
            else if (deviceInfo.dwType == RIM_TYPEKEYBOARD)
                devices.emplace_back(USBDevice(name, "keyboard"));
            else if (deviceInfo.dwType == RIM_TYPEHID) {
                std::ostringstream vidStream;
                vidStream << deviceInfo.hid.dwVendorId;
                std::string vid = vidStream.str();

                std::ostringstream pidStream;
                pidStream << deviceInfo.hid.dwProductId;
                std::string pid = pidStream.str();

                devices.emplace_back(USBDevice(name, "hid", vid, pid));
            }
        }

        free(pRawInputDeviceList);

        return devices;
    }

    static bool autoSearch() {
        std::list<USBDevice> devices = USBManager::getDevicesList();

        for (USBDevice &device: devices)
            if (device.type == "hid" && device.hidPID == DEVICE_PID && device.hidVID == DEVICE_VID)
                return true;

        return false;
    }
};

#endif // USBMANAGER_HPP
