/******************************************************************************
 *                                                                         
 *               Copyright Keysight Technologies 2003-2014
 *               All rights reserved.
 *
 *****************************************************************************/

#include "stdafx.h"

#include "ag34401.h"
#include "Ag34401.nimbus.h"

ViStatus TranslateUnknownHRESULT(ViSession session, HRESULT hr)
{
	ViStatus error = 0x80000000; // _VI_ERROR
	return ReportErrorUsingComErrorInfoDescription(session, error);
}

ViStatus _VI_FUNC Ag34401_SystemRead ( ViSession Vi, ViInt32 Size, ViInt32 ValueBufferSize, ViChar Value[], ViInt32* ActualSize )
{
	ViStatus status = VI_SUCCESS;
	IVIC_TRACE(_T("Ag34401_SystemRead\n"));
	*ActualSize = 0;

	CComPtr<IAgilent34401System> spSystem;
	status = GetDriverInterface(Vi, &spSystem);
	if (status == VI_SUCCESS)
	{
		IFormattedIO488* pIO = NULL;
		HRESULT hr = spSystem->get_IO( &pIO );
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			CParam<ViChar[]> _val;
			hr = pIO->ReadString(&_val);
			status = TranslateHRESULT(Vi, hr);
			if (status == VI_SUCCESS)
			{
				status = _val.GetVal(Value, Size);
				*ActualSize = (int) strlen(Value);
			}
		}
	}
	return status;
}

ViStatus _VI_FUNC  Ag34401_SystemWrite( ViSession Vi, ViConstString CommandString )
{
	ViStatus status = VI_SUCCESS;

	IVIC_TRACE(_T("Ag34401_SystemWrite\n"));

	CComPtr<IAgilent34401System> spSystem;
	status = GetDriverInterface(Vi, &spSystem);
	if (status == VI_SUCCESS)
	{
		IFormattedIO488* pIO = NULL;
		HRESULT hr = spSystem->get_IO( &pIO );
		status = TranslateHRESULT(Vi, hr);
		if (status == VI_SUCCESS)
		{
			CParam<ViConstString> _val(CommandString);
			long count = 0;
			hr = pIO->WriteString( _val, VARIANT_TRUE );
			status = TranslateHRESULT(Vi, hr);
		}
	}
	return status;
}


    /*- Specific Measurements */

ViStatus _VI_FUNC  Ag34401_ConfigureFrequencyVoltageRange ( ViSession Vi, ViReal64 FrequencyVoltageRange )
{
	ViStatus status = VI_SUCCESS;
	
	IVIC_TRACE(_T("Ag34401_ConfigureFrequencyVoltageRange\n"));

	HRESULT hr;

	IUnknown* pDriver = NULL;
	status = GetDriver(Vi, &pDriver);
	if (status == VI_SUCCESS)
	{
		IIviDmmFrequency* pIIviDmmFrequency = NULL;
		hr = pDriver->QueryInterface(&pIIviDmmFrequency);
		status = TranslateHRESULT(Vi, hr);
		ATLASSERT(SUCCEEDED(hr));
		if (SUCCEEDED(hr))
		{
			hr = pIIviDmmFrequency->put_VoltageRange(FrequencyVoltageRange);
			status = TranslateHRESULT(Vi, hr);
			pIIviDmmFrequency->Release();
		}
		pDriver->Release();
	}

	return status;
}


    /*- Trigger */

    /*- Configuration Information */

