/******************************************************************************
 *                                                                         
 *               Copyright Keysight Technologies 2003-2014
 *               All rights reserved.
 *
 *****************************************************************************/

#include "stdafx.h"
#include <stdlib.h>

#include "CoAgilent34401.h"

HRESULT Agilent34401::InitializeIdentification()
{
	HRESULT hr = S_OK;

	// This needs to be done as the first instruemnmt I/O operation before InitializeIdentification
	// sends *IDN? 
	if (!GetSimulate())
	{
		// If its an ASRL connection put instrument in remote
		VisaInterfaceType eIntfType;
		hr = io.SessionInfo.GetInterfaceType(&eIntfType);

		m_bRS232Flag = false;
		if (eIntfType == VisaInterfaceSerial)
		{
			long lComplete = -1;

			m_bRS232Flag = true;
			hr = InstrPrintfNoPoll(_T("SYST:REM;*OPC?"));
			if (SUCCEEDED(hr)) hr = GetIo().ReadNumberNoPoll(&lComplete);
		}
	}

	// Clear instrument status and error queue to prevent prior errors from causing
	// instrument status failure on first polling operation.
	if (!GetSimulate() && GetQueryInstrStatus())
	{
		hr = GetIo().WriteStringNoPoll(_T("*CLS"));
		if (FAILED(hr)) return hr;
	}

	if (SUCCEEDED(hr))
		hr = DriverBase::InitializeIdentification();

	return hr;
}


void Agilent34401::ResetObjectState()
{
	// Use this function to initialize member variables and any cached data.
	// This function is automatically called in the following circumstances.
	//   1) After IIviDriver::Initialize, just BEFORE FinalInitialize is called
	//   2) After IIviDriverUtility::Reset
	//   3) After IIviDriverUtility::ResetWithDefaults
}

HRESULT Agilent34401::OnFinalConstruct()
{
	GetDriverInfo().m_lSelfTestTimeout = 25000;
	GetDriverInfo().m_lResetTimeout = 2000;
	GetDriverInfo().m_lDisableTimeout = 2000;

	// Use this function to perform any driver-specific initialization just AFTER object construction.
	// This function is only called ONCE -- even if Initialize and Close are called multiple times
	// on the same driver instance.
	
	HRESULT hr = S_OK;

    return hr;
}

void Agilent34401::OnFinalRelease()
{
	// Use this function to perform any driver-specific clean-up just BEFORE object destruction.
	// This function is only called ONCE -- even if Initialize and Close are called multiple times
	// on the same driver instance.
}


HRESULT Agilent34401::OnFinalInitialize()
{
	// Use this function to perform any driver-specific actions immediately after each call to IIviDriver::Initialize
	
	HRESULT hr = S_OK;

	//if (!GetSimulate())
	//{
	//	// If its an ASRL connection put instrument in remote
	//	VisaInterfaceType eIntfType;
	//	hr = io.SessionInfo.GetInterfaceType(&eIntfType);

	//	m_bRS232Flag = false;
	//	if (eIntfType == VisaInterfaceSerial)
	//	{
	//		long lComplete = -1;

	//		m_bRS232Flag = true;
	//		hr = InstrPrintfNoPoll(_T("SYST:REM;*OPC?"));
	//		if (SUCCEEDED(hr)) hr = FormattedReadNumber(&lComplete, true, 5000);
	//	}
	//}

    return hr;
}

HRESULT Agilent34401::OnFinalClose()
{
	// Use this function to perform any driver-specific actions immediately after each call to IIviDriver::Close
	
	HRESULT hr = S_OK;

	return hr;
}



/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IIviDriver_Close()
{
	HRESULT hr = S_OK;

	// Call Close() on driver's IFormattedIO488 object to release any additonal
	// references that may have been added by use of the System.DirectIO object which
	// can prevent DriverBase::Close() from terminating the connection to the instrument.
	IFormattedIO488* pFormatted;
	hr = io.DirectIo.GetIFormattedIO488Pointer(&pFormatted);

	if(SUCCEEDED(hr) && pFormatted)
	{
		IMessage* pMsg= NULL;
		pFormatted->get_IO(&pMsg);
		pMsg->Close();
		pMsg->Release();
	}

	hr = DriverBase::Close();

	return hr;
}

HRESULT Agilent34401::IIviDriver_Initialize(BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString)
{
	HRESULT hr = S_OK;

	hr = DriverBase::Initialize(ResourceName, IdQuery, Reset, OptionString);

	return hr;
}

