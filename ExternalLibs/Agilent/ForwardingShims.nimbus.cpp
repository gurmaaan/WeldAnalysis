/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/
#include "StdAfx.h"
#include "CoAgilent34401.h"


HRESULT ForwardingShimImpl::IIviDriver_Initialize(Agilent34401* pT, BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriver), _T("IIviDriver"), _T("Initialize"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriver"), _T("Initialize"), &hr, IN_PARAM(ResourceName), IN_PARAM(IdQuery), IN_PARAM(Reset), IN_PARAM(OptionString), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriver_Initialize(ResourceName, IdQuery, Reset, OptionString);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriver_Close(Agilent34401* pT)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriver), _T("IIviDriver"), _T("Close"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriver"), _T("Close"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriver_Close();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriver_get_DriverOperation(Agilent34401* pT, IIviDriverOperation** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriver), _T("IIviDriver"), _T("get_DriverOperation"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DriverOperation"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriver"), _T("get_DriverOperation"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriver_get_DriverOperation(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriver_get_Identity(Agilent34401* pT, IIviDriverIdentity** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriver), _T("IIviDriver"), _T("get_Identity"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Identity"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriver"), _T("get_Identity"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriver_get_Identity(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriver_get_Utility(Agilent34401* pT, IIviDriverUtility** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriver), _T("IIviDriver"), _T("get_Utility"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Utility"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriver"), _T("get_Utility"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriver_get_Utility(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriver_get_Initialized(Agilent34401* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriver), _T("IIviDriver"), _T("get_Initialized"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Initialized"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriver"), _T("get_Initialized"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriver_get_Initialized(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_InvalidateAllAttributes(Agilent34401* pT)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("InvalidateAllAttributes"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("InvalidateAllAttributes"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_InvalidateAllAttributes();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_ClearInterchangeWarnings(Agilent34401* pT)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("ClearInterchangeWarnings"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("ClearInterchangeWarnings"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_ClearInterchangeWarnings();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_GetNextInterchangeWarning(Agilent34401* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("GetNextInterchangeWarning"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("GetNextInterchangeWarning"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("GetNextInterchangeWarning"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_GetNextInterchangeWarning(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_ResetInterchangeCheck(Agilent34401* pT)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("ResetInterchangeCheck"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("ResetInterchangeCheck"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_ResetInterchangeCheck();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_GetNextCoercionRecord(Agilent34401* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("GetNextCoercionRecord"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("GetNextCoercionRecord"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("GetNextCoercionRecord"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_GetNextCoercionRecord(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_get_LogicalName(Agilent34401* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("get_LogicalName"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_LogicalName"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("get_LogicalName"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_get_LogicalName(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_get_IoResourceDescriptor(Agilent34401* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("get_IoResourceDescriptor"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_IoResourceDescriptor"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("get_IoResourceDescriptor"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_get_IoResourceDescriptor(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_get_Cache(Agilent34401* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("get_Cache"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Cache"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("get_Cache"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_get_Cache(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_put_Cache(Agilent34401* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("put_Cache"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("put_Cache"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_put_Cache(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_get_InterchangeCheck(Agilent34401* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("get_InterchangeCheck"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InterchangeCheck"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("get_InterchangeCheck"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_get_InterchangeCheck(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_put_InterchangeCheck(Agilent34401* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("put_InterchangeCheck"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("put_InterchangeCheck"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_put_InterchangeCheck(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_get_QueryInstrumentStatus(Agilent34401* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("get_QueryInstrumentStatus"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_QueryInstrumentStatus"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("get_QueryInstrumentStatus"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_get_QueryInstrumentStatus(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_put_QueryInstrumentStatus(Agilent34401* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("put_QueryInstrumentStatus"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("put_QueryInstrumentStatus"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_put_QueryInstrumentStatus(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_get_RangeCheck(Agilent34401* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("get_RangeCheck"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RangeCheck"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("get_RangeCheck"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_get_RangeCheck(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_put_RangeCheck(Agilent34401* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("put_RangeCheck"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("put_RangeCheck"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_put_RangeCheck(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_get_RecordCoercions(Agilent34401* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("get_RecordCoercions"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RecordCoercions"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("get_RecordCoercions"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_get_RecordCoercions(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_put_RecordCoercions(Agilent34401* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("put_RecordCoercions"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("put_RecordCoercions"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_put_RecordCoercions(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_get_Simulate(Agilent34401* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("get_Simulate"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Simulate"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("get_Simulate"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_get_Simulate(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_put_Simulate(Agilent34401* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("put_Simulate"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("put_Simulate"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_put_Simulate(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_get_DriverSetup(Agilent34401* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("get_DriverSetup"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DriverSetup"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("get_DriverSetup"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_get_DriverSetup(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverIdentity_get_InstrumentManufacturer(Agilent34401* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverIdentity), _T("IIviDriverIdentity"), _T("get_InstrumentManufacturer"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InstrumentManufacturer"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverIdentity"), _T("get_InstrumentManufacturer"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverIdentity_get_InstrumentManufacturer(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverIdentity_get_InstrumentModel(Agilent34401* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverIdentity), _T("IIviDriverIdentity"), _T("get_InstrumentModel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InstrumentModel"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverIdentity"), _T("get_InstrumentModel"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverIdentity_get_InstrumentModel(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverIdentity_get_InstrumentFirmwareRevision(Agilent34401* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverIdentity), _T("IIviDriverIdentity"), _T("get_InstrumentFirmwareRevision"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InstrumentFirmwareRevision"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverIdentity"), _T("get_InstrumentFirmwareRevision"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverIdentity_get_InstrumentFirmwareRevision(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverIdentity_get_Identifier(Agilent34401* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverIdentity), _T("IIviDriverIdentity"), _T("get_Identifier"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Identifier"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverIdentity"), _T("get_Identifier"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverIdentity_get_Identifier(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverIdentity_get_SupportedInstrumentModels(Agilent34401* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverIdentity), _T("IIviDriverIdentity"), _T("get_SupportedInstrumentModels"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SupportedInstrumentModels"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverIdentity"), _T("get_SupportedInstrumentModels"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverIdentity_get_SupportedInstrumentModels(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverIdentity_get_SpecificationMajorVersion(Agilent34401* pT, long* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverIdentity), _T("IIviDriverIdentity"), _T("get_SpecificationMajorVersion"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SpecificationMajorVersion"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverIdentity"), _T("get_SpecificationMajorVersion"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverIdentity_get_SpecificationMajorVersion(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverIdentity_get_SpecificationMinorVersion(Agilent34401* pT, long* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverIdentity), _T("IIviDriverIdentity"), _T("get_SpecificationMinorVersion"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SpecificationMinorVersion"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverIdentity"), _T("get_SpecificationMinorVersion"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverIdentity_get_SpecificationMinorVersion(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverIdentity_get_GroupCapabilities(Agilent34401* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverIdentity), _T("IIviDriverIdentity"), _T("get_GroupCapabilities"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_GroupCapabilities"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverIdentity"), _T("get_GroupCapabilities"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverIdentity_get_GroupCapabilities(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviComponentIdentity_get_Description(Agilent34401* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviComponentIdentity), _T("IIviComponentIdentity"), _T("get_Description"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Description"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviComponentIdentity"), _T("get_Description"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviComponentIdentity_get_Description(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviComponentIdentity_get_Revision(Agilent34401* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviComponentIdentity), _T("IIviComponentIdentity"), _T("get_Revision"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Revision"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviComponentIdentity"), _T("get_Revision"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviComponentIdentity_get_Revision(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviComponentIdentity_get_Vendor(Agilent34401* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviComponentIdentity), _T("IIviComponentIdentity"), _T("get_Vendor"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Vendor"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviComponentIdentity"), _T("get_Vendor"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviComponentIdentity_get_Vendor(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverUtility_Reset(Agilent34401* pT)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverUtility), _T("IIviDriverUtility"), _T("Reset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverUtility"), _T("Reset"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverUtility_Reset();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverUtility_ResetWithDefaults(Agilent34401* pT)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverUtility), _T("IIviDriverUtility"), _T("ResetWithDefaults"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverUtility"), _T("ResetWithDefaults"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverUtility_ResetWithDefaults();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverUtility_Disable(Agilent34401* pT)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverUtility), _T("IIviDriverUtility"), _T("Disable"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverUtility"), _T("Disable"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverUtility_Disable();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverUtility_SelfTest(Agilent34401* pT, long* TestResult, BSTR* TestMessage)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverUtility), _T("IIviDriverUtility"), _T("SelfTest"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (TestResult == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("SelfTest"), _T("TestResult"));
	if (TestMessage == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("SelfTest"), _T("TestMessage"));
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverUtility"), _T("SelfTest"), &hr, OUT_PARAM(TestResult), OUT_PARAM(TestMessage), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverUtility_SelfTest(TestResult, TestMessage);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverUtility_ErrorQuery(Agilent34401* pT, long* ErrorCode, BSTR* ErrorMessage)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverUtility), _T("IIviDriverUtility"), _T("ErrorQuery"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (ErrorCode == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("ErrorQuery"), _T("ErrorCode"));
	if (ErrorMessage == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("ErrorQuery"), _T("ErrorMessage"));
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverUtility"), _T("ErrorQuery"), &hr, OUT_PARAM(ErrorCode), OUT_PARAM(ErrorMessage), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverUtility_ErrorQuery(ErrorCode, ErrorMessage);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverUtility_LockObject(Agilent34401* pT)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverUtility), _T("IIviDriverUtility"), _T("LockObject"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverUtility"), _T("LockObject"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverUtility_LockObject();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverUtility_UnlockObject(Agilent34401* pT)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverUtility), _T("IIviDriverUtility"), _T("UnlockObject"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverUtility"), _T("UnlockObject"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverUtility_UnlockObject();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401_get_Function(Agilent34401* pT, Agilent34401FunctionEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401), _T("IAgilent34401"), _T("get_Function"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Function"), _T("val"));
	*val = (Agilent34401FunctionEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401"), _T("get_Function"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<Agilent34401FunctionEnum>* pSimData = pT->GetOrCreateCacheEntry<Agilent34401FunctionEnum>(_T("IAgilent34401.Function"));
		if (!pSimData->GetValue(val))
		{
			*val = Agilent34401FunctionDCVolts;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("SENS:FUNC?"));
		strResp = _T("%{Agilent34401FunctionEnum}s");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401_get_Function(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401_put_Function(Agilent34401* pT, Agilent34401FunctionEnum val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401), _T("IAgilent34401"), _T("put_Function"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401"), _T("put_Function"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<Agilent34401FunctionEnum>* pSimData = pT->GetOrCreateCacheEntry<Agilent34401FunctionEnum>(_T("IAgilent34401.Function"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("SENS:FUNC %{Agilent34401FunctionEnum}s"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401_put_Function(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401_get_AC(Agilent34401* pT, IAgilent34401AC** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401), _T("IAgilent34401"), _T("get_AC"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_AC"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401"), _T("get_AC"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401_get_AC(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401_get_Trigger(Agilent34401* pT, IAgilent34401Trigger** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401), _T("IAgilent34401"), _T("get_Trigger"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Trigger"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401"), _T("get_Trigger"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401_get_Trigger(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401_get_System(Agilent34401* pT, IAgilent34401System** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401), _T("IAgilent34401"), _T("get_System"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_System"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401"), _T("get_System"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401_get_System(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401_get_Status(Agilent34401* pT, IAgilent34401Status** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401), _T("IAgilent34401"), _T("get_Status"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Status"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401"), _T("get_Status"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401_get_Status(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401_get_Resistance(Agilent34401* pT, IAgilent34401Resistance** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401), _T("IAgilent34401"), _T("get_Resistance"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Resistance"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401"), _T("get_Resistance"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401_get_Resistance(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401_get_Measurement(Agilent34401* pT, IAgilent34401Measurement** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401), _T("IAgilent34401"), _T("get_Measurement"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Measurement"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401"), _T("get_Measurement"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401_get_Measurement(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401_get_Math(Agilent34401* pT, IAgilent34401Math** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401), _T("IAgilent34401"), _T("get_Math"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Math"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401"), _T("get_Math"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401_get_Math(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401_get_Frequency(Agilent34401* pT, IAgilent34401Frequency** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401), _T("IAgilent34401"), _T("get_Frequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Frequency"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401"), _T("get_Frequency"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401_get_Frequency(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401_get_Display(Agilent34401* pT, IAgilent34401Display** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401), _T("IAgilent34401"), _T("get_Display"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Display"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401"), _T("get_Display"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401_get_Display(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401_get_DCVoltageRatio(Agilent34401* pT, IAgilent34401DCVoltageRatio** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401), _T("IAgilent34401"), _T("get_DCVoltageRatio"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DCVoltageRatio"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401"), _T("get_DCVoltageRatio"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401_get_DCVoltageRatio(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401_get_DCVoltage(Agilent34401* pT, IAgilent34401DCVoltage** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401), _T("IAgilent34401"), _T("get_DCVoltage"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DCVoltage"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401"), _T("get_DCVoltage"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401_get_DCVoltage(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401_get_DCCurrent(Agilent34401* pT, IAgilent34401DCCurrent** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401), _T("IAgilent34401"), _T("get_DCCurrent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DCCurrent"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401"), _T("get_DCCurrent"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401_get_DCCurrent(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401_get_Calibration(Agilent34401* pT, IAgilent34401Calibration** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401), _T("IAgilent34401"), _T("get_Calibration"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Calibration"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401"), _T("get_Calibration"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401_get_Calibration(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401_get_Advanced(Agilent34401* pT, IAgilent34401Advanced** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401), _T("IAgilent34401"), _T("get_Advanced"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Advanced"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401"), _T("get_Advanced"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401_get_Advanced(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401_get_ACVoltage(Agilent34401* pT, IAgilent34401ACVoltage** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401), _T("IAgilent34401"), _T("get_ACVoltage"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ACVoltage"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401"), _T("get_ACVoltage"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401_get_ACVoltage(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401_get_ACCurrent(Agilent34401* pT, IAgilent34401ACCurrent** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401), _T("IAgilent34401"), _T("get_ACCurrent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ACCurrent"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401"), _T("get_ACCurrent"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401_get_ACCurrent(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401_get_IviDmm(Agilent34401* pT, IIviDmm** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401), _T("IAgilent34401"), _T("get_IviDmm"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_IviDmm"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401"), _T("get_IviDmm"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401_get_IviDmm(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmAC_ConfigureBandwidth(Agilent34401* pT, double MinFreq, double MaxFreq)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmAC), _T("IIviDmmAC"), _T("ConfigureBandwidth"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmAC"), _T("ConfigureBandwidth"), &hr, IN_PARAM(MinFreq), IN_PARAM(MaxFreq), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmAC_ConfigureBandwidth(MinFreq, MaxFreq);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmAC_get_FrequencyMax(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmAC), _T("IIviDmmAC"), _T("get_FrequencyMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_FrequencyMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmAC"), _T("get_FrequencyMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmAC_get_FrequencyMax(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmAC_put_FrequencyMax(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmAC), _T("IIviDmmAC"), _T("put_FrequencyMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmAC"), _T("put_FrequencyMax"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmAC_put_FrequencyMax(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmAC_get_FrequencyMin(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmAC), _T("IIviDmmAC"), _T("get_FrequencyMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_FrequencyMin"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmAC"), _T("get_FrequencyMin"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmAC_get_FrequencyMin(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmAC_put_FrequencyMin(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmAC), _T("IIviDmmAC"), _T("put_FrequencyMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmAC"), _T("put_FrequencyMin"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmAC_put_FrequencyMin(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmAdvanced_get_ActualRange(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmAdvanced), _T("IIviDmmAdvanced"), _T("get_ActualRange"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ActualRange"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmAdvanced"), _T("get_ActualRange"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmAdvanced_get_ActualRange(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmAdvanced_get_ApertureTime(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmAdvanced), _T("IIviDmmAdvanced"), _T("get_ApertureTime"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ApertureTime"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmAdvanced"), _T("get_ApertureTime"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmAdvanced_get_ApertureTime(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmAdvanced_get_ApertureTimeUnits(Agilent34401* pT, IviDmmApertureTimeUnitsEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmAdvanced), _T("IIviDmmAdvanced"), _T("get_ApertureTimeUnits"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ApertureTimeUnits"), _T("val"));
	*val = (IviDmmApertureTimeUnitsEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmAdvanced"), _T("get_ApertureTimeUnits"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmAdvanced_get_ApertureTimeUnits(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmAdvanced_get_AutoZero(Agilent34401* pT, IviDmmAutoZeroEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmAdvanced), _T("IIviDmmAdvanced"), _T("get_AutoZero"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_AutoZero"), _T("val"));
	*val = (IviDmmAutoZeroEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmAdvanced"), _T("get_AutoZero"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmAdvanced_get_AutoZero(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmAdvanced_put_AutoZero(Agilent34401* pT, IviDmmAutoZeroEnum val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmAdvanced), _T("IIviDmmAdvanced"), _T("put_AutoZero"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmAdvanced"), _T("put_AutoZero"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmAdvanced_put_AutoZero(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmAdvanced_get_PowerlineFrequency(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmAdvanced), _T("IIviDmmAdvanced"), _T("get_PowerlineFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_PowerlineFrequency"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmAdvanced"), _T("get_PowerlineFrequency"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmAdvanced_get_PowerlineFrequency(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmAdvanced_put_PowerlineFrequency(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmAdvanced), _T("IIviDmmAdvanced"), _T("put_PowerlineFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmAdvanced"), _T("put_PowerlineFrequency"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmAdvanced_put_PowerlineFrequency(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmFrequency_get_VoltageRange(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmFrequency), _T("IIviDmmFrequency"), _T("get_VoltageRange"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_VoltageRange"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmFrequency"), _T("get_VoltageRange"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmFrequency_get_VoltageRange(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmFrequency_put_VoltageRange(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmFrequency), _T("IIviDmmFrequency"), _T("put_VoltageRange"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmFrequency"), _T("put_VoltageRange"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmFrequency_put_VoltageRange(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmMeasurement_Initiate(Agilent34401* pT)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmMeasurement), _T("IIviDmmMeasurement"), _T("Initiate"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmMeasurement"), _T("Initiate"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmMeasurement_Initiate();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmMeasurement_Abort(Agilent34401* pT)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmMeasurement), _T("IIviDmmMeasurement"), _T("Abort"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmMeasurement"), _T("Abort"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmMeasurement_Abort();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmMeasurement_Fetch(Agilent34401* pT, long MaxTimeMilliseconds, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmMeasurement), _T("IIviDmmMeasurement"), _T("Fetch"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("Fetch"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmMeasurement"), _T("Fetch"), &hr, IN_PARAM(MaxTimeMilliseconds), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmMeasurement_Fetch(MaxTimeMilliseconds, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmMeasurement_FetchMultiPoint(Agilent34401* pT, long MaxTimeMilliseconds, SAFEARRAY** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmMeasurement), _T("IIviDmmMeasurement"), _T("FetchMultiPoint"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("FetchMultiPoint"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmMeasurement"), _T("FetchMultiPoint"), &hr, IN_PARAM(MaxTimeMilliseconds), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmMeasurement_FetchMultiPoint(MaxTimeMilliseconds, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmMeasurement_Read(Agilent34401* pT, long MaxTimeMilliseconds, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmMeasurement), _T("IIviDmmMeasurement"), _T("Read"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("Read"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmMeasurement"), _T("Read"), &hr, IN_PARAM(MaxTimeMilliseconds), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmMeasurement_Read(MaxTimeMilliseconds, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmMeasurement_ReadMultiPoint(Agilent34401* pT, long MaxTimeMilliseconds, SAFEARRAY** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmMeasurement), _T("IIviDmmMeasurement"), _T("ReadMultiPoint"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("ReadMultiPoint"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmMeasurement"), _T("ReadMultiPoint"), &hr, IN_PARAM(MaxTimeMilliseconds), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmMeasurement_ReadMultiPoint(MaxTimeMilliseconds, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmMeasurement_SendSoftwareTrigger(Agilent34401* pT)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmMeasurement), _T("IIviDmmMeasurement"), _T("SendSoftwareTrigger"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmMeasurement"), _T("SendSoftwareTrigger"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmMeasurement_SendSoftwareTrigger();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmMeasurement_IsOverRange(Agilent34401* pT, double MeasurementValue, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmMeasurement), _T("IIviDmmMeasurement"), _T("IsOverRange"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("IsOverRange"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmMeasurement"), _T("IsOverRange"), &hr, IN_PARAM(MeasurementValue), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmMeasurement_IsOverRange(MeasurementValue, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmRTD_Configure(Agilent34401* pT, double Alpha, double Resistance)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmRTD), _T("IIviDmmRTD"), _T("Configure"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmRTD"), _T("Configure"), &hr, IN_PARAM(Alpha), IN_PARAM(Resistance), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmRTD_Configure(Alpha, Resistance);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmRTD_get_Alpha(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmRTD), _T("IIviDmmRTD"), _T("get_Alpha"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Alpha"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmRTD"), _T("get_Alpha"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmRTD_get_Alpha(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmRTD_put_Alpha(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmRTD), _T("IIviDmmRTD"), _T("put_Alpha"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmRTD"), _T("put_Alpha"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmRTD_put_Alpha(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmRTD_get_Resistance(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmRTD), _T("IIviDmmRTD"), _T("get_Resistance"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Resistance"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmRTD"), _T("get_Resistance"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmRTD_get_Resistance(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmRTD_put_Resistance(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmRTD), _T("IIviDmmRTD"), _T("put_Resistance"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmRTD"), _T("put_Resistance"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmRTD_put_Resistance(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmThermocouple_Configure(Agilent34401* pT, IviDmmThermocoupleTypeEnum Type, IviDmmRefJunctionTypeEnum RefJunctionType)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmThermocouple), _T("IIviDmmThermocouple"), _T("Configure"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmThermocouple"), _T("Configure"), &hr, IN_PARAM(Type), IN_PARAM(RefJunctionType), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmThermocouple_Configure(Type, RefJunctionType);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmThermocouple_get_FixedRefJunction(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmThermocouple), _T("IIviDmmThermocouple"), _T("get_FixedRefJunction"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_FixedRefJunction"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmThermocouple"), _T("get_FixedRefJunction"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmThermocouple_get_FixedRefJunction(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmThermocouple_put_FixedRefJunction(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmThermocouple), _T("IIviDmmThermocouple"), _T("put_FixedRefJunction"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmThermocouple"), _T("put_FixedRefJunction"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmThermocouple_put_FixedRefJunction(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmThermocouple_get_RefJunctionType(Agilent34401* pT, IviDmmRefJunctionTypeEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmThermocouple), _T("IIviDmmThermocouple"), _T("get_RefJunctionType"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RefJunctionType"), _T("val"));
	*val = (IviDmmRefJunctionTypeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmThermocouple"), _T("get_RefJunctionType"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmThermocouple_get_RefJunctionType(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmThermocouple_put_RefJunctionType(Agilent34401* pT, IviDmmRefJunctionTypeEnum val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmThermocouple), _T("IIviDmmThermocouple"), _T("put_RefJunctionType"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmThermocouple"), _T("put_RefJunctionType"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmThermocouple_put_RefJunctionType(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmThermocouple_get_Type(Agilent34401* pT, IviDmmThermocoupleTypeEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmThermocouple), _T("IIviDmmThermocouple"), _T("get_Type"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Type"), _T("val"));
	*val = (IviDmmThermocoupleTypeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmThermocouple"), _T("get_Type"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmThermocouple_get_Type(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmThermocouple_put_Type(Agilent34401* pT, IviDmmThermocoupleTypeEnum val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmThermocouple), _T("IIviDmmThermocouple"), _T("put_Type"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmThermocouple"), _T("put_Type"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmThermocouple_put_Type(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmThermistor_get_Resistance(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmThermistor), _T("IIviDmmThermistor"), _T("get_Resistance"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Resistance"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmThermistor"), _T("get_Resistance"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmThermistor_get_Resistance(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmThermistor_put_Resistance(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmThermistor), _T("IIviDmmThermistor"), _T("put_Resistance"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmThermistor"), _T("put_Resistance"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmThermistor_put_Resistance(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmTemperature_get_TransducerType(Agilent34401* pT, IviDmmTransducerTypeEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmTemperature), _T("IIviDmmTemperature"), _T("get_TransducerType"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_TransducerType"), _T("val"));
	*val = (IviDmmTransducerTypeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmTemperature"), _T("get_TransducerType"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmTemperature_get_TransducerType(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmTemperature_put_TransducerType(Agilent34401* pT, IviDmmTransducerTypeEnum val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmTemperature), _T("IIviDmmTemperature"), _T("put_TransducerType"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmTemperature"), _T("put_TransducerType"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmTemperature_put_TransducerType(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmTemperature_get_RTD(Agilent34401* pT, IIviDmmRTD** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmTemperature), _T("IIviDmmTemperature"), _T("get_RTD"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RTD"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmTemperature"), _T("get_RTD"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmTemperature_get_RTD(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmTemperature_get_Thermocouple(Agilent34401* pT, IIviDmmThermocouple** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmTemperature), _T("IIviDmmTemperature"), _T("get_Thermocouple"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Thermocouple"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmTemperature"), _T("get_Thermocouple"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmTemperature_get_Thermocouple(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmTemperature_get_Thermistor(Agilent34401* pT, IIviDmmThermistor** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmTemperature), _T("IIviDmmTemperature"), _T("get_Thermistor"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Thermistor"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmTemperature"), _T("get_Thermistor"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmTemperature_get_Thermistor(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmMultiPoint_Configure(Agilent34401* pT, long TriggerCount, long SampleCount, IviDmmSampleTriggerEnum SampleTrigger, double SampleInterval)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmMultiPoint), _T("IIviDmmMultiPoint"), _T("Configure"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmMultiPoint"), _T("Configure"), &hr, IN_PARAM(TriggerCount), IN_PARAM(SampleCount), IN_PARAM(SampleTrigger), IN_PARAM(SampleInterval), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmMultiPoint_Configure(TriggerCount, SampleCount, SampleTrigger, SampleInterval);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmMultiPoint_get_MeasurementComplete(Agilent34401* pT, IviDmmMeasCompleteDestEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmMultiPoint), _T("IIviDmmMultiPoint"), _T("get_MeasurementComplete"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_MeasurementComplete"), _T("val"));
	*val = (IviDmmMeasCompleteDestEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmMultiPoint"), _T("get_MeasurementComplete"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmMultiPoint_get_MeasurementComplete(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmMultiPoint_put_MeasurementComplete(Agilent34401* pT, IviDmmMeasCompleteDestEnum val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmMultiPoint), _T("IIviDmmMultiPoint"), _T("put_MeasurementComplete"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmMultiPoint"), _T("put_MeasurementComplete"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmMultiPoint_put_MeasurementComplete(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmMultiPoint_get_Count(Agilent34401* pT, long* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmMultiPoint), _T("IIviDmmMultiPoint"), _T("get_Count"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Count"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmMultiPoint"), _T("get_Count"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmMultiPoint_get_Count(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmMultiPoint_put_Count(Agilent34401* pT, long val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmMultiPoint), _T("IIviDmmMultiPoint"), _T("put_Count"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmMultiPoint"), _T("put_Count"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmMultiPoint_put_Count(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmMultiPoint_get_SampleCount(Agilent34401* pT, long* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmMultiPoint), _T("IIviDmmMultiPoint"), _T("get_SampleCount"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SampleCount"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmMultiPoint"), _T("get_SampleCount"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmMultiPoint_get_SampleCount(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmMultiPoint_put_SampleCount(Agilent34401* pT, long val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmMultiPoint), _T("IIviDmmMultiPoint"), _T("put_SampleCount"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmMultiPoint"), _T("put_SampleCount"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmMultiPoint_put_SampleCount(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmMultiPoint_get_SampleInterval(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmMultiPoint), _T("IIviDmmMultiPoint"), _T("get_SampleInterval"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SampleInterval"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmMultiPoint"), _T("get_SampleInterval"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmMultiPoint_get_SampleInterval(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmMultiPoint_put_SampleInterval(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmMultiPoint), _T("IIviDmmMultiPoint"), _T("put_SampleInterval"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmMultiPoint"), _T("put_SampleInterval"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmMultiPoint_put_SampleInterval(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmMultiPoint_get_SampleTrigger(Agilent34401* pT, IviDmmSampleTriggerEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmMultiPoint), _T("IIviDmmMultiPoint"), _T("get_SampleTrigger"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SampleTrigger"), _T("val"));
	*val = (IviDmmSampleTriggerEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmMultiPoint"), _T("get_SampleTrigger"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmMultiPoint_get_SampleTrigger(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmMultiPoint_put_SampleTrigger(Agilent34401* pT, IviDmmSampleTriggerEnum val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmMultiPoint), _T("IIviDmmMultiPoint"), _T("put_SampleTrigger"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmMultiPoint"), _T("put_SampleTrigger"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmMultiPoint_put_SampleTrigger(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmTrigger_Configure(Agilent34401* pT, IviDmmTriggerSourceEnum TriggerSource, double TriggerDelay)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmTrigger), _T("IIviDmmTrigger"), _T("Configure"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmTrigger"), _T("Configure"), &hr, IN_PARAM(TriggerSource), IN_PARAM(TriggerDelay), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmTrigger_Configure(TriggerSource, TriggerDelay);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmTrigger_get_Slope(Agilent34401* pT, IviDmmTriggerSlopeEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmTrigger), _T("IIviDmmTrigger"), _T("get_Slope"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Slope"), _T("val"));
	*val = (IviDmmTriggerSlopeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmTrigger"), _T("get_Slope"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmTrigger_get_Slope(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmTrigger_put_Slope(Agilent34401* pT, IviDmmTriggerSlopeEnum val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmTrigger), _T("IIviDmmTrigger"), _T("put_Slope"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmTrigger"), _T("put_Slope"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmTrigger_put_Slope(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmTrigger_get_Delay(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmTrigger), _T("IIviDmmTrigger"), _T("get_Delay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Delay"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmTrigger"), _T("get_Delay"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmTrigger_get_Delay(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmTrigger_put_Delay(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmTrigger), _T("IIviDmmTrigger"), _T("put_Delay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmTrigger"), _T("put_Delay"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmTrigger_put_Delay(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmTrigger_get_Source(Agilent34401* pT, IviDmmTriggerSourceEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmTrigger), _T("IIviDmmTrigger"), _T("get_Source"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Source"), _T("val"));
	*val = (IviDmmTriggerSourceEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmTrigger"), _T("get_Source"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmTrigger_get_Source(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmTrigger_put_Source(Agilent34401* pT, IviDmmTriggerSourceEnum val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmTrigger), _T("IIviDmmTrigger"), _T("put_Source"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmTrigger"), _T("put_Source"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmTrigger_put_Source(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmmTrigger_get_MultiPoint(Agilent34401* pT, IIviDmmMultiPoint** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmmTrigger), _T("IIviDmmTrigger"), _T("get_MultiPoint"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_MultiPoint"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmmTrigger"), _T("get_MultiPoint"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmmTrigger_get_MultiPoint(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmm_Configure(Agilent34401* pT, IviDmmFunctionEnum Function, double Range, double Resolution)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmm), _T("IIviDmm"), _T("Configure"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmm"), _T("Configure"), &hr, IN_PARAM(Function), IN_PARAM(Range), IN_PARAM(Resolution), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmm_Configure(Function, Range, Resolution);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmm_get_Function(Agilent34401* pT, IviDmmFunctionEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmm), _T("IIviDmm"), _T("get_Function"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Function"), _T("val"));
	*val = (IviDmmFunctionEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmm"), _T("get_Function"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmm_get_Function(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmm_put_Function(Agilent34401* pT, IviDmmFunctionEnum val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmm), _T("IIviDmm"), _T("put_Function"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmm"), _T("put_Function"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmm_put_Function(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmm_get_Range(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmm), _T("IIviDmm"), _T("get_Range"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Range"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmm"), _T("get_Range"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmm_get_Range(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmm_put_Range(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmm), _T("IIviDmm"), _T("put_Range"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmm"), _T("put_Range"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmm_put_Range(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmm_get_Resolution(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmm), _T("IIviDmm"), _T("get_Resolution"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Resolution"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmm"), _T("get_Resolution"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmm_get_Resolution(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmm_put_Resolution(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmm), _T("IIviDmm"), _T("put_Resolution"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmm"), _T("put_Resolution"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmm_put_Resolution(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmm_get_AC(Agilent34401* pT, IIviDmmAC** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmm), _T("IIviDmm"), _T("get_AC"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_AC"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmm"), _T("get_AC"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmm_get_AC(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmm_get_Advanced(Agilent34401* pT, IIviDmmAdvanced** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmm), _T("IIviDmm"), _T("get_Advanced"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Advanced"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmm"), _T("get_Advanced"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmm_get_Advanced(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmm_get_Frequency(Agilent34401* pT, IIviDmmFrequency** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmm), _T("IIviDmm"), _T("get_Frequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Frequency"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmm"), _T("get_Frequency"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmm_get_Frequency(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmm_get_Measurement(Agilent34401* pT, IIviDmmMeasurement** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmm), _T("IIviDmm"), _T("get_Measurement"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Measurement"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmm"), _T("get_Measurement"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmm_get_Measurement(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmm_get_Temperature(Agilent34401* pT, IIviDmmTemperature** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmm), _T("IIviDmm"), _T("get_Temperature"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Temperature"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmm"), _T("get_Temperature"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmm_get_Temperature(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDmm_get_Trigger(Agilent34401* pT, IIviDmmTrigger** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDmm), _T("IIviDmm"), _T("get_Trigger"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Trigger"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDmm"), _T("get_Trigger"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDmm_get_Trigger(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401AC_ConfigureBandwidth(Agilent34401* pT, double MinFreq, double MaxFreq)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401AC), _T("IAgilent34401AC"), _T("ConfigureBandwidth"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401AC"), _T("ConfigureBandwidth"), &hr, IN_PARAM(MinFreq), IN_PARAM(MaxFreq), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401AC_ConfigureBandwidth(MinFreq, MaxFreq);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401AC_get_FrequencyMax(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401AC), _T("IAgilent34401AC"), _T("get_FrequencyMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_FrequencyMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401AC"), _T("get_FrequencyMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		*val = 300000;

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401AC_get_FrequencyMax(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401AC_get_FrequencyMin(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401AC), _T("IAgilent34401AC"), _T("get_FrequencyMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_FrequencyMin"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401AC"), _T("get_FrequencyMin"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401AC.FrequencyMin"));
		if (!pSimData->GetValue(val))
		{
			*val = 20;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("DET:BAND?"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401AC_get_FrequencyMin(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401AC_put_FrequencyMin(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401AC), _T("IAgilent34401AC"), _T("put_FrequencyMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401AC"), _T("put_FrequencyMin"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401AC.FrequencyMin"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("DET:BAND %.15lg"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401AC_put_FrequencyMin(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401ACCurrent_Configure(Agilent34401* pT, double Range, double Resolution)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401ACCurrent), _T("IAgilent34401ACCurrent"), _T("Configure"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401ACCurrent"), _T("Configure"), &hr, IN_PARAM(Range), IN_PARAM(Resolution), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401ACCurrent_Configure(Range, Resolution);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401ACCurrent_get_AutoRange(Agilent34401* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401ACCurrent), _T("IAgilent34401ACCurrent"), _T("get_AutoRange"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_AutoRange"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401ACCurrent"), _T("get_AutoRange"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401ACCurrent.AutoRange"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_TRUE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CURR:AC:RANG:AUTO?"));
		strResp = _T("%{VARIANT_BOOL}s");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401ACCurrent_get_AutoRange(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401ACCurrent_put_AutoRange(Agilent34401* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401ACCurrent), _T("IAgilent34401ACCurrent"), _T("put_AutoRange"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401ACCurrent"), _T("put_AutoRange"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401ACCurrent.AutoRange"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CURR:AC:RANG:AUTO %{VARIANT_BOOL}s"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401ACCurrent_put_AutoRange(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401ACCurrent_get_Range(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401ACCurrent), _T("IAgilent34401ACCurrent"), _T("get_Range"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Range"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401ACCurrent"), _T("get_Range"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401ACCurrent.Range"));
		if (!pSimData->GetValue(val))
		{
			*val = 1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CURR:AC:RANG?"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401ACCurrent_get_Range(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401ACCurrent_put_Range(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401ACCurrent), _T("IAgilent34401ACCurrent"), _T("put_Range"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401ACCurrent"), _T("put_Range"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401ACCurrent.Range"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CURR:AC:RANG %.15lg"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401ACCurrent_put_Range(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401ACCurrent_get_RangeMax(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401ACCurrent), _T("IAgilent34401ACCurrent"), _T("get_RangeMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RangeMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401ACCurrent"), _T("get_RangeMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401ACCurrent.RangeMax"));
		if (!pSimData->GetValue(val))
		{
			*val = 3;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CURR:AC:RANG? MAX"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401ACCurrent_get_RangeMax(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401ACCurrent_get_RangeMin(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401ACCurrent), _T("IAgilent34401ACCurrent"), _T("get_RangeMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RangeMin"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401ACCurrent"), _T("get_RangeMin"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401ACCurrent.RangeMin"));
		if (!pSimData->GetValue(val))
		{
			*val = 1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CURR:AC:RANG? MIN"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401ACCurrent_get_RangeMin(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401ACCurrent_get_Resolution(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401ACCurrent), _T("IAgilent34401ACCurrent"), _T("get_Resolution"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Resolution"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401ACCurrent"), _T("get_Resolution"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401ACCurrent.Resolution"));
		if (!pSimData->GetValue(val))
		{
			*val = 1E-05;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CURR:AC:RES?"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401ACCurrent_get_Resolution(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401ACCurrent_put_Resolution(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401ACCurrent), _T("IAgilent34401ACCurrent"), _T("put_Resolution"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401ACCurrent"), _T("put_Resolution"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401ACCurrent.Resolution"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CURR:AC:RES %.15lg"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401ACCurrent_put_Resolution(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401ACCurrent_get_ResolutionMax(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401ACCurrent), _T("IAgilent34401ACCurrent"), _T("get_ResolutionMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ResolutionMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401ACCurrent"), _T("get_ResolutionMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401ACCurrent.ResolutionMax"));
		if (!pSimData->GetValue(val))
		{
			*val = 0.0001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CURR:AC:RES? MAX"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401ACCurrent_get_ResolutionMax(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401ACCurrent_get_ResolutionMin(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401ACCurrent), _T("IAgilent34401ACCurrent"), _T("get_ResolutionMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ResolutionMin"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401ACCurrent"), _T("get_ResolutionMin"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401ACCurrent.ResolutionMin"));
		if (!pSimData->GetValue(val))
		{
			*val = 1E-06;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CURR:AC:RES? MIN"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401ACCurrent_get_ResolutionMin(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401ACVoltage_Configure(Agilent34401* pT, double Range, double Resolution)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401ACVoltage), _T("IAgilent34401ACVoltage"), _T("Configure"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401ACVoltage"), _T("Configure"), &hr, IN_PARAM(Range), IN_PARAM(Resolution), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401ACVoltage_Configure(Range, Resolution);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401ACVoltage_get_AutoRange(Agilent34401* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401ACVoltage), _T("IAgilent34401ACVoltage"), _T("get_AutoRange"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_AutoRange"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401ACVoltage"), _T("get_AutoRange"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401ACVoltage.AutoRange"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_TRUE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("VOLT:AC:RANG:AUTO?"));
		strResp = _T("%{VARIANT_BOOL}s");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401ACVoltage_get_AutoRange(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401ACVoltage_put_AutoRange(Agilent34401* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401ACVoltage), _T("IAgilent34401ACVoltage"), _T("put_AutoRange"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401ACVoltage"), _T("put_AutoRange"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401ACVoltage.AutoRange"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("VOLT:AC:RANG:AUTO %{VARIANT_BOOL}s"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401ACVoltage_put_AutoRange(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401ACVoltage_get_Range(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401ACVoltage), _T("IAgilent34401ACVoltage"), _T("get_Range"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Range"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401ACVoltage"), _T("get_Range"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401ACVoltage.Range"));
		if (!pSimData->GetValue(val))
		{
			*val = 10;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("VOLT:AC:RANG?"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401ACVoltage_get_Range(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401ACVoltage_put_Range(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401ACVoltage), _T("IAgilent34401ACVoltage"), _T("put_Range"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401ACVoltage"), _T("put_Range"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401ACVoltage.Range"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("VOLT:AC:RANG %.15lg"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401ACVoltage_put_Range(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401ACVoltage_get_RangeMax(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401ACVoltage), _T("IAgilent34401ACVoltage"), _T("get_RangeMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RangeMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401ACVoltage"), _T("get_RangeMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401ACVoltage.RangeMax"));
		if (!pSimData->GetValue(val))
		{
			*val = 1000;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("VOLT:AC:RANG? MAX"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401ACVoltage_get_RangeMax(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401ACVoltage_get_RangeMin(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401ACVoltage), _T("IAgilent34401ACVoltage"), _T("get_RangeMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RangeMin"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401ACVoltage"), _T("get_RangeMin"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401ACVoltage.RangeMin"));
		if (!pSimData->GetValue(val))
		{
			*val = 0.1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("VOLT:AC:RANG? MIN"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401ACVoltage_get_RangeMin(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401ACVoltage_get_Resolution(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401ACVoltage), _T("IAgilent34401ACVoltage"), _T("get_Resolution"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Resolution"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401ACVoltage"), _T("get_Resolution"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401ACVoltage.Resolution"));
		if (!pSimData->GetValue(val))
		{
			*val = 0.0001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("VOLT:AC:RES?"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401ACVoltage_get_Resolution(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401ACVoltage_put_Resolution(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401ACVoltage), _T("IAgilent34401ACVoltage"), _T("put_Resolution"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401ACVoltage"), _T("put_Resolution"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401ACVoltage.Resolution"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("VOLT:AC:RES %.15lg"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401ACVoltage_put_Resolution(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401ACVoltage_get_ResolutionMax(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401ACVoltage), _T("IAgilent34401ACVoltage"), _T("get_ResolutionMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ResolutionMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401ACVoltage"), _T("get_ResolutionMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401ACVoltage.ResolutionMax"));
		if (!pSimData->GetValue(val))
		{
			*val = 0.001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("VOLT:AC:RES? MAX"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401ACVoltage_get_ResolutionMax(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401ACVoltage_get_ResolutionMin(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401ACVoltage), _T("IAgilent34401ACVoltage"), _T("get_ResolutionMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ResolutionMin"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401ACVoltage"), _T("get_ResolutionMin"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401ACVoltage.ResolutionMin"));
		if (!pSimData->GetValue(val))
		{
			*val = 1E-05;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("VOLT:AC:RES? MIN"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401ACVoltage_get_ResolutionMin(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Advanced_get_ActualRange(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Advanced), _T("IAgilent34401Advanced"), _T("get_ActualRange"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ActualRange"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Advanced"), _T("get_ActualRange"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401Advanced_get_ActualRange(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Advanced_get_ApertureTime(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Advanced), _T("IAgilent34401Advanced"), _T("get_ApertureTime"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ApertureTime"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Advanced"), _T("get_ApertureTime"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Advanced.ApertureTime"));
		if (!pSimData->GetValue(val))
		{
			*val = 10;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401Advanced_get_ApertureTime(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Advanced_put_ApertureTime(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Advanced), _T("IAgilent34401Advanced"), _T("put_ApertureTime"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Advanced"), _T("put_ApertureTime"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Advanced.ApertureTime"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401Advanced_put_ApertureTime(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Advanced_get_ApertureTimeUnits(Agilent34401* pT, Agilent34401ApertureTimeUnitsEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Advanced), _T("IAgilent34401Advanced"), _T("get_ApertureTimeUnits"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ApertureTimeUnits"), _T("val"));
	*val = (Agilent34401ApertureTimeUnitsEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Advanced"), _T("get_ApertureTimeUnits"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401Advanced_get_ApertureTimeUnits(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Advanced_get_AutoImpedance(Agilent34401* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Advanced), _T("IAgilent34401Advanced"), _T("get_AutoImpedance"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_AutoImpedance"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Advanced"), _T("get_AutoImpedance"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401Advanced.AutoImpedance"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("INP:IMP:AUTO?"));
		strResp = _T("%{VARIANT_BOOL}s");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Advanced_get_AutoImpedance(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Advanced_put_AutoImpedance(Agilent34401* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Advanced), _T("IAgilent34401Advanced"), _T("put_AutoImpedance"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Advanced"), _T("put_AutoImpedance"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401Advanced.AutoImpedance"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("INP:IMP:AUTO %{VARIANT_BOOL}s"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Advanced_put_AutoImpedance(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Advanced_get_AutoZero(Agilent34401* pT, Agilent34401AutoZeroEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Advanced), _T("IAgilent34401Advanced"), _T("get_AutoZero"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_AutoZero"), _T("val"));
	*val = (Agilent34401AutoZeroEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Advanced"), _T("get_AutoZero"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<Agilent34401AutoZeroEnum>* pSimData = pT->GetOrCreateCacheEntry<Agilent34401AutoZeroEnum>(_T("IAgilent34401Advanced.AutoZero"));
		if (!pSimData->GetValue(val))
		{
			*val = Agilent34401AutoZeroOff;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("ZERO:AUTO?"));
		strResp = _T("%{Agilent34401AutoZeroEnum}s");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Advanced_get_AutoZero(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Advanced_put_AutoZero(Agilent34401* pT, Agilent34401AutoZeroEnum val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Advanced), _T("IAgilent34401Advanced"), _T("put_AutoZero"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Advanced"), _T("put_AutoZero"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<Agilent34401AutoZeroEnum>* pSimData = pT->GetOrCreateCacheEntry<Agilent34401AutoZeroEnum>(_T("IAgilent34401Advanced.AutoZero"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("ZERO:AUTO %{Agilent34401AutoZeroEnum}s"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Advanced_put_AutoZero(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Advanced_get_InputTerminal(Agilent34401* pT, Agilent34401InputTerminalEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Advanced), _T("IAgilent34401Advanced"), _T("get_InputTerminal"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InputTerminal"), _T("val"));
	*val = (Agilent34401InputTerminalEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Advanced"), _T("get_InputTerminal"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<Agilent34401InputTerminalEnum>* pSimData = pT->GetOrCreateCacheEntry<Agilent34401InputTerminalEnum>(_T("IAgilent34401Advanced.InputTerminal"));
		if (!pSimData->GetValue(val))
		{
			*val = Agilent34401InputTerminalFront;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("ROUT:TERM?"));
		strResp = _T("%{Agilent34401InputTerminalEnum}s");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Advanced_get_InputTerminal(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Advanced_get_PowerlineFrequency(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Advanced), _T("IAgilent34401Advanced"), _T("get_PowerlineFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_PowerlineFrequency"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Advanced"), _T("get_PowerlineFrequency"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Advanced.PowerlineFrequency"));
		if (!pSimData->GetValue(val))
		{
			*val = 60;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("SYST:LFR?"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Advanced_get_PowerlineFrequency(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Advanced_get_StoreEnabled(Agilent34401* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Advanced), _T("IAgilent34401Advanced"), _T("get_StoreEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_StoreEnabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Advanced"), _T("get_StoreEnabled"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401Advanced.StoreEnabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_TRUE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401Advanced_get_StoreEnabled(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Advanced_put_StoreEnabled(Agilent34401* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Advanced), _T("IAgilent34401Advanced"), _T("put_StoreEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Advanced"), _T("put_StoreEnabled"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401Advanced.StoreEnabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401Advanced_put_StoreEnabled(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Calibration_SecureCode(Agilent34401* pT, VARIANT_BOOL SecureState, BSTR Code)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Calibration), _T("IAgilent34401Calibration"), _T("SecureCode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Calibration"), _T("SecureCode"), &hr, IN_PARAM(SecureState), IN_PARAM(Code), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401Calibration_SecureCode(SecureState, Code);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Calibration_Code(Agilent34401* pT, BSTR Code)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Calibration), _T("IAgilent34401Calibration"), _T("Code"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Calibration"), _T("Code"), &hr, IN_PARAM(Code), NULL);

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CAL:SEC:CODE"));

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Calibration_Code(Code);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Calibration_get_Count(Agilent34401* pT, long* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Calibration), _T("IAgilent34401Calibration"), _T("get_Count"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Count"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Calibration"), _T("get_Count"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IAgilent34401Calibration.Count"));
		if (!pSimData->GetValue(val))
		{
			*val = 1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CAL:COUN?"));
		strResp = _T("%d");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Calibration_get_Count(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Calibration_get_SecureState(Agilent34401* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Calibration), _T("IAgilent34401Calibration"), _T("get_SecureState"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SecureState"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Calibration"), _T("get_SecureState"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401Calibration.SecureState"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_TRUE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CAL:SEC:STAT?"));
		strResp = _T("%{VARIANT_BOOL}s");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Calibration_get_SecureState(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Calibration_get_String(Agilent34401* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Calibration), _T("IAgilent34401Calibration"), _T("get_String"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_String"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Calibration"), _T("get_String"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<BSTR>* pSimData = pT->GetOrCreateCacheEntry<BSTR>(_T("IAgilent34401Calibration.String"));
		if (!pSimData->GetValue(val))
		{
			*val = ::SysAllocString(L"");
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CAL:STR?"));
		strResp = _T("%$Bs");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Calibration_get_String(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Calibration_put_String(Agilent34401* pT, BSTR val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Calibration), _T("IAgilent34401Calibration"), _T("put_String"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Calibration"), _T("put_String"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<BSTR>* pSimData = pT->GetOrCreateCacheEntry<BSTR>(_T("IAgilent34401Calibration.String"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CAL:STR \"%$Bs\""), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Calibration_put_String(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Calibration_get_Value(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Calibration), _T("IAgilent34401Calibration"), _T("get_Value"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Value"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Calibration"), _T("get_Value"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Calibration.Value"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CAL:VAL?"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Calibration_get_Value(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Calibration_put_Value(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Calibration), _T("IAgilent34401Calibration"), _T("put_Value"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Calibration"), _T("put_Value"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Calibration.Value"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CAL:VAL %.15lg"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Calibration_put_Value(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCCurrent_Configure(Agilent34401* pT, double Range, double Resolution)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCCurrent), _T("IAgilent34401DCCurrent"), _T("Configure"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCCurrent"), _T("Configure"), &hr, IN_PARAM(Range), IN_PARAM(Resolution), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401DCCurrent_Configure(Range, Resolution);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCCurrent_get_AutoRange(Agilent34401* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCCurrent), _T("IAgilent34401DCCurrent"), _T("get_AutoRange"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_AutoRange"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCCurrent"), _T("get_AutoRange"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401DCCurrent.AutoRange"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_TRUE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CURR:DC:RANG:AUTO?"));
		strResp = _T("%{VARIANT_BOOL}s");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401DCCurrent_get_AutoRange(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCCurrent_put_AutoRange(Agilent34401* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCCurrent), _T("IAgilent34401DCCurrent"), _T("put_AutoRange"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCCurrent"), _T("put_AutoRange"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401DCCurrent.AutoRange"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CURR:DC:RANG:AUTO %{VARIANT_BOOL}s"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401DCCurrent_put_AutoRange(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCCurrent_get_Range(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCCurrent), _T("IAgilent34401DCCurrent"), _T("get_Range"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Range"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCCurrent"), _T("get_Range"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401DCCurrent.Range"));
		if (!pSimData->GetValue(val))
		{
			*val = 1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CURR:DC:RANG?"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401DCCurrent_get_Range(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCCurrent_put_Range(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCCurrent), _T("IAgilent34401DCCurrent"), _T("put_Range"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCCurrent"), _T("put_Range"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401DCCurrent.Range"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CURR:DC:RANG %.15lg"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401DCCurrent_put_Range(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCCurrent_get_RangeMax(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCCurrent), _T("IAgilent34401DCCurrent"), _T("get_RangeMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RangeMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCCurrent"), _T("get_RangeMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401DCCurrent.RangeMax"));
		if (!pSimData->GetValue(val))
		{
			*val = 3;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CURR:DC:RANG? MAX"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401DCCurrent_get_RangeMax(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCCurrent_get_RangeMin(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCCurrent), _T("IAgilent34401DCCurrent"), _T("get_RangeMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RangeMin"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCCurrent"), _T("get_RangeMin"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401DCCurrent.RangeMin"));
		if (!pSimData->GetValue(val))
		{
			*val = 0.01;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CURR:DC:RANG? MIN"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401DCCurrent_get_RangeMin(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCCurrent_get_Resolution(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCCurrent), _T("IAgilent34401DCCurrent"), _T("get_Resolution"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Resolution"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCCurrent"), _T("get_Resolution"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401DCCurrent.Resolution"));
		if (!pSimData->GetValue(val))
		{
			*val = 1E-6;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CURR:DC:RES?"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401DCCurrent_get_Resolution(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCCurrent_put_Resolution(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCCurrent), _T("IAgilent34401DCCurrent"), _T("put_Resolution"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCCurrent"), _T("put_Resolution"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401DCCurrent.Resolution"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CURR:DC:RES %.15lg"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401DCCurrent_put_Resolution(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCCurrent_get_ResolutionMax(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCCurrent), _T("IAgilent34401DCCurrent"), _T("get_ResolutionMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ResolutionMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCCurrent"), _T("get_ResolutionMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401DCCurrent.ResolutionMax"));
		if (!pSimData->GetValue(val))
		{
			*val = 0.0001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CURR:DC:RES? MAX"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401DCCurrent_get_ResolutionMax(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCCurrent_get_ResolutionMin(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCCurrent), _T("IAgilent34401DCCurrent"), _T("get_ResolutionMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ResolutionMin"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCCurrent"), _T("get_ResolutionMin"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401DCCurrent.ResolutionMin"));
		if (!pSimData->GetValue(val))
		{
			*val = 3E-7;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CURR:DC:RES? MIN"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401DCCurrent_get_ResolutionMin(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCVoltage_Configure(Agilent34401* pT, double Range, double Resolution)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCVoltage), _T("IAgilent34401DCVoltage"), _T("Configure"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCVoltage"), _T("Configure"), &hr, IN_PARAM(Range), IN_PARAM(Resolution), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401DCVoltage_Configure(Range, Resolution);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCVoltage_get_AutoRange(Agilent34401* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCVoltage), _T("IAgilent34401DCVoltage"), _T("get_AutoRange"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_AutoRange"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCVoltage"), _T("get_AutoRange"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401DCVoltage.AutoRange"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_TRUE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("VOLT:DC:RANG:AUTO?"));
		strResp = _T("%{VARIANT_BOOL}s");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401DCVoltage_get_AutoRange(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCVoltage_put_AutoRange(Agilent34401* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCVoltage), _T("IAgilent34401DCVoltage"), _T("put_AutoRange"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCVoltage"), _T("put_AutoRange"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401DCVoltage.AutoRange"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("VOLT:DC:RANG:AUTO %{VARIANT_BOOL}s"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401DCVoltage_put_AutoRange(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCVoltage_get_Range(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCVoltage), _T("IAgilent34401DCVoltage"), _T("get_Range"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Range"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCVoltage"), _T("get_Range"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401DCVoltage.Range"));
		if (!pSimData->GetValue(val))
		{
			*val = 1000;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("VOLT:DC:RANG?"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401DCVoltage_get_Range(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCVoltage_put_Range(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCVoltage), _T("IAgilent34401DCVoltage"), _T("put_Range"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCVoltage"), _T("put_Range"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401DCVoltage.Range"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("VOLT:DC:RANG %.15lg"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401DCVoltage_put_Range(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCVoltage_get_RangeMax(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCVoltage), _T("IAgilent34401DCVoltage"), _T("get_RangeMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RangeMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCVoltage"), _T("get_RangeMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401DCVoltage.RangeMax"));
		if (!pSimData->GetValue(val))
		{
			*val = 1000;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("VOLT:DC:RANG? MAX"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401DCVoltage_get_RangeMax(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCVoltage_get_RangeMin(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCVoltage), _T("IAgilent34401DCVoltage"), _T("get_RangeMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RangeMin"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCVoltage"), _T("get_RangeMin"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401DCVoltage.RangeMin"));
		if (!pSimData->GetValue(val))
		{
			*val = 0.1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("VOLT:DC:RANG? MIN"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401DCVoltage_get_RangeMin(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCVoltage_get_Resolution(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCVoltage), _T("IAgilent34401DCVoltage"), _T("get_Resolution"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Resolution"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCVoltage"), _T("get_Resolution"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401DCVoltage.Resolution"));
		if (!pSimData->GetValue(val))
		{
			*val = 0.001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("VOLT:DC:RES?"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401DCVoltage_get_Resolution(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCVoltage_put_Resolution(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCVoltage), _T("IAgilent34401DCVoltage"), _T("put_Resolution"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCVoltage"), _T("put_Resolution"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401DCVoltage.Resolution"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("VOLT:DC:RES %.15lg"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401DCVoltage_put_Resolution(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCVoltage_get_ResolutionMax(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCVoltage), _T("IAgilent34401DCVoltage"), _T("get_ResolutionMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ResolutionMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCVoltage"), _T("get_ResolutionMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401DCVoltage.ResolutionMax"));
		if (!pSimData->GetValue(val))
		{
			*val = 0.1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("VOLT:DC:RES? MAX"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401DCVoltage_get_ResolutionMax(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCVoltage_get_ResolutionMin(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCVoltage), _T("IAgilent34401DCVoltage"), _T("get_ResolutionMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ResolutionMin"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCVoltage"), _T("get_ResolutionMin"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401DCVoltage.ResolutionMin"));
		if (!pSimData->GetValue(val))
		{
			*val = 0.0003;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("VOLT:DC:RES? MIN"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401DCVoltage_get_ResolutionMin(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCVoltageRatio_get_InputVoltageMax(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCVoltageRatio), _T("IAgilent34401DCVoltageRatio"), _T("get_InputVoltageMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InputVoltageMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCVoltageRatio"), _T("get_InputVoltageMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401DCVoltageRatio.InputVoltageMax"));
		if (!pSimData->GetValue(val))
		{
			*val = 1000;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401DCVoltageRatio_get_InputVoltageMax(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCVoltageRatio_get_InputVoltageMin(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCVoltageRatio), _T("IAgilent34401DCVoltageRatio"), _T("get_InputVoltageMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InputVoltageMin"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCVoltageRatio"), _T("get_InputVoltageMin"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401DCVoltageRatio.InputVoltageMin"));
		if (!pSimData->GetValue(val))
		{
			*val = 0.1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401DCVoltageRatio_get_InputVoltageMin(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCVoltageRatio_get_ReferenceVoltageMax(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCVoltageRatio), _T("IAgilent34401DCVoltageRatio"), _T("get_ReferenceVoltageMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ReferenceVoltageMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCVoltageRatio"), _T("get_ReferenceVoltageMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401DCVoltageRatio.ReferenceVoltageMax"));
		if (!pSimData->GetValue(val))
		{
			*val = 11.99999;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401DCVoltageRatio_get_ReferenceVoltageMax(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401DCVoltageRatio_get_ReferenceVoltageMin(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401DCVoltageRatio), _T("IAgilent34401DCVoltageRatio"), _T("get_ReferenceVoltageMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ReferenceVoltageMin"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401DCVoltageRatio"), _T("get_ReferenceVoltageMin"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401DCVoltageRatio.ReferenceVoltageMin"));
		if (!pSimData->GetValue(val))
		{
			*val = 0.1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401DCVoltageRatio_get_ReferenceVoltageMin(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Display_Clear(Agilent34401* pT)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Display), _T("IAgilent34401Display"), _T("Clear"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Display"), _T("Clear"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("DISP:TEXT:CLE"));

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Display_Clear();
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Display_get_Enabled(Agilent34401* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Display), _T("IAgilent34401Display"), _T("get_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Enabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Display"), _T("get_Enabled"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401Display.Enabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_TRUE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("DISP?"));
		strResp = _T("%{VARIANT_BOOL}s");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Display_get_Enabled(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Display_put_Enabled(Agilent34401* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Display), _T("IAgilent34401Display"), _T("put_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Display"), _T("put_Enabled"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401Display.Enabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("DISP %{VARIANT_BOOL}s"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Display_put_Enabled(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Display_get_Text(Agilent34401* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Display), _T("IAgilent34401Display"), _T("get_Text"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Text"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Display"), _T("get_Text"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<BSTR>* pSimData = pT->GetOrCreateCacheEntry<BSTR>(_T("IAgilent34401Display.Text"));
		if (!pSimData->GetValue(val))
		{
			*val = ::SysAllocString(L"");
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("DISP:TEXT?"));
		strResp = _T("%$Bs");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Display_get_Text(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Display_put_Text(Agilent34401* pT, BSTR val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Display), _T("IAgilent34401Display"), _T("put_Text"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Display"), _T("put_Text"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<BSTR>* pSimData = pT->GetOrCreateCacheEntry<BSTR>(_T("IAgilent34401Display.Text"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("DISP:TEXT \"%$Bs\""), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Display_put_Text(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Frequency_get_AutoVoltageRange(Agilent34401* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Frequency), _T("IAgilent34401Frequency"), _T("get_AutoVoltageRange"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_AutoVoltageRange"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Frequency"), _T("get_AutoVoltageRange"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401Frequency.AutoVoltageRange"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_TRUE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("FREQ:VOLT:RANG:AUTO?"));
		strResp = _T("%{VARIANT_BOOL}s");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Frequency_get_AutoVoltageRange(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Frequency_put_AutoVoltageRange(Agilent34401* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Frequency), _T("IAgilent34401Frequency"), _T("put_AutoVoltageRange"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Frequency"), _T("put_AutoVoltageRange"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401Frequency.AutoVoltageRange"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("FREQ:VOLT:RANG:AUTO %{VARIANT_BOOL}s"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Frequency_put_AutoVoltageRange(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Frequency_get_VoltageRange(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Frequency), _T("IAgilent34401Frequency"), _T("get_VoltageRange"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_VoltageRange"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Frequency"), _T("get_VoltageRange"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Frequency.VoltageRange"));
		if (!pSimData->GetValue(val))
		{
			*val = 10;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("FREQ:VOLT:RANG?"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Frequency_get_VoltageRange(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Frequency_put_VoltageRange(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Frequency), _T("IAgilent34401Frequency"), _T("put_VoltageRange"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Frequency"), _T("put_VoltageRange"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Frequency.VoltageRange"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("FREQ:VOLT:RANG %.15lg"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Frequency_put_VoltageRange(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Frequency_get_VoltageRangeMax(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Frequency), _T("IAgilent34401Frequency"), _T("get_VoltageRangeMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_VoltageRangeMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Frequency"), _T("get_VoltageRangeMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Frequency.VoltageRangeMax"));
		if (!pSimData->GetValue(val))
		{
			*val = 1000;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("FREQ:VOLT:RANG? MAX"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Frequency_get_VoltageRangeMax(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Frequency_get_VoltageRangeMin(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Frequency), _T("IAgilent34401Frequency"), _T("get_VoltageRangeMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_VoltageRangeMin"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Frequency"), _T("get_VoltageRangeMin"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Frequency.VoltageRangeMin"));
		if (!pSimData->GetValue(val))
		{
			*val = 0.1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("FREQ:VOLT:RANG? MIN"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Frequency_get_VoltageRangeMin(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Math_get_Average(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Math), _T("IAgilent34401Math"), _T("get_Average"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Average"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Math"), _T("get_Average"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Math.Average"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CALC:AVER:AVER?"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Math_get_Average(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Math_get_Count(Agilent34401* pT, long* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Math), _T("IAgilent34401Math"), _T("get_Count"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Count"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Math"), _T("get_Count"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IAgilent34401Math.Count"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CALC:AVER:COUN?"));
		strResp = _T("%d");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Math_get_Count(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Math_get_dBmRefResistance(Agilent34401* pT, Agilent34401dBmRefResistanceEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Math), _T("IAgilent34401Math"), _T("get_dBmRefResistance"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_dBmRefResistance"), _T("val"));
	*val = (Agilent34401dBmRefResistanceEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Math"), _T("get_dBmRefResistance"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<Agilent34401dBmRefResistanceEnum>* pSimData = pT->GetOrCreateCacheEntry<Agilent34401dBmRefResistanceEnum>(_T("IAgilent34401Math.dBmRefResistance"));
		if (!pSimData->GetValue(val))
		{
			*val = Agilent34401dBmRef8000_Ohm;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CALC:DBM:REF?"));
		strResp = _T("%{Agilent34401dBmRefResistanceEnum}s");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Math_get_dBmRefResistance(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Math_put_dBmRefResistance(Agilent34401* pT, Agilent34401dBmRefResistanceEnum val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Math), _T("IAgilent34401Math"), _T("put_dBmRefResistance"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Math"), _T("put_dBmRefResistance"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<Agilent34401dBmRefResistanceEnum>* pSimData = pT->GetOrCreateCacheEntry<Agilent34401dBmRefResistanceEnum>(_T("IAgilent34401Math.dBmRefResistance"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CALC:DBM:REF %{Agilent34401dBmRefResistanceEnum}s"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Math_put_dBmRefResistance(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Math_get_dBReference(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Math), _T("IAgilent34401Math"), _T("get_dBReference"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_dBReference"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Math"), _T("get_dBReference"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Math.dBReference"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CALC:DB:REF?"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Math_get_dBReference(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Math_put_dBReference(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Math), _T("IAgilent34401Math"), _T("put_dBReference"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Math"), _T("put_dBReference"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Math.dBReference"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CALC:DB:REF %.15lg"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Math_put_dBReference(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Math_get_Enabled(Agilent34401* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Math), _T("IAgilent34401Math"), _T("get_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Enabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Math"), _T("get_Enabled"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401Math.Enabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CALC:STAT?"));
		strResp = _T("%{VARIANT_BOOL}s");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Math_get_Enabled(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Math_put_Enabled(Agilent34401* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Math), _T("IAgilent34401Math"), _T("put_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Math"), _T("put_Enabled"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401Math.Enabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CALC:STAT %{VARIANT_BOOL}s"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Math_put_Enabled(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Math_get_Function(Agilent34401* pT, Agilent34401MathFunctionEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Math), _T("IAgilent34401Math"), _T("get_Function"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Function"), _T("val"));
	*val = (Agilent34401MathFunctionEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Math"), _T("get_Function"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<Agilent34401MathFunctionEnum>* pSimData = pT->GetOrCreateCacheEntry<Agilent34401MathFunctionEnum>(_T("IAgilent34401Math.Function"));
		if (!pSimData->GetValue(val))
		{
			*val = Agilent34401MathNull;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CALC:FUNC?"));
		strResp = _T("%{Agilent34401MathFunctionEnum}s");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Math_get_Function(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Math_put_Function(Agilent34401* pT, Agilent34401MathFunctionEnum val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Math), _T("IAgilent34401Math"), _T("put_Function"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Math"), _T("put_Function"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<Agilent34401MathFunctionEnum>* pSimData = pT->GetOrCreateCacheEntry<Agilent34401MathFunctionEnum>(_T("IAgilent34401Math.Function"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CALC:FUNC %{Agilent34401MathFunctionEnum}s"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Math_put_Function(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Math_get_LimitLower(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Math), _T("IAgilent34401Math"), _T("get_LimitLower"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_LimitLower"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Math"), _T("get_LimitLower"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Math.LimitLower"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CALC:LIM:LOW?"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Math_get_LimitLower(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Math_put_LimitLower(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Math), _T("IAgilent34401Math"), _T("put_LimitLower"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Math"), _T("put_LimitLower"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Math.LimitLower"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CALC:LIM:LOW %.15lg"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Math_put_LimitLower(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Math_get_LimitUpper(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Math), _T("IAgilent34401Math"), _T("get_LimitUpper"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_LimitUpper"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Math"), _T("get_LimitUpper"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Math.LimitUpper"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CALC:LIM:UPP?"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Math_get_LimitUpper(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Math_put_LimitUpper(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Math), _T("IAgilent34401Math"), _T("put_LimitUpper"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Math"), _T("put_LimitUpper"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Math.LimitUpper"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CALC:LIM:UPP %.15lg"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Math_put_LimitUpper(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Math_get_Maximum(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Math), _T("IAgilent34401Math"), _T("get_Maximum"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Maximum"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Math"), _T("get_Maximum"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Math.Maximum"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CALC:AVER:MAX?"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Math_get_Maximum(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Math_get_Minimum(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Math), _T("IAgilent34401Math"), _T("get_Minimum"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Minimum"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Math"), _T("get_Minimum"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Math.Minimum"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CALC:AVER:MIN?"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Math_get_Minimum(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Math_get_NullOffset(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Math), _T("IAgilent34401Math"), _T("get_NullOffset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_NullOffset"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Math"), _T("get_NullOffset"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Math.NullOffset"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CALC:NULL:OFFS?"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Math_get_NullOffset(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Math_put_NullOffset(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Math), _T("IAgilent34401Math"), _T("put_NullOffset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Math"), _T("put_NullOffset"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Math.NullOffset"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("CALC:NULL:OFFS %.15lg"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Math_put_NullOffset(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Measurement_SendSoftwareTrigger(Agilent34401* pT)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Measurement), _T("IAgilent34401Measurement"), _T("SendSoftwareTrigger"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Measurement"), _T("SendSoftwareTrigger"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("*TRG"));

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Measurement_SendSoftwareTrigger();
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Measurement_ReadMultiPoint(Agilent34401* pT, long MaxTimeMilliseconds, SAFEARRAY** ReadingArray)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Measurement), _T("IAgilent34401Measurement"), _T("ReadMultiPoint"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (ReadingArray == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("ReadMultiPoint"), _T("ReadingArray"));
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Measurement"), _T("ReadMultiPoint"), &hr, IN_PARAM(MaxTimeMilliseconds), INOUT_PARAM(ReadingArray), NULL);

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("READ?"));
		strResp = _T("");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Measurement_ReadMultiPoint(MaxTimeMilliseconds, ReadingArray);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Measurement_Read(Agilent34401* pT, long MaxTimeMilliseconds, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Measurement), _T("IAgilent34401Measurement"), _T("Read"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("Read"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Measurement"), _T("Read"), &hr, IN_PARAM(MaxTimeMilliseconds), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("READ?"));
		strResp = _T("");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Measurement_Read(MaxTimeMilliseconds, val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Measurement_IsOverRange(Agilent34401* pT, double MeasurementValue, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Measurement), _T("IAgilent34401Measurement"), _T("IsOverRange"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("IsOverRange"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Measurement"), _T("IsOverRange"), &hr, IN_PARAM(MeasurementValue), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401Measurement_IsOverRange(MeasurementValue, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Measurement_Initiate(Agilent34401* pT)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Measurement), _T("IAgilent34401Measurement"), _T("Initiate"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Measurement"), _T("Initiate"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("INIT"));

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Measurement_Initiate();
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Measurement_FetchMultiPoint(Agilent34401* pT, long MaxTimeMilliseconds, SAFEARRAY** ReadingArray)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Measurement), _T("IAgilent34401Measurement"), _T("FetchMultiPoint"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (ReadingArray == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("FetchMultiPoint"), _T("ReadingArray"));
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Measurement"), _T("FetchMultiPoint"), &hr, IN_PARAM(MaxTimeMilliseconds), INOUT_PARAM(ReadingArray), NULL);

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("FETC?"));
		strResp = _T("");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Measurement_FetchMultiPoint(MaxTimeMilliseconds, ReadingArray);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Measurement_Fetch(Agilent34401* pT, long MaxTimeMilliseconds, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Measurement), _T("IAgilent34401Measurement"), _T("Fetch"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("Fetch"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Measurement"), _T("Fetch"), &hr, IN_PARAM(MaxTimeMilliseconds), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("FETC?"));
		strResp = _T("");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Measurement_Fetch(MaxTimeMilliseconds, val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Measurement_Abort(Agilent34401* pT)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Measurement), _T("IAgilent34401Measurement"), _T("Abort"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Measurement"), _T("Abort"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401Measurement_Abort();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401MultiPoint_Configure(Agilent34401* pT, long TriggerCount, long SampleCount, Agilent34401SampleTriggerEnum SampleTrigger, double SampleInterval)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401MultiPoint), _T("IAgilent34401MultiPoint"), _T("Configure"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401MultiPoint"), _T("Configure"), &hr, IN_PARAM(TriggerCount), IN_PARAM(SampleCount), IN_PARAM(SampleTrigger), IN_PARAM(SampleInterval), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401MultiPoint_Configure(TriggerCount, SampleCount, SampleTrigger, SampleInterval);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401MultiPoint_get_Count(Agilent34401* pT, long* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401MultiPoint), _T("IAgilent34401MultiPoint"), _T("get_Count"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Count"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401MultiPoint"), _T("get_Count"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IAgilent34401MultiPoint.Count"));
		if (!pSimData->GetValue(val))
		{
			*val = 1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("TRIG:COUN?"));
		strResp = _T("%d");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401MultiPoint_get_Count(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401MultiPoint_put_Count(Agilent34401* pT, long val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401MultiPoint), _T("IAgilent34401MultiPoint"), _T("put_Count"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401MultiPoint"), _T("put_Count"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IAgilent34401MultiPoint.Count"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("TRIG:COUN %d"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401MultiPoint_put_Count(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401MultiPoint_get_MeasurementComplete(Agilent34401* pT, Agilent34401MeasCompleteDestEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401MultiPoint), _T("IAgilent34401MultiPoint"), _T("get_MeasurementComplete"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_MeasurementComplete"), _T("val"));
	*val = (Agilent34401MeasCompleteDestEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401MultiPoint"), _T("get_MeasurementComplete"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401MultiPoint_get_MeasurementComplete(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401MultiPoint_put_MeasurementComplete(Agilent34401* pT, Agilent34401MeasCompleteDestEnum val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401MultiPoint), _T("IAgilent34401MultiPoint"), _T("put_MeasurementComplete"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401MultiPoint"), _T("put_MeasurementComplete"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401MultiPoint_put_MeasurementComplete(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401MultiPoint_get_SampleCount(Agilent34401* pT, long* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401MultiPoint), _T("IAgilent34401MultiPoint"), _T("get_SampleCount"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SampleCount"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401MultiPoint"), _T("get_SampleCount"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IAgilent34401MultiPoint.SampleCount"));
		if (!pSimData->GetValue(val))
		{
			*val = 1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("SAMP:COUN?"));
		strResp = _T("%d");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401MultiPoint_get_SampleCount(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401MultiPoint_put_SampleCount(Agilent34401* pT, long val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401MultiPoint), _T("IAgilent34401MultiPoint"), _T("put_SampleCount"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401MultiPoint"), _T("put_SampleCount"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IAgilent34401MultiPoint.SampleCount"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("SAMP:COUN %d"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401MultiPoint_put_SampleCount(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401MultiPoint_get_SampleInterval(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401MultiPoint), _T("IAgilent34401MultiPoint"), _T("get_SampleInterval"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SampleInterval"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401MultiPoint"), _T("get_SampleInterval"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401MultiPoint.SampleInterval"));
		if (!pSimData->GetValue(val))
		{
			*val = 0.0015;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401MultiPoint_get_SampleInterval(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401MultiPoint_put_SampleInterval(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401MultiPoint), _T("IAgilent34401MultiPoint"), _T("put_SampleInterval"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401MultiPoint"), _T("put_SampleInterval"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401MultiPoint.SampleInterval"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401MultiPoint_put_SampleInterval(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401MultiPoint_get_SampleTrigger(Agilent34401* pT, Agilent34401SampleTriggerEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401MultiPoint), _T("IAgilent34401MultiPoint"), _T("get_SampleTrigger"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SampleTrigger"), _T("val"));
	*val = (Agilent34401SampleTriggerEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401MultiPoint"), _T("get_SampleTrigger"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<Agilent34401SampleTriggerEnum>* pSimData = pT->GetOrCreateCacheEntry<Agilent34401SampleTriggerEnum>(_T("IAgilent34401MultiPoint.SampleTrigger"));
		if (!pSimData->GetValue(val))
		{
			*val = Agilent34401SampleTriggerImmediate;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("TRIG:SOUR?"));
		strResp = _T("%{Agilent34401SampleTriggerEnum}s");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401MultiPoint_get_SampleTrigger(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401MultiPoint_put_SampleTrigger(Agilent34401* pT, Agilent34401SampleTriggerEnum val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401MultiPoint), _T("IAgilent34401MultiPoint"), _T("put_SampleTrigger"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401MultiPoint"), _T("put_SampleTrigger"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<Agilent34401SampleTriggerEnum>* pSimData = pT->GetOrCreateCacheEntry<Agilent34401SampleTriggerEnum>(_T("IAgilent34401MultiPoint.SampleTrigger"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("TRIG:SOUR %{Agilent34401SampleTriggerEnum}s"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401MultiPoint_put_SampleTrigger(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Resistance_Configure(Agilent34401* pT, double Range, double Resolution)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Resistance), _T("IAgilent34401Resistance"), _T("Configure"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Resistance"), _T("Configure"), &hr, IN_PARAM(Range), IN_PARAM(Resolution), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401Resistance_Configure(Range, Resolution);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Resistance_get_AutoRange(Agilent34401* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Resistance), _T("IAgilent34401Resistance"), _T("get_AutoRange"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_AutoRange"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Resistance"), _T("get_AutoRange"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401Resistance.AutoRange"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_TRUE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("RES:RANG:AUTO?"));
		strResp = _T("%{VARIANT_BOOL}s");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Resistance_get_AutoRange(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Resistance_put_AutoRange(Agilent34401* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Resistance), _T("IAgilent34401Resistance"), _T("put_AutoRange"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Resistance"), _T("put_AutoRange"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401Resistance.AutoRange"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("RES:RANG:AUTO %{VARIANT_BOOL}s"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Resistance_put_AutoRange(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Resistance_get_Range(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Resistance), _T("IAgilent34401Resistance"), _T("get_Range"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Range"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Resistance"), _T("get_Range"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Resistance.Range"));
		if (!pSimData->GetValue(val))
		{
			*val = 1000;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("RES:RANG?"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Resistance_get_Range(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Resistance_put_Range(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Resistance), _T("IAgilent34401Resistance"), _T("put_Range"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Resistance"), _T("put_Range"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Resistance.Range"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("RES:RANG %.15lg"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Resistance_put_Range(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Resistance_get_RangeMax(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Resistance), _T("IAgilent34401Resistance"), _T("get_RangeMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RangeMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Resistance"), _T("get_RangeMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Resistance.RangeMax"));
		if (!pSimData->GetValue(val))
		{
			*val = 100000000;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("RES:RANG? MAX"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Resistance_get_RangeMax(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Resistance_get_RangeMin(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Resistance), _T("IAgilent34401Resistance"), _T("get_RangeMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RangeMin"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Resistance"), _T("get_RangeMin"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Resistance.RangeMin"));
		if (!pSimData->GetValue(val))
		{
			*val = 100;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("RES:RANG? MIN"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Resistance_get_RangeMin(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Resistance_get_Resolution(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Resistance), _T("IAgilent34401Resistance"), _T("get_Resolution"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Resolution"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Resistance"), _T("get_Resolution"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Resistance.Resolution"));
		if (!pSimData->GetValue(val))
		{
			*val = 0.001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("RES:RES?"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Resistance_get_Resolution(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Resistance_put_Resolution(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Resistance), _T("IAgilent34401Resistance"), _T("put_Resolution"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Resistance"), _T("put_Resolution"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Resistance.Resolution"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("RES:RES %.15lg"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Resistance_put_Resolution(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Resistance_get_ResolutionMax(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Resistance), _T("IAgilent34401Resistance"), _T("get_ResolutionMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ResolutionMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Resistance"), _T("get_ResolutionMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Resistance.ResolutionMax"));
		if (!pSimData->GetValue(val))
		{
			*val = 0.1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("RES:RES? MAX"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Resistance_get_ResolutionMax(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Resistance_get_ResolutionMin(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Resistance), _T("IAgilent34401Resistance"), _T("get_ResolutionMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ResolutionMin"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Resistance"), _T("get_ResolutionMin"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Resistance.ResolutionMin"));
		if (!pSimData->GetValue(val))
		{
			*val = 0.0003;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("RES:RES? MIN"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Resistance_get_ResolutionMin(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Status_QueryRegister(Agilent34401* pT, Agilent34401StatusRegisterEnum Register, Agilent34401StatusSubRegisterEnum SubRegister, long* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Status), _T("IAgilent34401Status"), _T("QueryRegister"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("QueryRegister"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Status"), _T("QueryRegister"), &hr, IN_PARAM(Register), IN_PARAM(SubRegister), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401Status_QueryRegister(Register, SubRegister, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Status_Preset(Agilent34401* pT)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Status), _T("IAgilent34401Status"), _T("Preset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Status"), _T("Preset"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("STAT:PRES"));

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Status_Preset();
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Status_ConfigureRegister(Agilent34401* pT, Agilent34401StatusRegisterEnum Register, Agilent34401StatusSubRegisterEnum SubRegister, long Val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Status), _T("IAgilent34401Status"), _T("ConfigureRegister"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Status"), _T("ConfigureRegister"), &hr, IN_PARAM(Register), IN_PARAM(SubRegister), IN_PARAM(Val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401Status_ConfigureRegister(Register, SubRegister, Val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Status_Clear(Agilent34401* pT)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Status), _T("IAgilent34401Status"), _T("Clear"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Status"), _T("Clear"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("*CLS"));

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Status_Clear();
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Status_get_Register(Agilent34401* pT, Agilent34401StatusRegisterEnum Register, Agilent34401StatusSubRegisterEnum SubRegister, long* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Status), _T("IAgilent34401Status"), _T("get_Register"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Register"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Status"), _T("get_Register"), &hr, IN_PARAM(Register), IN_PARAM(SubRegister), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401Status_get_Register(Register, SubRegister, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Status_put_Register(Agilent34401* pT, Agilent34401StatusRegisterEnum Register, Agilent34401StatusSubRegisterEnum SubRegister, long val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Status), _T("IAgilent34401Status"), _T("put_Register"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Status"), _T("put_Register"), &hr, IN_PARAM(Register), IN_PARAM(SubRegister), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401Status_put_Register(Register, SubRegister, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Status_get_SerialPoll(Agilent34401* pT, long* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Status), _T("IAgilent34401Status"), _T("get_SerialPoll"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SerialPoll"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Status"), _T("get_SerialPoll"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IAgilent34401Status.SerialPoll"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401Status_get_SerialPoll(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401System_WaitForOperationComplete(Agilent34401* pT, long MaxTimeMilliseconds)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401System), _T("IAgilent34401System"), _T("WaitForOperationComplete"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401System"), _T("WaitForOperationComplete"), &hr, IN_PARAM(MaxTimeMilliseconds), NULL);

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("*OPC?"));

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401System_WaitForOperationComplete(MaxTimeMilliseconds);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401System_EnableLocalControls(Agilent34401* pT)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401System), _T("IAgilent34401System"), _T("EnableLocalControls"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401System"), _T("EnableLocalControls"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401System_EnableLocalControls();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401System_DisableLocalControls(Agilent34401* pT)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401System), _T("IAgilent34401System"), _T("DisableLocalControls"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401System"), _T("DisableLocalControls"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401System_DisableLocalControls();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401System_Beep(Agilent34401* pT)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401System), _T("IAgilent34401System"), _T("Beep"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401System"), _T("Beep"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("SYST:BEEP"));

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401System_Beep();
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401System_get_AsyncEventsEnabled(Agilent34401* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401System), _T("IAgilent34401System"), _T("get_AsyncEventsEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_AsyncEventsEnabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401System"), _T("get_AsyncEventsEnabled"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401System_get_AsyncEventsEnabled(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401System_put_AsyncEventsEnabled(Agilent34401* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401System), _T("IAgilent34401System"), _T("put_AsyncEventsEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401System"), _T("put_AsyncEventsEnabled"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401System_put_AsyncEventsEnabled(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401System_get_BeeperEnabled(Agilent34401* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401System), _T("IAgilent34401System"), _T("get_BeeperEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_BeeperEnabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401System"), _T("get_BeeperEnabled"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401System.BeeperEnabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("SYST:BEEP:STAT?"));
		strResp = _T("%{VARIANT_BOOL}s");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401System_get_BeeperEnabled(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401System_put_BeeperEnabled(Agilent34401* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401System), _T("IAgilent34401System"), _T("put_BeeperEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401System"), _T("put_BeeperEnabled"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401System.BeeperEnabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("SYST:BEEP:STAT %{VARIANT_BOOL}s"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401System_put_BeeperEnabled(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401System_get_IO(Agilent34401* pT, IFormattedIO488** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401System), _T("IAgilent34401System"), _T("get_IO"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_IO"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401System"), _T("get_IO"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401System_get_IO(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401System_get_TimeoutMilliseconds(Agilent34401* pT, long* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401System), _T("IAgilent34401System"), _T("get_TimeoutMilliseconds"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_TimeoutMilliseconds"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401System"), _T("get_TimeoutMilliseconds"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IAgilent34401System.TimeoutMilliseconds"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401System_get_TimeoutMilliseconds(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401System_put_TimeoutMilliseconds(Agilent34401* pT, long val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401System), _T("IAgilent34401System"), _T("put_TimeoutMilliseconds"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401System"), _T("put_TimeoutMilliseconds"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IAgilent34401System.TimeoutMilliseconds"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401System_put_TimeoutMilliseconds(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401System_get_TraceEnabled(Agilent34401* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401System), _T("IAgilent34401System"), _T("get_TraceEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_TraceEnabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401System"), _T("get_TraceEnabled"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401System.TraceEnabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401System_get_TraceEnabled(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401System_put_TraceEnabled(Agilent34401* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401System), _T("IAgilent34401System"), _T("put_TraceEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401System"), _T("put_TraceEnabled"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401System.TraceEnabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401System_put_TraceEnabled(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Trigger_Configure(Agilent34401* pT, Agilent34401TriggerSourceEnum TriggerSource, double TriggerDelay)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Trigger), _T("IAgilent34401Trigger"), _T("Configure"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Trigger"), _T("Configure"), &hr, IN_PARAM(TriggerSource), IN_PARAM(TriggerDelay), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401Trigger_Configure(TriggerSource, TriggerDelay);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Trigger_get_AutoDelay(Agilent34401* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Trigger), _T("IAgilent34401Trigger"), _T("get_AutoDelay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_AutoDelay"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Trigger"), _T("get_AutoDelay"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401Trigger.AutoDelay"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_TRUE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("TRIG:DEL:AUTO?"));
		strResp = _T("%{VARIANT_BOOL}s");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Trigger_get_AutoDelay(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Trigger_put_AutoDelay(Agilent34401* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Trigger), _T("IAgilent34401Trigger"), _T("put_AutoDelay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Trigger"), _T("put_AutoDelay"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IAgilent34401Trigger.AutoDelay"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("TRIG:DEL:AUTO %{VARIANT_BOOL}s"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Trigger_put_AutoDelay(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Trigger_get_Delay(Agilent34401* pT, double* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Trigger), _T("IAgilent34401Trigger"), _T("get_Delay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Delay"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Trigger"), _T("get_Delay"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Trigger.Delay"));
		if (!pSimData->GetValue(val))
		{
			*val = 0.0015;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("TRIG:DEL?"));
		strResp = _T("%lg");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Trigger_get_Delay(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Trigger_put_Delay(Agilent34401* pT, double val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Trigger), _T("IAgilent34401Trigger"), _T("put_Delay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Trigger"), _T("put_Delay"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IAgilent34401Trigger.Delay"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("TRIG:DEL %.15lg"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Trigger_put_Delay(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Trigger_get_MultiPoint(Agilent34401* pT, IAgilent34401MultiPoint** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Trigger), _T("IAgilent34401Trigger"), _T("get_MultiPoint"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_MultiPoint"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Trigger"), _T("get_MultiPoint"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401Trigger_get_MultiPoint(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Trigger_get_Slope(Agilent34401* pT, Agilent34401TriggerSlopeEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Trigger), _T("IAgilent34401Trigger"), _T("get_Slope"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Slope"), _T("val"));
	*val = (Agilent34401TriggerSlopeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Trigger"), _T("get_Slope"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<Agilent34401TriggerSlopeEnum>* pSimData = pT->GetOrCreateCacheEntry<Agilent34401TriggerSlopeEnum>(_T("IAgilent34401Trigger.Slope"));
		if (!pSimData->GetValue(val))
		{
			*val = Agilent34401TriggerSlopeNegative;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401Trigger_get_Slope(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Trigger_get_Source(Agilent34401* pT, Agilent34401TriggerSourceEnum* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Trigger), _T("IAgilent34401Trigger"), _T("get_Source"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Source"), _T("val"));
	*val = (Agilent34401TriggerSourceEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Trigger"), _T("get_Source"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<Agilent34401TriggerSourceEnum>* pSimData = pT->GetOrCreateCacheEntry<Agilent34401TriggerSourceEnum>(_T("IAgilent34401Trigger.Source"));
		if (!pSimData->GetValue(val))
		{
			*val = Agilent34401TriggerSourceImmediate;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		CString strResp;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("TRIG:SOUR?"));
		strResp = _T("%{Agilent34401TriggerSourceEnum}s");

		pT->PushInstrCommand(strCmd);
		pT->PushInstrResponse(strResp);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Trigger_get_Source(val);
		}
		pT->PopInstrCommand();
		pT->PopInstrResponse();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401Trigger_put_Source(Agilent34401* pT, Agilent34401TriggerSourceEnum val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401Trigger), _T("IAgilent34401Trigger"), _T("put_Source"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401Trigger"), _T("put_Source"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<Agilent34401TriggerSourceEnum>* pSimData = pT->GetOrCreateCacheEntry<Agilent34401TriggerSourceEnum>(_T("IAgilent34401Trigger.Source"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		CString strCmd;
		hr = CFormattedIo::Printf(strCmd, pT->GetRoot(), _T("TRIG:SOUR %{Agilent34401TriggerSourceEnum}s"), val);

		pT->PushInstrCommand(strCmd);
		if (SUCCEEDED(hr))
		{
			hr = pT->IAgilent34401Trigger_put_Source(val);
		}
		pT->PopInstrCommand();
	}

	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401System2_ReadBytes(Agilent34401* pT, SAFEARRAY** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401System2), _T("IAgilent34401System2"), _T("ReadBytes"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("ReadBytes"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401System2"), _T("ReadBytes"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401System2_ReadBytes(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401System2_ReadString(Agilent34401* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401System2), _T("IAgilent34401System2"), _T("ReadString"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("ReadString"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401System2"), _T("ReadString"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401System2_ReadString(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401System2_WriteBytes(Agilent34401* pT, SAFEARRAY** Buffer, __int64* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401System2), _T("IAgilent34401System2"), _T("WriteBytes"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("WriteBytes"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401System2"), _T("WriteBytes"), &hr, IN_PARAM(*Buffer), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401System2_WriteBytes(Buffer, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401System2_WriteString(Agilent34401* pT, BSTR Data)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401System2), _T("IAgilent34401System2"), _T("WriteString"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401System2"), _T("WriteString"), &hr, IN_PARAM(Data), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401System2_WriteString(Data);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401System2_get_IOTimeout(Agilent34401* pT, long* val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401System2), _T("IAgilent34401System2"), _T("get_IOTimeout"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_IOTimeout"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401System2"), _T("get_IOTimeout"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IAgilent34401System2.IOTimeout"));
		if (!pSimData->GetValue(val))
		{
			*val = 2000;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401System2_get_IOTimeout(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent34401System2_put_IOTimeout(Agilent34401* pT, long val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent34401System2), _T("IAgilent34401System2"), _T("put_IOTimeout"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent34401System2"), _T("put_IOTimeout"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IAgilent34401System2.IOTimeout"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent34401System2_put_IOTimeout(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IAgilent344012_get_System2(Agilent34401* pT, IAgilent34401System2** val)
{
	HRESULT hr = S_OK;

	Agilent34401::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IAgilent344012), _T("IAgilent344012"), _T("get_System2"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_System2"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IAgilent344012"), _T("get_System2"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IAgilent344012_get_System2(val);
	}
	return hr;
}
