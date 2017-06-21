/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#include "stdafx.h"
#include "CoAgilent34401.h"

CLSID GetDriverCLSID()
{
	return __uuidof(Agilent34401);
}

HRESULT Agilent34401::FinalConstruct()
{
	HRESULT hr = S_OK;

	GetDriverInfo().m_strSoftwareModuleName = _T("Ag34401");
	GetDriverInfo().m_strDriverIdentifier = _T("Agilent34401");
	GetDriverInfo().m_strDriverVendor = _T("Agilent Technologies");
	GetDriverInfo().m_strDriverDescription = _T("IVI driver for Keysight Technologies 34401A Digital Multi Meter");
	GetDriverInfo().m_strDriverRevision = _T("1.3.0.0");
	GetDriverInfo().m_strGroupCapabilities = _T("IviDmmBase,IviDmmACMeasurement,IviDmmFrequencyMeasurement,IviDmmMultiPoint,IviDmmTriggerSlope,IviDmmSoftwareTrigger,IviDmmDeviceInfo,IviDmmAutoRangeValue,IviDmmAutoZero");
	GetDriverInfo().m_strSupportedModels = _T("34401A");
	GetDriverInfo().m_strDefaultSimulatedModel = _T("34401A");
	GetDriverInfo().m_lSpecificationMajorVersion = 4;
	GetDriverInfo().m_lSpecificationMinorVersion = 1;
	GetDriverInfo().m_bInterchangeCheckSupported = false;
	GetDriverInfo().m_bResetSupported = true;
	GetDriverInfo().m_bSelfTestSupported = true;
	GetDriverInfo().m_bRevisionQuerySupported = true;
	GetDriverInfo().m_bIdQuerySupported = true;
	GetDriverInfo().m_lSelfTestTimeout = 2000;
	GetDriverInfo().m_lDisableTimeout = 2000;
	GetDriverInfo().m_lResetTimeout = 2000;
	GetDriverInfo().m_lCoercionLogSize = 1000;

	m_pErrorReporter = new CAgilent34401ErrorReporter(this);

	hr = InternalFinalConstruct();

	return hr;
}

void Agilent34401::FinalRelease()
{
	InternalFinalRelease();

	if (m_pErrorReporter != NULL)
	{
		delete m_pErrorReporter;
	}
}

const CString& Agilent34401::GetClassName() const
{
	return Agilent34401::ClassName();
}

const CString& Agilent34401::ClassName()
{
	static CString strClassName = _T("Agilent34401");

	return strClassName;
}

const CRepCapDescriptor** Agilent34401::GetRepCapDescriptors() const
{
	static CRepCapDescriptor* _descriptors[] = {
		NULL};

	return (const CRepCapDescriptor**)&_descriptors;
}

Agilent34401* Agilent34401::GetRoot() const
{
	return CNode::GetRoot<Agilent34401>();
}

Agilent34401* Agilent34401::GetParent() const
{
	return CNode::GetParent<Agilent34401>();
}

///////////////////////////////////////////////////////////////////////////////
//
//	Instrument models support
//

const CInstrumentModelMap* CInstrumentModelManager::GetInstrumentModelMap()
{
	static CInstrumentModelMap _instrModelMap(
		new CInstrumentModel(_T("34401A"), _T("Default")),
		NULL);

	return &_instrModelMap;
}

///////////////////////////////////////////////////////////////////////////////
//
//	COM rich error support
//

STDMETHODIMP Agilent34401::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&__uuidof(IProvideClassInfo),
		&__uuidof(IProvideClassInfo2),
		&__uuidof(IIviDriver),
		&__uuidof(IIviDriverOperation),
		&__uuidof(IIviDriverIdentity),
		&__uuidof(IIviComponentIdentity),
		&__uuidof(IIviDriverUtility),
		&__uuidof(IAgilent34401),
		&__uuidof(IIviDmmAC),
		&__uuidof(IIviDmmAdvanced),
		&__uuidof(IIviDmmFrequency),
		&__uuidof(IIviDmmMeasurement),
		&__uuidof(IIviDmmRTD),
		&__uuidof(IIviDmmThermocouple),
		&__uuidof(IIviDmmThermistor),
		&__uuidof(IIviDmmTemperature),
		&__uuidof(IIviDmmMultiPoint),
		&__uuidof(IIviDmmTrigger),
		&__uuidof(IIviDmm),
		&__uuidof(IAgilent34401AC),
		&__uuidof(IAgilent34401ACCurrent),
		&__uuidof(IAgilent34401ACVoltage),
		&__uuidof(IAgilent34401Advanced),
		&__uuidof(IAgilent34401Calibration),
		&__uuidof(IAgilent34401DCCurrent),
		&__uuidof(IAgilent34401DCVoltage),
		&__uuidof(IAgilent34401DCVoltageRatio),
		&__uuidof(IAgilent34401Display),
		&__uuidof(IAgilent34401Frequency),
		&__uuidof(IAgilent34401Math),
		&__uuidof(IAgilent34401Measurement),
		&__uuidof(IAgilent34401MultiPoint),
		&__uuidof(IAgilent34401Resistance),
		&__uuidof(IAgilent34401Status),
		&__uuidof(IAgilent34401System),
		&__uuidof(IAgilent34401Trigger),
		&__uuidof(IAgilent34401System2),
		&__uuidof(IAgilent344012),
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}