ViStatus _VI_FUNC  Ag34401_GetApertureTimeInfo ( ViSession Vi, ViReal64* ApertureTime, ViInt32* ApertureTimeUnits )
{
	ViStatus status = VI_SUCCESS;
	
	IVIC_TRACE(_T("Ag34401_GetApertureTimeInfo\n"));

	HRESULT hr;

	IUnknown* pDriver = NULL;
	status = GetDriver(Vi, &pDriver);
	if (status == VI_SUCCESS)
	{
		IIviDmmAdvanced* pIIviDmmAdvanced = NULL;
		hr = pDriver->QueryInterface(&pIIviDmmAdvanced);
		status = TranslateHRESULT(Vi, hr);
		ATLASSERT(SUCCEEDED(hr));
		if (SUCCEEDED(hr))
		{
			hr = pIIviDmmAdvanced->get_ApertureTime(ApertureTime);
			if (SUCCEEDED(hr))
				hr = pIIviDmmAdvanced->get_ApertureTimeUnits((IviDmmApertureTimeUnitsEnum*)ApertureTimeUnits);
			status = TranslateHRESULT(Vi, hr);
			pIIviDmmAdvanced->Release();
		}
		pDriver->Release();
	}

	return status;
}

ViStatus _VI_FUNC  Ag34401_GetAutoRangeValue ( ViSession Vi, ViReal64* AutoRangeValue )
{
	ViStatus status = VI_SUCCESS;
	
	IVIC_TRACE(_T("Ag34401_GetAutoRangeValue\n"));

	HRESULT hr;

	IUnknown* pDriver = NULL;
	status = GetDriver(Vi, &pDriver);
	if (status == VI_SUCCESS)
	{
		IIviDmmAdvanced* pIIviDmmAdvanced = NULL;
		hr = pDriver->QueryInterface(&pIIviDmmAdvanced);
		status = TranslateHRESULT(Vi, hr);
		ATLASSERT(SUCCEEDED(hr));
		if (SUCCEEDED(hr))
		{
			hr = pIIviDmmAdvanced->get_ActualRange(AutoRangeValue);
			status = TranslateHRESULT(Vi, hr);
			pIIviDmmAdvanced->Release();
		}
		pDriver->Release();
	}

	return status;
}


    /*- MultiPoint */

ViStatus _VI_FUNC  Ag34401_ConfigureMeasCompleteDest ( ViSession Vi, ViInt32 MeasCompleteDest )
{
	ViStatus status = VI_SUCCESS;
	
	IVIC_TRACE(_T("Ag34401_ConfigureMeasCompleteDest\n"));

	HRESULT hr;

	IUnknown* pDriver = NULL;
	status = GetDriver(Vi, &pDriver);
	if (status == VI_SUCCESS)
	{
		IIviDmmMultiPoint* pIIviDmmMultiPoint = NULL;
		hr = pDriver->QueryInterface(&pIIviDmmMultiPoint);
		status = TranslateHRESULT(Vi, hr);
		ATLASSERT(SUCCEEDED(hr));
		if (SUCCEEDED(hr))
		{
			hr = pIIviDmmMultiPoint->put_MeasurementComplete((IviDmmMeasCompleteDestEnum)MeasCompleteDest);
			status = TranslateHRESULT(Vi, hr);
			pIIviDmmMultiPoint->Release();
		}
		pDriver->Release();
	}

	return status;
}


    /*- Measurement Operation Options */

ViStatus _VI_FUNC  Ag34401_ConfigureAutoZeroMode ( ViSession Vi, ViInt32 AutoZeroMode )
{
	ViStatus status = VI_SUCCESS;
	
	IVIC_TRACE(_T("Ag34401_ConfigureAutoZeroMode\n"));

	HRESULT hr;

	IUnknown* pDriver = NULL;
	status = GetDriver(Vi, &pDriver);
	if (status == VI_SUCCESS)
	{
		IIviDmmAdvanced* pIIviDmmAdvanced = NULL;
		hr = pDriver->QueryInterface(&pIIviDmmAdvanced);
		status = TranslateHRESULT(Vi, hr);
		ATLASSERT(SUCCEEDED(hr));
		if (SUCCEEDED(hr))
		{
			hr = pIIviDmmAdvanced->put_AutoZero((IviDmmAutoZeroEnum)AutoZeroMode);
			status = TranslateHRESULT(Vi, hr);
			pIIviDmmAdvanced->Release();
		}
		pDriver->Release();
	}

	return status;
}