HRESULT Agilent34401::IIviDriver_get_DriverOperation(IIviDriverOperation** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IIviDriver_get_Identity(IIviDriverIdentity** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IIviDriver_get_Utility(IIviDriverUtility** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IIviDriver_get_Initialized(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_Initialized(val);

	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IIviDriverOperation_GetNextCoercionRecord(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = err.MethodNotSupported(_T("GetNextCoercionRecord"));
	//hr = DriverBase::GetNextCoercionRecord(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverOperation_ResetInterchangeCheck()
{
	HRESULT hr = S_OK;

	hr = DriverBase::ResetInterchangeCheck();

	return hr;
}

HRESULT Agilent34401::IIviDriverOperation_GetNextInterchangeWarning(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::GetNextInterchangeWarning(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverOperation_ClearInterchangeWarnings()
{
	HRESULT hr = S_OK;

	hr = DriverBase::ClearInterchangeWarnings();

	return hr;
}

HRESULT Agilent34401::IIviDriverOperation_InvalidateAllAttributes()
{
	HRESULT hr = S_OK;

	hr = DriverBase::InvalidateAllAttributes();

	return hr;
}

HRESULT Agilent34401::IIviDriverOperation_get_LogicalName(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_LogicalName(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverOperation_get_IoResourceDescriptor(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_IoResourceDescriptor(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverOperation_get_Cache(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_Cache(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverOperation_put_Cache(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::put_Cache(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverOperation_get_InterchangeCheck(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_InterchangeCheck(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverOperation_put_InterchangeCheck(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::put_InterchangeCheck(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverOperation_get_QueryInstrumentStatus(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_QueryInstrumentStatus(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverOperation_put_QueryInstrumentStatus(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::put_QueryInstrumentStatus(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverOperation_get_RangeCheck(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_RangeCheck(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverOperation_put_RangeCheck(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::put_RangeCheck(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverOperation_get_RecordCoercions(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_RecordCoercions(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverOperation_put_RecordCoercions(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	if (val != VARIANT_FALSE)
		hr = err.ValueNotSupported(_T("VARIANT_TRUE"), _T("val"), _T("put_RecordCoercions"));
	else
		hr = DriverBase::put_RecordCoercions(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverOperation_get_Simulate(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_Simulate(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverOperation_put_Simulate(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::put_Simulate(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverOperation_get_DriverSetup(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_DriverSetup(val);

	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IIviDriverIdentity_get_InstrumentManufacturer(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_InstrumentManufacturer(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverIdentity_get_InstrumentModel(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_InstrumentModel(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverIdentity_get_InstrumentFirmwareRevision(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_InstrumentFirmwareRevision(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverIdentity_get_Identifier(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_Identifier(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverIdentity_get_SupportedInstrumentModels(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_SupportedInstrumentModels(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverIdentity_get_SpecificationMajorVersion(long* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_SpecificationMajorVersion(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverIdentity_get_SpecificationMinorVersion(long* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_SpecificationMinorVersion(val);

	return hr;
}

HRESULT Agilent34401::IIviDriverIdentity_get_GroupCapabilities(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_GroupCapabilities(val);

	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IIviComponentIdentity_get_Description(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_Description(val);

	return hr;
}

HRESULT Agilent34401::IIviComponentIdentity_get_Revision(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_Revision(val);

	return hr;
}

HRESULT Agilent34401::IIviComponentIdentity_get_Vendor(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_Vendor(val);

	return hr;
}



/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IIviDriverUtility_UnlockObject()
{
	HRESULT hr = S_OK;

	hr = DriverBase::UnlockObject();

	return hr;
}

HRESULT Agilent34401::IIviDriverUtility_LockObject()
{
	HRESULT hr = S_OK;

	hr = DriverBase::LockObject();

	return hr;
}

HRESULT Agilent34401::IIviDriverUtility_ErrorQuery(long* ErrorCode, BSTR* ErrorMessage)
{
	HRESULT hr = S_OK;

	hr = DriverBase::ErrorQuery(ErrorCode, ErrorMessage);

	return hr;
}

HRESULT Agilent34401::IIviDriverUtility_SelfTest(long* TestResult, BSTR* TestMessage)
{
	HRESULT hr = S_OK;

	hr = DriverBase::SelfTest(TestResult, TestMessage);

	return hr;
}

HRESULT Agilent34401::IIviDriverUtility_Disable()
{
	HRESULT hr = S_OK;

	hr = DriverBase::Disable();

	return hr;
}

HRESULT Agilent34401::IIviDriverUtility_ResetWithDefaults()
{
	HRESULT hr = S_OK;

	hr = _IIviDriverUtility::Reset();
	if (SUCCEEDED(hr))
		hr = DriverBase::ResetDefaults();

	return hr;
}

HRESULT Agilent34401::IIviDriverUtility_Reset()
{
	HRESULT hr = S_OK;

	hr = DriverBase::Reset();

	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IAgilent34401_get_Function(Agilent34401FunctionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommandEnum(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401_put_Function(Agilent34401FunctionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401_get_AC(IAgilent34401AC** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IAgilent34401_get_Trigger(IAgilent34401Trigger** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IAgilent34401_get_System(IAgilent34401System** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IAgilent34401_get_Status(IAgilent34401Status** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IAgilent34401_get_Resistance(IAgilent34401Resistance** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IAgilent34401_get_Measurement(IAgilent34401Measurement** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IAgilent34401_get_Math(IAgilent34401Math** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IAgilent34401_get_Frequency(IAgilent34401Frequency** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IAgilent34401_get_Display(IAgilent34401Display** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IAgilent34401_get_DCVoltageRatio(IAgilent34401DCVoltageRatio** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IAgilent34401_get_DCVoltage(IAgilent34401DCVoltage** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IAgilent34401_get_DCCurrent(IAgilent34401DCCurrent** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IAgilent34401_get_Calibration(IAgilent34401Calibration** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IAgilent34401_get_Advanced(IAgilent34401Advanced** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IAgilent34401_get_ACVoltage(IAgilent34401ACVoltage** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IAgilent34401_get_ACCurrent(IAgilent34401ACCurrent** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IAgilent34401_get_IviDmm(IIviDmm** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IIviDmmAC_ConfigureBandwidth(double MinFreq, double MaxFreq)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401AC::ConfigureBandwidth(MinFreq, MaxFreq);
	
	return hr;
}

HRESULT Agilent34401::IIviDmmAC_get_FrequencyMax(double* val)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401AC::get_FrequencyMax(val);
	
	return hr;
}

HRESULT Agilent34401::IIviDmmAC_put_FrequencyMax(double val)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("FrequencyMax is read only"));
	
	return hr;
}

HRESULT Agilent34401::IIviDmmAC_get_FrequencyMin(double* val)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401AC::get_FrequencyMin(val);
	
	return hr;
}

HRESULT Agilent34401::IIviDmmAC_put_FrequencyMin(double val)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401AC::put_FrequencyMin(val);
	
	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IIviDmmAdvanced_get_ActualRange(double* val)
{
	HRESULT hr = S_OK;

	IviDmmFunctionEnum	function;
	if(FAILED(hr = IIviDmm_get_Function(&function)))
		return hr;
	switch(function)
	{
		case IviDmmFunctionACVolts:
			hr = _IAgilent34401ACVoltage::get_Range(val);
			break;
		case IviDmmFunctionDCVolts:
			hr = _IAgilent34401DCVoltage::get_Range(val);
			break;
		case IviDmmFunctionDCCurrent:
			hr = _IAgilent34401DCCurrent::get_Range(val);
			break;
		case IviDmmFunctionACCurrent:
			hr = _IAgilent34401ACCurrent::get_Range(val);
			break;
		case IviDmmFunction4WireRes:
			hr = _IAgilent34401Resistance::get_Range(val);
			break;
		case IviDmmFunction2WireRes:
			hr = _IAgilent34401Resistance::get_Range(val);
			break;
		
		// The resolution is fixed at 5/1/2 digits for the frequency and period tests
		case IviDmmFunctionFreq:
			// The 34401 has only one range for frequency.
			// 300 kHz is the nominal maximum frequency
			*val = 300.0E3;
			break;
		case IviDmmFunctionPeriod:
			// Only one range for period. 
			// 0.3333 sec is nominally the longest period.
			// minimum is 3.3 micro seconds
			*val = (1.0/3.0);	// Maximum 3Hz period
			break;
		// in case  "CONTinuity", "VOLTage:DC:RATio" and "DIODe" do not support
		case IviDmmFunctionACPlusDCVolts:
		case IviDmmFunctionACPlusDCCurrent:
		case IviDmmFunctionTemperature:
		default:
			return ReportError(IDS_E_IVI_UNEXPECTED_RESPONSE);
			break;
	}

	return hr;
}

HRESULT Agilent34401::IIviDmmAdvanced_get_ApertureTime(double* val)
{
	HRESULT hr = S_OK;

	IviDmmFunctionEnum	function;
	if(FAILED(hr = IIviDmm_get_Function(&function)))
		return hr;
    switch (function)
	{
		case IviDmmFunctionDCVolts:
		case IviDmmFunctionDCCurrent:
		case IviDmmFunction2WireRes:
		case IviDmmFunction4WireRes:
		case IviDmmFunctionFreq:
		case IviDmmFunctionPeriod:
			hr = _IAgilent34401Advanced::get_ApertureTime(val);
			break;
		case IviDmmFunctionACVolts:
		case IviDmmFunctionACCurrent:
		case IviDmmFunctionACPlusDCVolts:
		case IviDmmFunctionACPlusDCCurrent:
		case IviDmmFunctionTemperature:
		default:
			return ReportError(IDS_E_IVI_UNEXPECTED_RESPONSE);
	}
	
	return hr;
}

HRESULT Agilent34401::IIviDmmAdvanced_get_ApertureTimeUnits(IviDmmApertureTimeUnitsEnum* val)
{
	HRESULT hr = S_OK;

	IviDmmFunctionEnum	function;
	if(FAILED(hr = IIviDmm_get_Function(&function)))
		return hr;
    switch (function){
		case IviDmmFunctionDCVolts:
		case IviDmmFunctionDCCurrent:
		case IviDmmFunction2WireRes:
		case IviDmmFunction4WireRes:
			*val = IviDmmAperturePowerLineCycles;
			break;
		case IviDmmFunctionFreq:
		case IviDmmFunctionPeriod:
			*val = IviDmmApertureSeconds;
			break;
		case IviDmmFunctionACVolts:
		case IviDmmFunctionACCurrent:
		case IviDmmFunctionACPlusDCVolts:
		case IviDmmFunctionACPlusDCCurrent:
		case IviDmmFunctionTemperature:
		default:
			return ReportError(IDS_E_IVI_UNEXPECTED_RESPONSE);
			break;
    }

	return hr;
}

HRESULT Agilent34401::IIviDmmAdvanced_get_AutoZero(IviDmmAutoZeroEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401AutoZeroEnum _val;
	
	hr = _IAgilent34401Advanced::get_AutoZero(&_val);
	
	if (SUCCEEDED(hr))
	{
		switch (_val)
		{
			case Agilent34401AutoZeroOff:
				*val = IviDmmAutoZeroOff;
				break;
			case Agilent34401AutoZeroOn:
				*val = IviDmmAutoZeroOn;
				break;
			case Agilent34401AutoZeroOnce:
				*val = IviDmmAutoZeroOnce;
				break;
		}
	}
	
	return hr;
}

HRESULT Agilent34401::IIviDmmAdvanced_put_AutoZero(IviDmmAutoZeroEnum val)
{
	HRESULT hr = S_OK;

	Agilent34401AutoZeroEnum _val;
	
	switch (val)
	{
		case IviDmmAutoZeroOff:
			_val = Agilent34401AutoZeroOff;
			break;
		case IviDmmAutoZeroOn:
			_val = Agilent34401AutoZeroOn;
			break;
		case IviDmmAutoZeroOnce:
			_val = Agilent34401AutoZeroOnce;
			break;
	}
	
	hr = _IAgilent34401Advanced::put_AutoZero(_val);
	
	return hr;
}

HRESULT Agilent34401::IIviDmmAdvanced_get_PowerlineFrequency(double* val)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401Advanced::get_PowerlineFrequency(val);
	
	return hr;
}

HRESULT Agilent34401::IIviDmmAdvanced_put_PowerlineFrequency(double val)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("PowerlineFrequency is read only"));

//	hr = _IAgilent34401Advanced::put_PowerlineFrequency(val);
	
	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IIviDmmFrequency_get_VoltageRange(double* val)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401Frequency::get_VoltageRange(val);
	
	return hr;
}

HRESULT Agilent34401::IIviDmmFrequency_put_VoltageRange(double val)
{
	HRESULT hr = S_OK;

	if (val < 0) // Negative values = Auto
		hr = _IAgilent34401Frequency::put_AutoVoltageRange(VARIANT_TRUE);
	else
		hr = _IAgilent34401Frequency::put_VoltageRange(val);
	
	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IIviDmmMeasurement_IsOverRange(double MeasurementValue, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401Measurement::IsOverRange(MeasurementValue, val);
	
	return hr;
}

HRESULT Agilent34401::IIviDmmMeasurement_SendSoftwareTrigger()
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401Measurement::SendSoftwareTrigger();
	
	return hr;
}

HRESULT Agilent34401::IIviDmmMeasurement_ReadMultiPoint(long MaxTimeMilliseconds, SAFEARRAY** val)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401Measurement::ReadMultiPoint(MaxTimeMilliseconds, val);
	
	return hr;
}

HRESULT Agilent34401::IIviDmmMeasurement_Read(long MaxTimeMilliseconds, double* val)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401Measurement::Read(MaxTimeMilliseconds, val);
	
	return hr;
}

HRESULT Agilent34401::IIviDmmMeasurement_FetchMultiPoint(long MaxTimeMilliseconds, SAFEARRAY** val)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401Measurement::FetchMultiPoint(MaxTimeMilliseconds, val);
	
	return hr;
}

HRESULT Agilent34401::IIviDmmMeasurement_Fetch(long MaxTimeMilliseconds, double* val)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401Measurement::Fetch(MaxTimeMilliseconds, val);
	
	return hr;
}

HRESULT Agilent34401::IIviDmmMeasurement_Abort()
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401Measurement::Abort();
	
	return hr;
}

HRESULT Agilent34401::IIviDmmMeasurement_Initiate()
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401Measurement::Initiate();
	
	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IIviDmmRTD_Configure(double Alpha, double Resistance)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_IVI_METHOD_NOT_SUPPORTED, _T("Configure"));
	
	return hr;
}

HRESULT Agilent34401::IIviDmmRTD_get_Alpha(double* val)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("get_Alpha"));
	
	return hr;
}

HRESULT Agilent34401::IIviDmmRTD_put_Alpha(double val)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("put_Alpha"));
	
	return hr;
}

HRESULT Agilent34401::IIviDmmRTD_get_Resistance(double* val)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("get_Resistance"));
	
	return hr;
}

HRESULT Agilent34401::IIviDmmRTD_put_Resistance(double val)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("put_Resistance"));
	
	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IIviDmmThermocouple_Configure(IviDmmThermocoupleTypeEnum Type, IviDmmRefJunctionTypeEnum RefJunctionType)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_IVI_METHOD_NOT_SUPPORTED, _T("Configure"));
	
	return hr;
}

HRESULT Agilent34401::IIviDmmThermocouple_get_FixedRefJunction(double* val)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("get_FixedRefJunction"));
	
	return hr;
}

HRESULT Agilent34401::IIviDmmThermocouple_put_FixedRefJunction(double val)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("put_FixedRefJunction"));
	
	return hr;
}

HRESULT Agilent34401::IIviDmmThermocouple_get_RefJunctionType(IviDmmRefJunctionTypeEnum* val)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("get_RefJunctionType"));
	
	return hr;
}

HRESULT Agilent34401::IIviDmmThermocouple_put_RefJunctionType(IviDmmRefJunctionTypeEnum val)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("put_RefJunctionType"));
	
	return hr;
}

HRESULT Agilent34401::IIviDmmThermocouple_get_Type(IviDmmThermocoupleTypeEnum* val)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("get_Type"));
	
	return hr;
}

HRESULT Agilent34401::IIviDmmThermocouple_put_Type(IviDmmThermocoupleTypeEnum val)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("put_Type"));
	
	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IIviDmmThermistor_get_Resistance(double* val)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("get_Resistance"));
	
	return hr;
}

HRESULT Agilent34401::IIviDmmThermistor_put_Resistance(double val)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("put_Resistance"));
	
	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IIviDmmTemperature_get_TransducerType(IviDmmTransducerTypeEnum* val)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("get_TransducerType"));
	
	return hr;
}

HRESULT Agilent34401::IIviDmmTemperature_put_TransducerType(IviDmmTransducerTypeEnum val)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("put_TransducerType"));
	
	return hr;
}

HRESULT Agilent34401::IIviDmmTemperature_get_RTD(IIviDmmRTD** val)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("get_RTD"));
//	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IIviDmmTemperature_get_Thermocouple(IIviDmmThermocouple** val)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("get_Thermocouple"));
//	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IIviDmmTemperature_get_Thermistor(IIviDmmThermistor** val)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("get_Thermistor"));
//	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IIviDmmMultiPoint_Configure(long TriggerCount, long SampleCount, IviDmmSampleTriggerEnum SampleTrigger, double SampleInterval)
{
	HRESULT hr = S_OK;

	if(FAILED(hr = _IIviDmmMultiPoint::put_Count(TriggerCount)))
		return hr;

	if(FAILED(hr = _IIviDmmMultiPoint::put_SampleCount(SampleCount)))
		return hr;

	if(FAILED(hr = _IIviDmmMultiPoint::put_SampleTrigger(SampleTrigger)))
		return hr;

	hr = _IIviDmmMultiPoint::put_SampleInterval(SampleInterval);

	return hr;
}

HRESULT Agilent34401::IIviDmmMultiPoint_get_MeasurementComplete(IviDmmMeasCompleteDestEnum* val)
{
	HRESULT hr = S_OK;

	// After each measurement, the DMM generates a measurement-complete signal. This attribute
	// specifies the destination of the measurement-complete signal. This signal is commonly
	// referred to as Voltmeter Complete.
	// Routes the measurement complete signal to the external connector.
	// If trigger source is External then this value is IviDmmMeasCompleteDestExternal
	// other case are IviDmmMeasCompleteDestNone

	Agilent34401MeasCompleteDestEnum _val;
	
	hr = _IAgilent34401MultiPoint::get_MeasurementComplete(&_val);

	if (SUCCEEDED(hr))
	{
		switch (_val)
		{
			case Agilent34401MeasCompleteDestExternal:
				*val = IviDmmMeasCompleteDestExternal;
				break;
			case Agilent34401MeasCompleteDestNone:
				*val = IviDmmMeasCompleteDestNone;
				break;
		}
	}
	
	return hr;
}

HRESULT Agilent34401::IIviDmmMultiPoint_put_MeasurementComplete(IviDmmMeasCompleteDestEnum val)
{
	HRESULT hr = S_OK;

	Agilent34401MeasCompleteDestEnum _val;
	
	switch (val)
	{
		case IviDmmMeasCompleteDestExternal:
			_val = Agilent34401MeasCompleteDestExternal;
			break;
		case IviDmmMeasCompleteDestNone:
			_val = Agilent34401MeasCompleteDestNone;
			break;
		case IviDmmMeasCompleteDestTTL0:
		case IviDmmMeasCompleteDestTTL1:
		case IviDmmMeasCompleteDestTTL2:
		case IviDmmMeasCompleteDestTTL3:
		case IviDmmMeasCompleteDestTTL4:
		case IviDmmMeasCompleteDestTTL5:
		case IviDmmMeasCompleteDestTTL6:
		case IviDmmMeasCompleteDestTTL7:
		case IviDmmMeasCompleteDestECL0:
		case IviDmmMeasCompleteDestECL1:
		case IviDmmMeasCompleteDestPXIStar:
		case IviDmmMeasCompleteDestRTSI0:
		case IviDmmMeasCompleteDestRTSI1:
		case IviDmmMeasCompleteDestRTSI2:
		case IviDmmMeasCompleteDestRTSI3:
		case IviDmmMeasCompleteDestRTSI4:
		case IviDmmMeasCompleteDestRTSI5:
		case IviDmmMeasCompleteDestRTSI6:
		default:
			return ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviDmmMeasCompleteDestEnum"), _T("val"), _T("put_MeasurementComplete"));
	}
	
	hr = _IAgilent34401MultiPoint::put_MeasurementComplete(_val);
	
	return hr;
}

HRESULT Agilent34401::IIviDmmMultiPoint_get_Count(long* val)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401MultiPoint::get_Count(val);
	
	return hr;
}

HRESULT Agilent34401::IIviDmmMultiPoint_put_Count(long val)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401MultiPoint::put_Count(val);
	
	return hr;
}

HRESULT Agilent34401::IIviDmmMultiPoint_get_SampleCount(long* val)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401MultiPoint::get_SampleCount(val);
	
	return hr;
}

HRESULT Agilent34401::IIviDmmMultiPoint_put_SampleCount(long val)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401MultiPoint::put_SampleCount(val);
	
	return hr;
}

HRESULT Agilent34401::IIviDmmMultiPoint_get_SampleInterval(double* val)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401MultiPoint::get_SampleInterval(val);
	
	return hr;
}

HRESULT Agilent34401::IIviDmmMultiPoint_put_SampleInterval(double val)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401MultiPoint::put_SampleInterval(val);
	
	return hr;
}

HRESULT Agilent34401::IIviDmmMultiPoint_get_SampleTrigger(IviDmmSampleTriggerEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401SampleTriggerEnum _val;
	
	hr = _IAgilent34401MultiPoint::get_SampleTrigger(&_val);
	
	if (SUCCEEDED(hr))
	{
		switch (_val)
		{
			case Agilent34401SampleTriggerImmediate:
				*val = IviDmmSampleTriggerImmediate;
				break;
			case Agilent34401SampleTriggerExternal:
				*val = IviDmmSampleTriggerExternal;
				break;
			case Agilent34401SampleTriggerSwTrigFunc:
				*val = IviDmmSampleTriggerSwTrigFunc;
				break;
			case Agilent34401SampleTriggerInterval:
				*val = IviDmmSampleTriggerInterval;
				break;
			default:
				return ReportError(IDS_E_IVI_UNEXPECTED_RESPONSE);
		}
	}
	
	return hr;
}

HRESULT Agilent34401::IIviDmmMultiPoint_put_SampleTrigger(IviDmmSampleTriggerEnum val)
{
	HRESULT hr = S_OK;

	Agilent34401SampleTriggerEnum _val;
	
	switch (val)
	{
		case IviDmmSampleTriggerImmediate:
			_val = Agilent34401SampleTriggerImmediate;
			break;
		case IviDmmSampleTriggerExternal:
			_val = Agilent34401SampleTriggerExternal;
			break;
		case IviDmmSampleTriggerSwTrigFunc:
			_val = Agilent34401SampleTriggerSwTrigFunc;
			break;
		case IviDmmSampleTriggerInterval:
			_val = Agilent34401SampleTriggerInterval;
			break;
		case IviDmmSampleTriggerTTL0:
		case IviDmmSampleTriggerTTL1:
		case IviDmmSampleTriggerTTL2:
		case IviDmmSampleTriggerTTL3:
		case IviDmmSampleTriggerTTL4:
		case IviDmmSampleTriggerTTL5:
		case IviDmmSampleTriggerTTL6:
		case IviDmmSampleTriggerTTL7:
		case IviDmmSampleTriggerECL0:
		case IviDmmSampleTriggerECL1:
		case IviDmmSampleTriggerPXIStar:
		case IviDmmSampleTriggerRTSI0:
		case IviDmmSampleTriggerRTSI1:
		case IviDmmSampleTriggerRTSI2:
		case IviDmmSampleTriggerRTSI3:
		case IviDmmSampleTriggerRTSI4:
		case IviDmmSampleTriggerRTSI5:
		case IviDmmSampleTriggerRTSI6:
		default:
			return ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviDmmSampleTriggerEnum"), _T("val"), _T("put_SampleTrigger"));
	}
	
	hr = _IAgilent34401MultiPoint::put_SampleTrigger(_val);
	
	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IIviDmmTrigger_Configure(IviDmmTriggerSourceEnum TriggerSource, double TriggerDelay)
{
	HRESULT hr = S_OK;

	if(FAILED(hr = _IIviDmmTrigger::put_Source(TriggerSource)))
		return hr;

	hr = _IIviDmmTrigger::put_Delay(TriggerDelay);
	
	return hr;
}

HRESULT Agilent34401::IIviDmmTrigger_get_Slope(IviDmmTriggerSlopeEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401TriggerSlopeEnum _val;
	
	hr = _IAgilent34401Trigger::get_Slope(&_val);
	
	if (SUCCEEDED(hr))
	{
		switch (_val)
		{
			case Agilent34401TriggerSlopePositive:
				*val = IviDmmTriggerSlopePositive;
				break;
			case Agilent34401TriggerSlopeNegative:
				*val = IviDmmTriggerSlopeNegative;
				break;
		}
	}
	
	return hr;
}

HRESULT Agilent34401::IIviDmmTrigger_put_Slope(IviDmmTriggerSlopeEnum val)
{
	HRESULT hr = S_OK;

	Agilent34401TriggerSlopeEnum _val;
	
	switch (val)
	{
		case IviDmmTriggerSlopePositive:
			_val = Agilent34401TriggerSlopePositive;
			break;
		case IviDmmTriggerSlopeNegative:
			_val = Agilent34401TriggerSlopeNegative;
			break;
	}
	
	return ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("Slope is read only"));
	
	return hr;
}

HRESULT Agilent34401::IIviDmmTrigger_get_Delay(double* val)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401Trigger::get_Delay(val);
	
	return hr;
}

HRESULT Agilent34401::IIviDmmTrigger_put_Delay(double val)
{
	HRESULT hr = S_OK;

	if (val < 0) // Negative values = Auto
		hr = _IAgilent34401Trigger::put_AutoDelay(VARIANT_TRUE);
	else
		hr = _IAgilent34401Trigger::put_Delay(val);
	
	return hr;
}

HRESULT Agilent34401::IIviDmmTrigger_get_Source(IviDmmTriggerSourceEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401TriggerSourceEnum _val;
	
	hr = _IAgilent34401Trigger::get_Source(&_val);
	
	if (SUCCEEDED(hr))
	{
		switch (_val)
		{
			case Agilent34401TriggerSourceImmediate:
				*val = IviDmmTriggerSourceImmediate;
				break;
			case Agilent34401TriggerSourceExternal:
				*val = IviDmmTriggerSourceExternal;
				break;
			case Agilent34401TriggerSourceSwTrigFunc:
				*val = IviDmmTriggerSourceSwTrigFunc;
				break;
		}
	}
	
	return hr;
}

HRESULT Agilent34401::IIviDmmTrigger_put_Source(IviDmmTriggerSourceEnum val)
{
	HRESULT hr = S_OK;

	Agilent34401TriggerSourceEnum _val;
	
	switch (val)
	{
		case IviDmmTriggerSourceImmediate:
			_val = Agilent34401TriggerSourceImmediate;
			break;
		case IviDmmTriggerSourceExternal:
			_val = Agilent34401TriggerSourceExternal;
			break;
		case IviDmmTriggerSourceSwTrigFunc:
			_val = Agilent34401TriggerSourceSwTrigFunc;
			break;
		case IviDmmTriggerSourceTTL0:
		case IviDmmTriggerSourceTTL1:
		case IviDmmTriggerSourceTTL2:
		case IviDmmTriggerSourceTTL3:
		case IviDmmTriggerSourceTTL4:
		case IviDmmTriggerSourceTTL5:
		case IviDmmTriggerSourceTTL6:
		case IviDmmTriggerSourceTTL7:
		case IviDmmTriggerSourceECL0:
		case IviDmmTriggerSourceECL1:
		case IviDmmTriggerSourcePXIStar:
		case IviDmmTriggerSourceRTSI0:
		case IviDmmTriggerSourceRTSI1:
		case IviDmmTriggerSourceRTSI2:
		case IviDmmTriggerSourceRTSI3:
		case IviDmmTriggerSourceRTSI4:
		case IviDmmTriggerSourceRTSI5:
		case IviDmmTriggerSourceRTSI6:
		default:
			return ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviDmmTriggerSourceEnum"), _T("val"), _T("put_Source"));
	}
	
	hr = _IAgilent34401Trigger::put_Source(_val);
	
	return hr;
}

HRESULT Agilent34401::IIviDmmTrigger_get_MultiPoint(IIviDmmMultiPoint** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IIviDmm_Configure(IviDmmFunctionEnum Function, double Range, double Resolution)
{
	HRESULT hr = S_OK;

	if(FAILED(hr = _IIviDmm::put_Function(Function)))
		return hr;

	if(FAILED(hr = _IIviDmm::put_Range(Range)))
		return hr;

	if(Range > 0)  // use default resolution if AutoRange enabled
		hr = _IIviDmm::put_Resolution(Resolution);

	return hr;
}

HRESULT Agilent34401::IIviDmm_get_Function(IviDmmFunctionEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401FunctionEnum _val;
	
	hr = _IAgilent34401::get_Function(&_val);
	
	if (SUCCEEDED(hr))
	{
		switch (_val)
		{
			case Agilent34401FunctionDCVolts:
				*val = IviDmmFunctionDCVolts;
				break;
			case Agilent34401FunctionACVolts:
				*val = IviDmmFunctionACVolts;
				break;
			case Agilent34401FunctionDCCurrent:
				*val = IviDmmFunctionDCCurrent;
				break;
			case Agilent34401FunctionACCurrent:
				*val = IviDmmFunctionACCurrent;
				break;
			case Agilent34401Function2WireRes:
				*val = IviDmmFunction2WireRes;
				break;
			case Agilent34401Function4WireRes:
				*val = IviDmmFunction4WireRes;
				break;
			case Agilent34401FunctionFreq:
				*val = IviDmmFunctionFreq;
				break;
			case Agilent34401FunctionPeriod:
				*val = IviDmmFunctionPeriod;
				break;
			default:
				return ReportError(IDS_E_IVI_UNEXPECTED_RESPONSE);
				break;
		}
	}
	
	return hr;
}

HRESULT Agilent34401::IIviDmm_put_Function(IviDmmFunctionEnum val)
{
	HRESULT hr = S_OK;

	Agilent34401FunctionEnum _val;
	
	switch (val)
	{
		case IviDmmFunctionDCVolts:
			_val = Agilent34401FunctionDCVolts;
			break;
		case IviDmmFunctionACVolts:
			_val = Agilent34401FunctionACVolts;
			break;
		case IviDmmFunctionDCCurrent:
			_val = Agilent34401FunctionDCCurrent;
			break;
		case IviDmmFunctionACCurrent:
			_val = Agilent34401FunctionACCurrent;
			break;
		case IviDmmFunction2WireRes:
			_val = Agilent34401Function2WireRes;
			break;
		case IviDmmFunction4WireRes:
			_val = Agilent34401Function4WireRes;
			break;
		case IviDmmFunctionFreq:
			_val = Agilent34401FunctionFreq;
			break;
		case IviDmmFunctionPeriod:
			_val = Agilent34401FunctionPeriod;
			break;
		case IviDmmFunctionACPlusDCVolts:
			return ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviDmmFunctionACPlusDCVolts"), _T("val"), _T("IIviDmm_put_Function"));
			break;
		case IviDmmFunctionACPlusDCCurrent:
			return ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviDmmFunctionACPlusDCCurrent"), _T("val"), _T("IIviDmm_put_Function"));
			break;
		case IviDmmFunctionTemperature:
			return ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviDmmFunctionTemperature"), _T("val"), _T("IIviDmm_put_Function"));
			break;
	}
	
	hr = _IAgilent34401::put_Function(_val);
	
	return hr;
}

HRESULT Agilent34401::IIviDmm_get_Range(double* val)
{
	HRESULT hr = S_OK;

	IviDmmFunctionEnum	function;
	if(FAILED(hr = IIviDmm_get_Function(&function)))
		return hr;
	switch(function)
	{
		case IviDmmFunctionACVolts:
			hr = _IAgilent34401ACVoltage::get_Range(val);
			break;
		case IviDmmFunctionDCVolts:
			hr = _IAgilent34401DCVoltage::get_Range(val);
			break;
		case IviDmmFunctionDCCurrent:
			hr = _IAgilent34401DCCurrent::get_Range(val);
			break;
		case IviDmmFunctionACCurrent:
			hr = _IAgilent34401ACCurrent::get_Range(val);
			break;
		case IviDmmFunction4WireRes:
		case IviDmmFunction2WireRes:
			hr = _IAgilent34401Resistance::get_Range(val);
			break;
		
		// The resolution is fixed at 5/1/2 digits for the frequency and period tests
		case IviDmmFunctionFreq:
			// maximum measurement expected. The Frequency fixed operationg range from 3Hz to 300KHz
			*val = 300.0E3;
			break;
		case IviDmmFunctionPeriod:
			// maximum measurement expected. The Frequency fixed operationg range from 3Hz to 300KHz
			*val = (1.0/3.0);	// Maximum 3Hz period
			break;
		// in case  "CONTinuity", "VOLTage:DC:RATio" and "DIODe" do not support
		case IviDmmFunctionACPlusDCVolts:
		case IviDmmFunctionACPlusDCCurrent:
		case IviDmmFunctionTemperature:
		default:
			return ReportError(IDS_E_IVI_UNEXPECTED_RESPONSE);
			break;
	}
	
	return hr;
}

HRESULT Agilent34401::IIviDmm_put_Range(double val)
{
	HRESULT hr = S_OK;

	IviDmmFunctionEnum	function;
	if(FAILED(hr = IIviDmm_get_Function(&function)))
		return hr;
	switch(function)
	{
		case IviDmmFunctionACVolts:
			hr = _IAgilent34401ACVoltage::put_Range(val);
			break;
		case IviDmmFunctionDCVolts:
			hr = _IAgilent34401DCVoltage::put_Range(val);
			break;
		case IviDmmFunctionDCCurrent:
			hr = _IAgilent34401DCCurrent::put_Range(val);
			break;
		case IviDmmFunctionACCurrent:
			hr = _IAgilent34401ACCurrent::put_Range(val);
			break;
		case IviDmmFunction4WireRes:
		case IviDmmFunction2WireRes:
			hr = _IAgilent34401Resistance::put_Range(val);
			break;
		
		// The resolution is fixed at 5/1/2 digits for the frequency and period tests
		case IviDmmFunctionFreq:
		case IviDmmFunctionPeriod:
			break;
		// in case  "CONTinuity", "VOLTage:DC:RATio" and "DIODe" do not support
		case IviDmmFunctionACPlusDCVolts:
		case IviDmmFunctionACPlusDCCurrent:
		case IviDmmFunctionTemperature:
		default:
			break;
	}
	
	return hr;
}

HRESULT Agilent34401::IIviDmm_get_Resolution(double* val)
{
	HRESULT hr = S_OK;

	IviDmmFunctionEnum	function;
	if(FAILED(hr = IIviDmm_get_Function(&function)))
		return hr;
	switch(function)
	{
		case IviDmmFunctionACVolts:
			hr = _IAgilent34401ACVoltage::get_Resolution(val);
			break;
		case IviDmmFunctionDCVolts:
			hr = _IAgilent34401DCVoltage::get_Resolution(val);
			break;
		case IviDmmFunctionDCCurrent:
			hr = _IAgilent34401DCCurrent::get_Resolution(val);
			break;
		case IviDmmFunctionACCurrent:
			hr = _IAgilent34401ACCurrent::get_Resolution(val);
			break;
		case IviDmmFunction4WireRes:
		case IviDmmFunction2WireRes:
			hr = _IAgilent34401Resistance::get_Resolution(val);
			break;
		
		// The resolution is fixed at 5/1/2 digits for the frequency and period tests
		case IviDmmFunctionFreq:
			// Frequency was fixed Fast 5 digits resolution(see the Manual page p55) 0.2 PLC 
			// resolution = range / 1E5
			*val = 300.0E3/1E5;	// 300KHz
			break;
		case IviDmmFunctionPeriod:
			// maximum measurement expected. The Frequency fixed operationg range from 3Hz to 300KHz
			*val = 1.0/3.0/1E5;
			break;
		// in case  "CONTinuity", "VOLTage:DC:RATio" and "DIODe" do not support
		case IviDmmFunctionACPlusDCVolts:
		case IviDmmFunctionACPlusDCCurrent:
		case IviDmmFunctionTemperature:
		default:
			return ReportError(IDS_E_IVI_UNEXPECTED_RESPONSE);
			break;
	}
	
	return hr;
}

HRESULT Agilent34401::IIviDmm_put_Resolution(double val)
{
	HRESULT hr = S_OK;

	IviDmmFunctionEnum	function;
	if(FAILED(hr = IIviDmm_get_Function(&function)))
		return hr;
	switch(function)
	{
		case IviDmmFunctionACVolts:
			hr = _IAgilent34401ACVoltage::put_Resolution(val);
			break;
		case IviDmmFunctionDCVolts:
			hr = _IAgilent34401DCVoltage::put_Resolution(val);
			break;
		case IviDmmFunctionDCCurrent:
			hr = _IAgilent34401DCCurrent::put_Resolution(val);
			break;
		case IviDmmFunctionACCurrent:
			hr = _IAgilent34401ACCurrent::put_Resolution(val);
			break;
		case IviDmmFunction4WireRes:
		case IviDmmFunction2WireRes:
			hr = _IAgilent34401Resistance::put_Resolution(val);
			break;
		
		// The resolution is fixed at 5/1/2 digits for the frequency and period tests
		case IviDmmFunctionFreq:
		case IviDmmFunctionPeriod:
			break;
		// in case  "CONTinuity", "VOLTage:DC:RATio" and "DIODe" do not support
		case IviDmmFunctionACPlusDCVolts:
		case IviDmmFunctionACPlusDCCurrent:
		case IviDmmFunctionTemperature:
		default:
			break;
	}
	
	return hr;
}

HRESULT Agilent34401::IIviDmm_get_AC(IIviDmmAC** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IIviDmm_get_Advanced(IIviDmmAdvanced** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IIviDmm_get_Frequency(IIviDmmFrequency** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IIviDmm_get_Measurement(IIviDmmMeasurement** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IIviDmm_get_Temperature(IIviDmmTemperature** val)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("get_Temperature"));
//	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IIviDmm_get_Trigger(IIviDmmTrigger** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IAgilent34401AC_ConfigureBandwidth(double MinFreq, double MaxFreq)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401AC::put_FrequencyMin(MinFreq);
	// FrequencyMax is a read only property.

	return hr;
}

HRESULT Agilent34401::IAgilent34401AC_get_FrequencyMax(double* val)
{
	HRESULT hr = S_OK;

	// allways return same value
	* val = 300.0E3;	// 300KHz
	return hr;
}

HRESULT Agilent34401::IAgilent34401AC_get_FrequencyMin(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401AC_put_FrequencyMin(double val)
{
	HRESULT hr = S_OK;

	// ac voltage and ac current measurements only
	// input frequency		AC Filter		Settting time
	//  3Hz to 300KHz		Slow filter		7 seconds/reading
	// 20Hz to 300KHz		Medium filter	1 reading/ second
	// 200Hz to 300KHz		Fast filter		10 readings/second
	hr = InstrPrintCommand();

	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IAgilent34401ACCurrent_Configure(double Range, double Resolution)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401::put_Function(Agilent34401FunctionACCurrent);
	if(SUCCEEDED(hr))
	{
		hr = _IAgilent34401ACCurrent::put_Range(Range);
		if(SUCCEEDED(hr) && Range > 0)  // use default resolution if AutoRange enabled
			hr = _IAgilent34401ACCurrent::put_Resolution(Resolution);
	}

	return hr;
}

HRESULT Agilent34401::IAgilent34401ACCurrent_get_AutoRange(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommandBool(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401ACCurrent_put_AutoRange(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401ACCurrent_get_Range(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401ACCurrent_put_Range(double val)
{
	HRESULT hr = S_OK;

	// Negative value sets AutoRange true.  IIviDMM.Configure and Range supports this.
	if (val < 0)
		hr = _IAgilent34401ACCurrent::put_AutoRange(true);
	else
		hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401ACCurrent_get_RangeMax(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401ACCurrent_get_RangeMin(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401ACCurrent_get_Resolution(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401ACCurrent_put_Resolution(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401ACCurrent_get_ResolutionMax(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401ACCurrent_get_ResolutionMin(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IAgilent34401ACVoltage_Configure(double Range, double Resolution)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401::put_Function(Agilent34401FunctionACVolts);
	if(SUCCEEDED(hr))
	{
		hr = _IAgilent34401ACVoltage::put_Range(Range);
		if(SUCCEEDED(hr) && Range > 0)  // use default resolution if AutoRange enabled
			hr = _IAgilent34401ACVoltage::put_Resolution(Resolution);
	}

	return hr;
}

HRESULT Agilent34401::IAgilent34401ACVoltage_get_AutoRange(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommandBool(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401ACVoltage_put_AutoRange(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401ACVoltage_get_Range(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401ACVoltage_put_Range(double val)
{
	HRESULT hr = S_OK;

	// Negative value sets AutoRange true.  IIviDMM.Configure and Range supports this.
	if (val < 0)
		hr = _IAgilent34401ACVoltage::put_AutoRange(true);
	else
		hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401ACVoltage_get_RangeMax(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401ACVoltage_get_RangeMin(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401ACVoltage_get_Resolution(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401ACVoltage_put_Resolution(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401ACVoltage_get_ResolutionMax(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401ACVoltage_get_ResolutionMin(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IAgilent34401Advanced_get_ActualRange(double* val)
{
	HRESULT hr = S_OK;

	Agilent34401FunctionEnum function;

	// Get current function
	if(FAILED(hr = _IAgilent34401::get_Function(&function)))
		return hr;
    switch (function){
		case Agilent34401FunctionDCVolts:
		case Agilent34401FunctionDCRatioVolts:
			hr = _IAgilent34401DCVoltage::get_Range(val);
			break;
		case Agilent34401FunctionACVolts:
			hr = _IAgilent34401ACVoltage::get_Range(val);
			break;
		case Agilent34401FunctionDCCurrent:
			hr = _IAgilent34401DCCurrent::get_Range(val);
			break;
		case Agilent34401FunctionACCurrent:
			hr = _IAgilent34401ACCurrent::get_Range(val);
			break;
		case Agilent34401Function2WireRes:
			hr = _IAgilent34401Resistance::get_Range(val);
			break;
		case Agilent34401Function4WireRes:
			hr = _IAgilent34401Resistance::get_Range(val);
			break;
		case Agilent34401FunctionFreq:
			// The 34401 has only one range for frequency.
			// 300 kHz is the nominal maximum frequency
			*val = 300.0E3;
			break;
		case Agilent34401FunctionPeriod:
			// Only one range for period. 
			// 0.3333 sec is nominally the longest period.
			// minimum is 3.3 micro seconds
			*val = 1.0/3.0;
			break;
		case Agilent34401FunctionContinuty:
		case Agilent34401FunctionDiode:
			*val = 1.0;
			break;
		default:
			return ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED,_T("Agilent34401FunctionEnum"),_T("ActualRange"),_T("IAgilent34401Advanced::ActualRange"));
    }

	return hr;
}

HRESULT Agilent34401::IAgilent34401Advanced_get_ApertureTime(double* val)
{
	HRESULT hr = S_OK;

	Agilent34401FunctionEnum function;

	// Get current function
	if(FAILED(hr = _IAgilent34401::get_Function(&function)))
		return hr;

    switch (function)
	{
		case Agilent34401FunctionDCVolts:
		case Agilent34401FunctionDCRatioVolts:
			hr = InstrQuery(_T("VOLT:DC:NPLC?"), val);
			break;
		case Agilent34401FunctionDCCurrent:
			hr = InstrQuery(_T("CURR:DC:NPLC?"), val);
			break;
		case Agilent34401Function2WireRes:
			hr = InstrQuery(_T("RES:NPLC?"), val);
			break;
		case Agilent34401Function4WireRes:
			hr = InstrQuery(_T("FRES:NPLC?"), val);
			break;
		case Agilent34401FunctionFreq:
			hr = InstrQuery(_T("FREQ:APER?"), val);
			break;
		case Agilent34401FunctionPeriod:
			hr = InstrQuery(_T("PER:APER?"), val);
			break;
		case Agilent34401FunctionACVolts:
		case Agilent34401FunctionACCurrent:
		case Agilent34401FunctionContinuty:
		case Agilent34401FunctionDiode:
		default:
			return ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED,_T("Agilent34401FunctionEnum"),_T("ApertureTime"),_T("IAgilent34401Advanced::ApertureTime"));
			break;
    }

	return hr;
}

HRESULT Agilent34401::IAgilent34401Advanced_put_ApertureTime(double val)
{
	HRESULT hr = S_OK;

	Agilent34401FunctionEnum function;

	// Get current function
	if(FAILED(hr = _IAgilent34401::get_Function(&function)))
		return hr;
	switch (function)
	{
		case Agilent34401FunctionDCVolts:
		case Agilent34401FunctionDCRatioVolts:
			hr = InstrPrintf(_T("VOLT:DC:NPLC %.15g"), val);
			break;
		case Agilent34401FunctionDCCurrent:
			hr = InstrPrintf(_T("CURR:DC:NPLC %.15g"), val);
			break;
		case Agilent34401Function2WireRes:
			hr = InstrPrintf(_T("RES:NPLC %.15g"), val);
			break;
		case Agilent34401Function4WireRes:
			hr = InstrPrintf(_T("FRES:NPLC %.15g"), val);
			break;
		case Agilent34401FunctionFreq:
			hr = InstrPrintf(_T("FREQ:APER %.15g"), val);
			break;
		case Agilent34401FunctionPeriod:
			hr = InstrPrintf(_T("PER:APER %.15g"), val);
			break;
		case Agilent34401FunctionACVolts:
		case Agilent34401FunctionACCurrent:
		case Agilent34401FunctionContinuty:
		case Agilent34401FunctionDiode:
		default:
			return ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED,_T("Agilent34401FunctionEnum"),_T("ApertureTime"),_T("IAgilent34401Advanced::ApertureTime"));
			break;
    }

	return hr;
}

HRESULT Agilent34401::IAgilent34401Advanced_get_ApertureTimeUnits(Agilent34401ApertureTimeUnitsEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401FunctionEnum function;

	// HP34401 always return the Agilent34401AperturePowerLineCycles when DMM function is DC Voltage,
	// DC Current or Resistance and will return Agilent34401ApertureSeconds when DMM function is
	// Frequency or Period.  All other functions return Not Supported error.

	// Get current function
	if(FAILED(hr = _IAgilent34401::get_Function(&function)))
		return hr;
    switch (function)
	{
		case Agilent34401FunctionDCVolts:
		case Agilent34401FunctionDCRatioVolts:
		case Agilent34401FunctionDCCurrent:
		case Agilent34401Function2WireRes:
		case Agilent34401Function4WireRes:
			*val = Agilent34401AperturePowerLineCycles;
			break;
		case Agilent34401FunctionFreq:
		case Agilent34401FunctionPeriod:
			*val = Agilent34401ApertureSeconds;
			break;
		case Agilent34401FunctionACVolts:
		case Agilent34401FunctionACCurrent:
		case Agilent34401FunctionContinuty:
		case Agilent34401FunctionDiode:
		default:
			return ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED,_T("Agilent34401FunctionEnum"),_T("ApertureTime"),_T("IAgilent34401Advanced::ApertureTime"));
			break;
    }

	return hr;
}

HRESULT Agilent34401::IAgilent34401Advanced_get_AutoImpedance(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommandBool(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Advanced_put_AutoImpedance(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Advanced_get_AutoZero(Agilent34401AutoZeroEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommandEnum(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Advanced_put_AutoZero(Agilent34401AutoZeroEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Advanced_get_InputTerminal(Agilent34401InputTerminalEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommandEnum(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Advanced_get_PowerlineFrequency(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Advanced_get_StoreEnabled(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	// this command only support over firmware 2.0 version
	// DATA:FEED?
	BSTR	bstrResult;
	hr = _IIviDriverIdentity::get_InstrumentFirmwareRevision(&bstrResult);
	CString str(bstrResult);
	double version = _tstof(str.Trim().Left(1));

	if(version >= 2.0)
	{
		CString strResponse;

		hr = InstrQuery(_T("DATA:FEED?"), strResponse, 32);
		if(strResponse.Find("CALC") != -1)
			*val = VARIANT_TRUE;
		else
			*val = VARIANT_FALSE;
	}
	else
		*val = VARIANT_TRUE;

	return hr;
}

HRESULT Agilent34401::IAgilent34401Advanced_put_StoreEnabled(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	// this command only support over firmware 2.0 version
	BSTR	bstrResult;
	hr = _IIviDriverIdentity::get_InstrumentFirmwareRevision(&bstrResult);
	CString str(bstrResult);
	double version = _tstof(str.Trim().Left(1));
	 
	if(version >= 2.0){
		if(val){
			hr = InstrWrite(_T("DATA:FEED RDG_STORE,\"CALC\""));
		}
		else{
			hr = InstrWrite(_T("DATA:FEED RDG_STORE,\"\""));
		}
	}
	// else always setting is true

	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IAgilent34401Calibration_SecureCode(VARIANT_BOOL SecureState, BSTR Code)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		// Update SecureState property simulation value
		CCacheEntry<VARIANT_BOOL>* pSimData = GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401Calibration.SecureState"));
		pSimData->UpdateValue(SecureState);
		return hr;
	}

	// CALibration:SECure:CODE <new code >
	// SecureState : The value of the secure state . 
	// Code : The calibration security code. The code may contain up to 12 characters.


	// CALibration:SECure:STATe {OFF|ON},"HP034401" in case 34401 HP model
	// CALibration:SECure:STATe {OFF|ON},"AG034401" in case 34401 Agilent model
	if(SecureState)
		InstrPrintf(_T("CAL:SEC:STAT ON, %s"),Code);
	else
		InstrPrintf(_T("CAL:SEC:STAT OFF, %s"),Code);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Calibration_Code(BSTR Code)
{
	HRESULT hr = S_OK;

	// first of all, check SecureState
	VARIANT_BOOL	bSecureState;
	_IAgilent34401Calibration::get_SecureState(&bSecureState);

	if (bSecureState)
		return hr =	ReportError(IDS_E_AGILENT34401_IO_GENERAL,_T("Calibration_Code: SecureState must be false before setting Code."));

	if (GetSimulate())
	{
		return hr;
	}

	// To change the security code, proceed as follows:
	// Step 1. Using the Secure State property, turn off the secure state by unchecking the Secure State box.
	// Step 2. Enter the correct security code in the code field. The factory-set security code is "HP034401".
	// Step 3. Using the Code property, enter the new security code. The security code may contain up to 12 characters.
	// Step 4. Using the Secure State property, turn on the secure state by checking the Secure State box.
	// Step 5. Re-enter the new security code in the code field.

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Calibration_get_Count(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Calibration_get_SecureState(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommandBool(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Calibration_get_String(BSTR* val)
{
	HRESULT hr = S_OK;

	CString strResponse;

	hr = InstrQuery(_T("CAL:STR?"), strResponse, 128);
	strResponse.Trim().Remove('"'); // delete any quotes
	*val = strResponse.AllocSysString();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Calibration_put_String(BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Calibration_get_Value(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Calibration_put_Value(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IAgilent34401DCCurrent_Configure(double Range, double Resolution)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401::put_Function(Agilent34401FunctionDCCurrent);
	if(SUCCEEDED(hr))
	{
		hr = _IAgilent34401DCCurrent::put_Range(Range);
		if(SUCCEEDED(hr) && Range > 0)  // use default resolution if AutoRange enabled
			hr = _IAgilent34401DCCurrent::put_Resolution(Resolution);
	}

	return hr;
}

HRESULT Agilent34401::IAgilent34401DCCurrent_get_AutoRange(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommandBool(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401DCCurrent_put_AutoRange(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401DCCurrent_get_Range(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401DCCurrent_put_Range(double val)
{
	HRESULT hr = S_OK;

	// Negative value sets AutoRange true.  IIviDMM.Configure and Range supports this.
	if (val < 0)
		hr = _IAgilent34401DCCurrent::put_AutoRange(true);
	else
		hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401DCCurrent_get_RangeMax(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401DCCurrent_get_RangeMin(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401DCCurrent_get_Resolution(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401DCCurrent_put_Resolution(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401DCCurrent_get_ResolutionMax(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401DCCurrent_get_ResolutionMin(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IAgilent34401DCVoltage_Configure(double Range, double Resolution)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401::put_Function(Agilent34401FunctionDCVolts);
	if(SUCCEEDED(hr))
	{
		hr = _IAgilent34401DCVoltage::put_Range(Range);
		if(SUCCEEDED(hr) && Range > 0)  // use default resolution if AutoRange enabled
			hr = _IAgilent34401DCVoltage::put_Resolution(Resolution);
	}

	return hr;
}

HRESULT Agilent34401::IAgilent34401DCVoltage_get_AutoRange(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommandBool(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401DCVoltage_put_AutoRange(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401DCVoltage_get_Range(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401DCVoltage_put_Range(double val)
{
	HRESULT hr = S_OK;

	// Negative value sets AutoRange true.  IIviDMM.Configure and Range supports this.
	if (val < 0)
		hr = _IAgilent34401DCVoltage::put_AutoRange(true);
	else
		hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401DCVoltage_get_RangeMax(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401DCVoltage_get_RangeMin(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401DCVoltage_get_Resolution(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401DCVoltage_put_Resolution(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401DCVoltage_get_ResolutionMax(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401DCVoltage_get_ResolutionMin(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IAgilent34401DCVoltageRatio_get_InputVoltageMax(double* val)
{
	HRESULT hr = S_OK;

	*val = 1000.0;
	
	return hr;
}

HRESULT Agilent34401::IAgilent34401DCVoltageRatio_get_InputVoltageMin(double* val)
{
	HRESULT hr = S_OK;

	*val = 0.1;
	
	return hr;
}

HRESULT Agilent34401::IAgilent34401DCVoltageRatio_get_ReferenceVoltageMax(double* val)
{
	HRESULT hr = S_OK;

	*val = 11.99999;
	
	return hr;
}

HRESULT Agilent34401::IAgilent34401DCVoltageRatio_get_ReferenceVoltageMin(double* val)
{
	HRESULT hr = S_OK;

	*val = 0.1;
	
	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IAgilent34401Display_Clear()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		return hr;
	}

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Display_get_Enabled(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommandBool(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Display_put_Enabled(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Display_get_Text(BSTR* val)
{
	HRESULT hr = S_OK;

	CString strResponse;

	hr = InstrQuery(_T("DISP:TEXT?"), strResponse, 128);
	strResponse.Trim().Remove('"'); // delete any quotes
	*val = strResponse.AllocSysString();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Display_put_Text(BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IAgilent34401Frequency_get_AutoVoltageRange(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommandBool(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Frequency_put_AutoVoltageRange(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Frequency_get_VoltageRange(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Frequency_put_VoltageRange(double val)
{
	HRESULT hr = S_OK;

	// Negative value sets AutoRange true.  IIviDMM.Configure and Range supports this.
	if (val < 0)
		_IAgilent34401Frequency::put_AutoVoltageRange(true);
	else
		hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Frequency_get_VoltageRangeMax(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Frequency_get_VoltageRangeMin(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IAgilent34401Math_get_Average(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Math_get_Count(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Math_get_dBmRefResistance(Agilent34401dBmRefResistanceEnum* val)
{
	HRESULT hr = S_OK;
	double value;

	//hr = InstrQueryCommandEnum(val);
	hr = InstrQuery(_T("CALC:DBM:REF?"), &value);
	if (value == 50.0)
		*val = Agilent34401dBmRef50_Ohm;
	else if (value == 75.0)
		*val = Agilent34401dBmRef75_Ohm;
	else if (value == 93.0)
		*val = Agilent34401dBmRef93_Ohm;
	else if (value == 110.0)
		*val = Agilent34401dBmRef110_Ohm;
	else if (value == 124.0)
		*val = Agilent34401dBmRef124_Ohm;
	else if (value == 125.0)
		*val = Agilent34401dBmRef125_Ohm;
	else if (value == 135.0)
		*val = Agilent34401dBmRef135_Ohm;
	else if (value == 150.0)
		*val = Agilent34401dBmRef150_Ohm;
	else if (value == 250.0)
		*val = Agilent34401dBmRef250_Ohm;
	else if (value == 300.0)
		*val = Agilent34401dBmRef300_Ohm;
	else if (value == 500.0)
		*val = Agilent34401dBmRef500_Ohm;
	else if (value == 600.0)
		*val = Agilent34401dBmRef600_Ohm;
	else if (value == 800.0)
		*val = Agilent34401dBmRef800_Ohm;
	else if (value == 900.0)
		*val = Agilent34401dBmRef900_Ohm;
	else if (value == 1000.0)
		*val = Agilent34401dBmRef1000_Ohm;
	else if (value == 1200.0)
		*val = Agilent34401dBmRef1200_Ohm;
	else if (value == 8000.0)
		*val = Agilent34401dBmRef8000_Ohm;
	else
		hr = ReportError(IDS_E_IVI_UNEXPECTED_RESPONSE);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Math_put_dBmRefResistance(Agilent34401dBmRefResistanceEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Math_get_dBReference(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Math_put_dBReference(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Math_get_Enabled(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommandBool(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Math_put_Enabled(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Math_get_Function(Agilent34401MathFunctionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommandEnum(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Math_put_Function(Agilent34401MathFunctionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Math_get_LimitLower(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Math_put_LimitLower(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Math_get_LimitUpper(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Math_put_LimitUpper(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Math_get_Maximum(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Math_get_Minimum(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Math_get_NullOffset(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Math_put_NullOffset(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IAgilent34401Measurement_SendSoftwareTrigger()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		return hr;
	}

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Measurement_ReadMultiPoint(long MaxTimeMilliseconds, SAFEARRAY** ReadingArray)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		long count, sampleCount, elements;
		CComSafeArray<double> csaData;

		if (FAILED(hr = _IAgilent34401MultiPoint::get_Count(&count)))
			return hr;
		if (FAILED(hr = _IAgilent34401MultiPoint::get_SampleCount(&sampleCount)))
			return hr;
		elements = count * sampleCount;
		hr = csaData.Create(elements);
		if (SUCCEEDED(hr))
		{
			// Set the values of the elements
			for (int i=0; i< elements; i++)
			{
				csaData[i] = 0.0;
			}
			// Assign the SAFEARRAY* while transfering ownership  
			*ReadingArray = csaData.Detach();
		}
		return hr;
	}

	// minimum timeout 2000ms
	if(MaxTimeMilliseconds < 2000) 
		MaxTimeMilliseconds = 2000;

	hr = InstrPrintCommandNoPoll(); // READ?
	if (SUCCEEDED(hr))
	{
		// Read a list of doubles separated by comma
		hr = FormattedReadList(NtlAsciiType_R8, _T(","), ReadingArray, MaxTimeMilliseconds);
	}

	return hr;
}

HRESULT Agilent34401::IAgilent34401Measurement_Read(long MaxTimeMilliseconds, double* val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*val = 0.0;
		return hr;
	}

	// minimum timeout 2000ms
	if(MaxTimeMilliseconds < 2000) 
		MaxTimeMilliseconds = 2000;

	hr = InstrQuery(_T("READ?"), val, MaxTimeMilliseconds);

	// invalidate all of range and resolution
//	GetInstrumentState()->InvalidateAll();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Measurement_IsOverRange(double MeasurementValue, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		//return hr;
	}

	*val = (MeasurementValue >= 9.9e+37)? VARIANT_TRUE : VARIANT_FALSE;
	
	return hr;
}

HRESULT Agilent34401::IAgilent34401Measurement_Initiate()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		return hr;
	}

	hr = InstrPrintCommandNoPoll();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Measurement_FetchMultiPoint(long MaxTimeMilliseconds, SAFEARRAY** ReadingArray)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		long count, sampleCount, elements;
		CComSafeArray<double> csaData;

		if (FAILED(hr = _IAgilent34401MultiPoint::get_Count(&count)))
			return hr;
		if (FAILED(hr = _IAgilent34401MultiPoint::get_SampleCount(&sampleCount)))
			return hr;
		elements = count * sampleCount;
		hr = csaData.Create(elements);
		if (SUCCEEDED(hr))
		{
			// Set the values of the elements
			for (int i=0; i< elements; i++)
			{
				csaData[i] = 0.0;
			}
			// Assign the SAFEARRAY* while transfering ownership  
			*ReadingArray = csaData.Detach();
		}
		return hr;
	}

	// minimum timeout 2000ms
	if(MaxTimeMilliseconds < 2000) 
		MaxTimeMilliseconds = 2000;

	hr = InstrPrintCommandNoPoll(); // FETC?
	if (SUCCEEDED(hr))
	{
		// Read a list of doubles separated by comma
		hr = FormattedReadList(NtlAsciiType_R8, _T(","), ReadingArray, MaxTimeMilliseconds);
	}

	return hr;
}

HRESULT Agilent34401::IAgilent34401Measurement_Fetch(long MaxTimeMilliseconds, double* val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*val = 0.0;
		return hr;
	}

	// minimum timeout 2000ms
	if(MaxTimeMilliseconds < 2000) 
		MaxTimeMilliseconds = 2000;

	hr = InstrQuery(_T("FETC?"), val, MaxTimeMilliseconds);

	// invalidate all of range and resolution
//	GetInstrumentState()->InvalidateAll();

	// If an overrange condition occurs, the corresponding  pReading element 
	// contains an IEEE defined NaN(Not a Number) value and the function returns Over Range
//	if(*val == 9.9e37)
//		*val = numeric_limits<double>::infinity();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Measurement_Abort()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		return hr;
	}

	hr = DeviceClear();
	// DeviceClear causes RS232 framing error so clear the error que.
	if (m_bRS232Flag) InstrPrintfNoPoll(_T("*CLS"));
	
	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IAgilent34401MultiPoint_Configure(long TriggerCount, long SampleCount, Agilent34401SampleTriggerEnum SampleTrigger, double SampleInterval)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401MultiPoint::put_Count(TriggerCount);
	if(SUCCEEDED(hr))
		hr = _IAgilent34401MultiPoint::put_SampleCount(SampleCount);
	if(SUCCEEDED(hr))
		hr = _IAgilent34401MultiPoint::put_SampleTrigger(SampleTrigger);
	if(SUCCEEDED(hr))
		hr = _IAgilent34401MultiPoint::put_SampleInterval(SampleInterval);

	return hr;
}

HRESULT Agilent34401::IAgilent34401MultiPoint_get_Count(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401MultiPoint_put_Count(long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401MultiPoint_get_MeasurementComplete(Agilent34401MeasCompleteDestEnum* val)
{
	HRESULT hr = S_OK;

	// After each measurement, the DMM generates a measurement-complete signal. This attribute specifies the
	// destination of the measurement-complete signal. This signal is commonly referred to as Voltmeter Complete.
	// Routes the measurement complete signal to the external connector.
	// If trigger source is External then this value is Agilent34401MeasCompleteDestExternal
	// other case are Agilent34401MeasCompleteDestNone
	Agilent34401TriggerSourceEnum	source;
	hr = _IAgilent34401Trigger::get_Source(&source);
	if (source == Agilent34401TriggerSourceExternal)
		*val = Agilent34401MeasCompleteDestExternal;
	else
		*val = Agilent34401MeasCompleteDestNone;


	return hr;
}

HRESULT Agilent34401::IAgilent34401MultiPoint_put_MeasurementComplete(Agilent34401MeasCompleteDestEnum val)
{
	HRESULT hr = S_OK;

	if(val == Agilent34401MeasCompleteDestExternal)
		hr = _IAgilent34401Trigger::put_Source(Agilent34401TriggerSourceExternal);

	return hr;
}

HRESULT Agilent34401::IAgilent34401MultiPoint_get_SampleCount(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401MultiPoint_put_SampleCount(long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401MultiPoint_get_SampleInterval(double* val)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401Trigger::get_Delay(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401MultiPoint_put_SampleInterval(double val)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401Trigger::put_Delay(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401MultiPoint_get_SampleTrigger(Agilent34401SampleTriggerEnum* val)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401Trigger::get_Source((Agilent34401TriggerSourceEnum*)val);
	if( *val == Agilent34401SampleTriggerImmediate)
	{
		long	lSampleCount = 0;
		// SAMPle:COUNt? [MINimum|MAXimum]
		hr = _IAgilent34401MultiPoint::get_SampleCount(&lSampleCount);
		if(lSampleCount > 1)
			*val = Agilent34401SampleTriggerInterval;
		else
			*val = Agilent34401SampleTriggerImmediate;
	}

	return hr;
}

HRESULT Agilent34401::IAgilent34401MultiPoint_put_SampleTrigger(Agilent34401SampleTriggerEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IAgilent34401Resistance_Configure(double Range, double Resolution)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401Resistance::put_Range(Range);
	if(SUCCEEDED(hr) && Range > 0)
		hr = _IAgilent34401Resistance::put_Resolution(Resolution);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Resistance_get_AutoRange(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommandBool(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Resistance_put_AutoRange(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Resistance_get_Range(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Resistance_put_Range(double val)
{
	HRESULT hr = S_OK;

	// Negative value sets AutoRange true.  IIviDMM.Configure and Range supports this.
	if (val < 0)
		hr = _IAgilent34401Resistance::put_AutoRange(true);
	else
		hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Resistance_get_RangeMax(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Resistance_get_RangeMin(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Resistance_get_Resolution(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Resistance_put_Resolution(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Resistance_get_ResolutionMax(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Resistance_get_ResolutionMin(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IAgilent34401Status_QueryRegister(Agilent34401StatusRegisterEnum Register, Agilent34401StatusSubRegisterEnum SubRegister, long* val)
{
	HRESULT hr = S_OK;
	CString strCommand;

	if (GetSimulate())
	{
		*val = 0;
		return hr;
	}

	// STATus:QUEStionable:ENAble?
	// STATus:QUEStionable:EVEnt?
	// *ESE?
	// *ESR?
	// *SRE?
	// *STB?

	switch(Register){
		case Agilent34401StatusRegisterStatusByte:
			switch(SubRegister){
				// queries the Status Byte summary register	
				case Agilent34401StatusSubRegisterSummary:
					strCommand = "*STB?";
				break;
				//queries the Status Byte Enable register
				case Agilent34401StatusSubRegisterEnable:
					strCommand = "*SRE?";
				break;
				default:
					return ReportError(IDS_E_IVI_INVALID_VALUE,_T("Agilent34401StatusRegisterStatusByte,Agilent34401StatusSubRegisterEvent"),_T("QueryRegister()"),_T("Register & SubRegister"));
			}
		break;
		case Agilent34401StatusRegisterQuestionableData:
			switch(SubRegister){
				// STATus:QUEStionable[:CONDition]?
				case Agilent34401StatusSubRegisterEvent:
					strCommand = "STAT:QUES:EVEN?";
				break;
				// STATus:QUEStionable:ENABle?
				case Agilent34401StatusSubRegisterEnable:
					strCommand = "STAT:QUES:ENAB?";
				break;
				default:
					return ReportError(IDS_E_IVI_INVALID_VALUE,_T("Agilent34401StatusRegisterQuestionableData,Agilent34401StatusSubRegisterSummary"),_T("QueryRegister()"),_T("Register & SubRegister"));
			}
		break;
		case Agilent34401StatusRegisterStandardEvent:
			switch(SubRegister){
				// queries the Standard event register
				case Agilent34401StatusSubRegisterEvent:
					strCommand = "*ESR?";
				break;
				// queries the Standard Event enable register
				case Agilent34401StatusSubRegisterEnable:
					strCommand = "*ESE?";
				break;
				default:
					return ReportError(IDS_E_IVI_INVALID_VALUE,_T("Agilent34401StatusRegisterStandardEvent,Agilent34401StatusSubRegisterSummary"),_T("QueryRegister()"),_T("Register & SubRegister"));
			}
		break;
		default:
			return ReportError(IDS_E_IVI_INVALID_VALUE,_T("Agilent34401StatusRegisterEnum"),_T("QueryRegister()"),_T("Register & SubRegister"));
	}

	hr = InstrQueryf(_T("%s"), val, LPCTSTR(strCommand));

	return hr;
}

HRESULT Agilent34401::IAgilent34401Status_Preset()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		return hr;
	}

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Status_ConfigureRegister(Agilent34401StatusRegisterEnum Register, Agilent34401StatusSubRegisterEnum SubRegister, long Val)
{
	HRESULT hr = S_OK;
	CString strCommand;

	if (GetSimulate())
	{
		return hr;
	}

	// STATus:QUEStionable:Enable <value>
	// *ESE <value>
	// *SRE <value>

	switch(Register){
		case Agilent34401StatusRegisterStatusByte:
			switch(SubRegister){
				default:
					return ReportError(IDS_E_IVI_INVALID_VALUE,_T("Agilent34401StatusRegisterStatusByte,Agilent34401StatusSubRegisterEvent"),_T("ConfigureRegister()"),_T("Register & SubRegister"));
				case Agilent34401StatusSubRegisterSummary: // read only
					return ReportError(IDS_E_IVI_INVALID_VALUE,_T("Agilent34401StatusSubRegisterSummary"),_T("ConfigureRegister()"),_T("SubRegister"));
				case Agilent34401StatusSubRegisterEnable:
					// check range between from 2^3(8) to 2^3+2^4+2^5(56)
					if(Val < 0 || Val > 56)
						return ReportInvalidValueError(_T("ConfigureRegister()"), _T("Val"), (long)Val);
					strCommand = "*SRE ";
				break;
			}
		break;
		case Agilent34401StatusRegisterQuestionableData:
			switch(SubRegister){
				default:
					return ReportError(IDS_E_IVI_INVALID_VALUE,_T("Agilent34401StatusRegisterQuestionableData,Agilent34401StatusSubRegisterSummary"),_T("ConfigureRegister()"),_T("Register & SubRegister"));
				case Agilent34401StatusSubRegisterEvent: // read only
					return ReportError(IDS_E_IVI_INVALID_VALUE,_T("Agilent34401StatusSubRegisterEvent"),_T("ConfigureRegister()"),_T("SubRegister"));
				case Agilent34401StatusSubRegisterEnable:
					// check range between from 2^1(1) to 2^1+2^2+2^9+2^11+2^12
					if(Val < 0 || Val > 6659)
						return ReportInvalidValueError(_T("ConfigureRegister()"), _T("Val"), (long)Val);
					strCommand = "STAT:QUES:ENAB ";
				break;
			}
		break;
		case Agilent34401StatusRegisterStandardEvent:
			switch(SubRegister){
				default:
					return ReportError(IDS_E_IVI_INVALID_VALUE,_T("Agilent34401StatusRegisterStandardEvent,Agilent34401StatusSubRegisterSummary"),_T("ConfigureRegister()"),_T("Register & SubRegister"));
				case Agilent34401StatusSubRegisterEvent: // read only
					return ReportError(IDS_E_IVI_INVALID_VALUE,_T("Agilent34401StatusSubRegisterSummary"),_T("ConfigureRegister()"),_T("SubRegister"));
				case Agilent34401StatusSubRegisterEnable:
					if(Val < 0 || Val > 255)
						return ReportInvalidValueError(_T("ConfigureRegister()"), _T("Val"), (long)Val);
					strCommand = "*ESE ";
				break;
			}
		break;
		default:
			return ReportError(IDS_E_IVI_INVALID_VALUE,_T("Agilent34401StatusRegisterEnum"),_T("ConfigureRegister()"),_T("Register & SubRegister"));
	}

	hr = InstrPrintf(_T("%s %d"), LPCTSTR(strCommand), Val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Status_Clear()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		return hr;
	}

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Status_get_Register(Agilent34401StatusRegisterEnum Register, Agilent34401StatusSubRegisterEnum SubRegister, long* val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		if (SubRegister == Agilent34401StatusSubRegisterSummary || SubRegister == Agilent34401StatusSubRegisterEvent)
			*val = 0;
		else
		{
			CCacheEntry<long>* pSimData = this->GetOrCreateCacheEntry<long>(_T("IAgilent34401Status.Register"));
			if (!pSimData->GetValue(val))
			{
				*val = 0;
			}
		}
		return hr;
	}

	hr = IAgilent34401Status_QueryRegister(Register, SubRegister, val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Status_put_Register(Agilent34401StatusRegisterEnum Register, Agilent34401StatusSubRegisterEnum SubRegister, long val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		CCacheEntry<long>* pSimData = GetOrCreateCacheEntry<long>(_T("IAgilent34401Status.Register"));
		pSimData->UpdateValue(val);
	}

	hr = IAgilent34401Status_ConfigureRegister(Register, SubRegister, val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Status_get_SerialPoll(long* val)
{
	HRESULT hr = S_OK;

	hr = ReadSTB(val);
	
	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IAgilent34401System_WaitForOperationComplete(long MaxTimeMilliseconds)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		return hr;
	}

    long lComplete;

    hr = InstrQueryCommand(&lComplete, MaxTimeMilliseconds);
    
	if ( hr == E_VISA_TMO ) // hr == -2147221483
	{
		hr = err.IoTimeoutError(_T("WaitForOperationComplete MaxTime exceeded."));
	}
	
	return hr;
}

HRESULT Agilent34401::IAgilent34401System_EnableLocalControls()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		return hr;
	}

	if( m_bRS232Flag )
	{
		// SYSTem:LOCal	
		hr = InstrPrintf(_T("SYST:LOC"));
		return hr;
	}

	USES_CONVERSION;
		
	IVisaSession* pVisa = NULL;
	IGpib* pGpib        = NULL;
		
	hr = io.DirectIo.GetIVisaSessionPointer(&pVisa);
	if(NULL == pVisa)
		return ReportError(IDS_E_IVI_NOT_INITIALIZED);
		
	// Try to get the IGpib interface associated with our device session.
	hr = pVisa->QueryInterface(__uuidof(IGpib), (void**) &pGpib);
	if(FAILED(hr))
	{
		// The QI could fail if the interface is not GPIB.
		pVisa->Release();
		return ReportError(IDS_E_IVI_METHOD_NOT_SUPPORTED, _T("EnableLocalControls, Interface not supported, GPIB only"));
	} else {
		// There is a bug where DisableLocalControl will put All instruments in LLO.
		// So this clears LLO for all instruments.
		hr = pGpib->ControlREN(GPIB_REN_GTL_AND_DEASSERT);
		hr = pGpib->ControlREN(GPIB_REN_ASSERT);
		//pGpib->ControlREN(GPIB_REN_GTL);
		if(hr == E_VISA_NSUP_OPER) hr = S_OK; // Ignore error for simulation.
		pGpib->Release();
		pVisa->Release();
		if(FAILED(hr)){
			// There is no reason to expect ControlREN to fail.
			return ReportError(IDS_E_IVI_UNEXPECTED_RESPONSE);
		}
	}
	
	return hr;
}

HRESULT Agilent34401::IAgilent34401System_DisableLocalControls()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		return hr;
	}

	if( m_bRS232Flag )
	{
		// SYSTem:REMote	
		hr = InstrPrintf(_T("SYST:REM"));
		return hr;
	}

	USES_CONVERSION;
		
	IVisaSession* pVisa = NULL;
	IGpib* pGpib        = NULL;
		
	hr = io.DirectIo.GetIVisaSessionPointer(&pVisa);
	if(NULL == pVisa)
		return ReportError(IDS_E_IVI_NOT_INITIALIZED);
		
	// Try to get the IGpib interface associated with our device session.
	hr = pVisa->QueryInterface(__uuidof(IGpib), (void**) &pGpib);
	if(FAILED(hr))
	{
		// The QI could fail if the interface is not GPIB.
		pVisa->Release();
		return ReportError(IDS_E_IVI_METHOD_NOT_SUPPORTED, _T("DisableLocalControls, Interface not supported, GPIB only"));
	} else {
		// Got the IGpib interface. Do the heavy lifting and Disable Local Controls
		// by sending Go To Local.
		// Really should use
		//		hr = pGpib->ControlREN(GPIB_REN_ADDRESS_AND_LLO);
		// but NI Visa sends a GTL and not an LLO. To fake it, send an empty 
		// string which just does addressing after sending LLO
		
		hr = pGpib->ControlREN(GPIB_REN_LLO);
		if(hr == E_VISA_NSUP_OPER) hr = S_OK; // Ignore error for simulation.
		if(FAILED(hr))
		{
			pGpib->Release();
			pVisa->Release();
			// There is no reason to expect ControlREN to fail.
			return ReportError(IDS_E_IVI_UNEXPECTED_RESPONSE);
		}
		
		IMessage* pMsg = NULL;
		hr = io.DirectIo.GetIMessagePointer(&pMsg);
		if(pMsg)
		{
			long cbActual;
			// WriteString won't take a NULL or empty string. A newline
			// should be a nop to a SCPI instrument.
			CComBSTR bstr("\n");
			hr = pMsg->WriteString(bstr, &cbActual);
			if(FAILED(hr))
			{
				pGpib->Release();
				// There is no reason to expect WriteString to fail.
				return ReportError(IDS_E_IVI_UNEXPECTED_RESPONSE);
			}
			pMsg->Release();
		}
		pGpib->Release();
		pVisa->Release();
	}
	
	return hr;
}

HRESULT Agilent34401::IAgilent34401System_Beep()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		return hr;
	}

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401System_get_AsyncEventsEnabled(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_AGILENT34401_NOT_SUPPORTED, _T("AsyncEventsEnabled"));
	
	return hr;
}

HRESULT Agilent34401::IAgilent34401System_put_AsyncEventsEnabled(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	return ReportError(IDS_E_AGILENT34401_NOT_SUPPORTED, _T("AsyncEventsEnabled"));
	
	return hr;
}

HRESULT Agilent34401::IAgilent34401System_get_BeeperEnabled(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommandBool(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401System_put_BeeperEnabled(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401System_get_IO(IFormattedIO488** val)
{
	HRESULT hr = S_OK;

	if(GetSimulate())
		hr=ReportError(IDS_E_AGILENT34401_IO_GENERAL, _T("Direct I/O not available while Simulating"));
	else
		hr = io.DirectIo.GetIFormattedIO488Pointer(val);
	
	return hr;
}

HRESULT Agilent34401::IAgilent34401System_get_TimeoutMilliseconds(long* val)
{
	HRESULT hr = S_OK;

	hr = GetIOTimeout(val);
	
	return hr;
}

HRESULT Agilent34401::IAgilent34401System_put_TimeoutMilliseconds(long val)
{
	HRESULT hr = S_OK;

	if (val < 100) val = 100;  // 100ms minimum.
	
	hr = SetIOTimeout(val);
	
	return hr;
}

HRESULT Agilent34401::IAgilent34401System_get_TraceEnabled(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = GetTraceEnabled(val);
	
	return hr;
}

HRESULT Agilent34401::IAgilent34401System_put_TraceEnabled(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = SetTraceEnabled(val);
	
	return hr;
}




/******************************************************************************
 *****************************************************************************/

HRESULT Agilent34401::IAgilent34401Trigger_Configure(Agilent34401TriggerSourceEnum TriggerSource, double TriggerDelay)
{
	HRESULT hr = S_OK;

	hr = _IAgilent34401Trigger::put_Source(TriggerSource);
	if(SUCCEEDED(hr))
		hr = _IAgilent34401Trigger::put_Delay(TriggerDelay);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Trigger_get_AutoDelay(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommandBool(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Trigger_put_AutoDelay(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Trigger_get_Delay(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommand(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Trigger_put_Delay(double val)
{
	HRESULT hr = S_OK;

	// Negative value sets AutoDelay true.  IIviDMMTrigger.Configure and Delay supports this.
	if (val < 0)
		hr = _IAgilent34401Trigger::put_AutoDelay(true);
	else
		hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent34401Trigger_get_MultiPoint(IAgilent34401MultiPoint** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IAgilent34401Trigger_get_Slope(Agilent34401TriggerSlopeEnum* val)
{
	HRESULT hr = S_OK;

	*val = Agilent34401TriggerSlopeNegative;
	
	return hr;
}

HRESULT Agilent34401::IAgilent34401Trigger_get_Source(Agilent34401TriggerSourceEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryCommandEnum(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401Trigger_put_Source(Agilent34401TriggerSourceEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Agilent34401::IAgilent344012_get_System2(IAgilent34401System2** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Agilent34401::IAgilent34401System2_ReadBytes(SAFEARRAY** val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		CComSafeArray<byte> csaData;

		int points = 3;
		hr = csaData.Create(points);
		if (SUCCEEDED(hr))
		{
			// Set the values of the elements
			for (int i = 0; i < points; i++)
			{
				csaData[i] = 0;
			}
			// Assign the SAFEARRAY* while transfering ownership  
			*val = csaData.Detach();
		}
		return hr;
	}

	hr = io.Read(val,1000000);  // 1Mb maximum

	return hr;
}

HRESULT Agilent34401::IAgilent34401System2_ReadString(BSTR* val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*val = ::SysAllocString(L"");
		return hr;
	}

	hr = io.ReadString(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401System2_WriteBytes(SAFEARRAY** Buffer, __int64* val)
{
	HRESULT hr = S_OK;

	long ubound;
	hr = SafeArrayGetUBound(*Buffer,1,&ubound);
	if(GetSimulate())
	{
		*val = ubound+1;
		return hr;
	}

	hr = io.WriteNoPoll(*Buffer,ubound+1, (long*)val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401System2_WriteString(BSTR Data)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = io.WriteStringNoPoll(Data);

	return hr;
}

HRESULT Agilent34401::IAgilent34401System2_get_IOTimeout(long* val)
{
	HRESULT hr = S_OK;

	hr = GetIOTimeout(val);

	return hr;
}

HRESULT Agilent34401::IAgilent34401System2_put_IOTimeout(long val)
{
	HRESULT hr = S_OK;

	if (val < 10) val = 10;  // 10ms minimum
	hr = SetIOTimeout(val);

	return hr;
}
