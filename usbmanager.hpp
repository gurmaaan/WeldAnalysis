#ifndef USBMANAGER_HPP
#define USBMANAGER_HPP

#include <string>
#include <iostream>
#include <sstream>

#include <QDebug>

#include <windows.h>

class USBDevice {
public:
    USBDevice(std::string type, DWORD hidVID=NULL, DWORD hidPID=NULL):
        type(type),
        hidVID(hidVID),
        hidPID(hidPID){
    }

    operator QString() const {
        std::stringstream ss;

        ss << "<USBDevice (";
        ss << "type='" << type << "'";

        if (type == "hid") {
            ss << ", VID=" << hidVID;
            ss << ", PID=" << hidVID;
        }

        ss << ")>";

        return QString::fromStdString(ss.str());
    }

    std::string type;
    DWORD hidVID;
    DWORD hidPID;
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

            if (deviceInfo.dwType == RIM_TYPEMOUSE)
                devices.emplace_back(USBDevice("mouse"));
            else if (deviceInfo.dwType == RIM_TYPEKEYBOARD)
                devices.emplace_back(USBDevice("keyboard"));
            else if (deviceInfo.dwType == RIM_TYPEHID) {
                devices.emplace_back(USBDevice("hid", deviceInfo.hid.dwVendorId, deviceInfo.hid.dwProductId));
            }
        }

        free(pRawInputDeviceList);

        return devices;
    }

private:
//    static const std::string DEVICE_VID = "";
//    static const std::string DEVICE_PID = "";
};

#endif // USBMANAGER_HPP
