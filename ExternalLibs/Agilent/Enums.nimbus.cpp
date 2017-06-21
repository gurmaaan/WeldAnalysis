/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#pragma once

#include "stdafx.h"
#include "CoAgilent34401.h"

///////////////////////////////////////////////////////////////////////////////
//
//	Functions for converting between enum values and instrument commands
//


template <>
const CEnumCommandConverter<Agilent34401ApertureTimeUnitsEnum>* GetEnumCommandConverter<Agilent34401ApertureTimeUnitsEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Agilent34401AutoZeroEnum>* GetEnumCommandConverter<Agilent34401AutoZeroEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("IAgilent34401Advanced.AutoZero")) == 0)
	{
		static CEnumCommandConverter<Agilent34401AutoZeroEnum> _converter(
			new CEnumCommand<Agilent34401AutoZeroEnum>(_T(""),
				new CEnumMemberCommand<Agilent34401AutoZeroEnum>(Agilent34401AutoZeroOff, _T("0"),  NULL),
				new CEnumMemberCommand<Agilent34401AutoZeroEnum>(Agilent34401AutoZeroOn, _T("1"),  NULL),
				new CEnumMemberCommand<Agilent34401AutoZeroEnum>(Agilent34401AutoZeroOnce, _T("2"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Agilent34401InputTerminalEnum>* GetEnumCommandConverter<Agilent34401InputTerminalEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("IAgilent34401Advanced.InputTerminal")) == 0)
	{
		static CEnumCommandConverter<Agilent34401InputTerminalEnum> _converter(
			new CEnumCommand<Agilent34401InputTerminalEnum>(_T(""),
				new CEnumMemberCommand<Agilent34401InputTerminalEnum>(Agilent34401InputTerminalFront, _T("FRON"),  NULL),
				new CEnumMemberCommand<Agilent34401InputTerminalEnum>(Agilent34401InputTerminalRear, _T("REAR"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Agilent34401FunctionEnum>* GetEnumCommandConverter<Agilent34401FunctionEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("IAgilent34401.Function")) == 0)
	{
		static CEnumCommandConverter<Agilent34401FunctionEnum> _converter(
			new CEnumCommand<Agilent34401FunctionEnum>(_T(""),
				new CEnumMemberCommand<Agilent34401FunctionEnum>(Agilent34401FunctionDCVolts, _T("\"VOLT\""),  NULL),
				new CEnumMemberCommand<Agilent34401FunctionEnum>(Agilent34401FunctionACVolts, _T("\"VOLT:AC\""),  NULL),
				new CEnumMemberCommand<Agilent34401FunctionEnum>(Agilent34401FunctionDCCurrent, _T("\"CURR\""),  NULL),
				new CEnumMemberCommand<Agilent34401FunctionEnum>(Agilent34401FunctionACCurrent, _T("\"CURR:AC\""),  NULL),
				new CEnumMemberCommand<Agilent34401FunctionEnum>(Agilent34401Function2WireRes, _T("\"RES\""),  NULL),
				new CEnumMemberCommand<Agilent34401FunctionEnum>(Agilent34401Function4WireRes, _T("\"FRES\""),  NULL),
				new CEnumMemberCommand<Agilent34401FunctionEnum>(Agilent34401FunctionFreq, _T("\"FREQ\""),  NULL),
				new CEnumMemberCommand<Agilent34401FunctionEnum>(Agilent34401FunctionPeriod, _T("\"PER\""),  NULL),
				new CEnumMemberCommand<Agilent34401FunctionEnum>(Agilent34401FunctionDCRatioVolts, _T("\"VOLT:RAT\""),  NULL),
				new CEnumMemberCommand<Agilent34401FunctionEnum>(Agilent34401FunctionContinuty, _T("\"CONT\""),  NULL),
				new CEnumMemberCommand<Agilent34401FunctionEnum>(Agilent34401FunctionDiode, _T("\"DIOD\""),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Agilent34401dBmRefResistanceEnum>* GetEnumCommandConverter<Agilent34401dBmRefResistanceEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("IAgilent34401Math.dBmRefResistance")) == 0)
	{
		static CEnumCommandConverter<Agilent34401dBmRefResistanceEnum> _converter(
			new CEnumCommand<Agilent34401dBmRefResistanceEnum>(_T(""),
				new CEnumMemberCommand<Agilent34401dBmRefResistanceEnum>(Agilent34401dBmRef50_Ohm, _T("50"),  NULL),
				new CEnumMemberCommand<Agilent34401dBmRefResistanceEnum>(Agilent34401dBmRef75_Ohm, _T("75"),  NULL),
				new CEnumMemberCommand<Agilent34401dBmRefResistanceEnum>(Agilent34401dBmRef93_Ohm, _T("93"),  NULL),
				new CEnumMemberCommand<Agilent34401dBmRefResistanceEnum>(Agilent34401dBmRef110_Ohm, _T("110"),  NULL),
				new CEnumMemberCommand<Agilent34401dBmRefResistanceEnum>(Agilent34401dBmRef124_Ohm, _T("124"),  NULL),
				new CEnumMemberCommand<Agilent34401dBmRefResistanceEnum>(Agilent34401dBmRef125_Ohm, _T("125"),  NULL),
				new CEnumMemberCommand<Agilent34401dBmRefResistanceEnum>(Agilent34401dBmRef135_Ohm, _T("135"),  NULL),
				new CEnumMemberCommand<Agilent34401dBmRefResistanceEnum>(Agilent34401dBmRef150_Ohm, _T("150"),  NULL),
				new CEnumMemberCommand<Agilent34401dBmRefResistanceEnum>(Agilent34401dBmRef250_Ohm, _T("250"),  NULL),
				new CEnumMemberCommand<Agilent34401dBmRefResistanceEnum>(Agilent34401dBmRef300_Ohm, _T("300"),  NULL),
				new CEnumMemberCommand<Agilent34401dBmRefResistanceEnum>(Agilent34401dBmRef500_Ohm, _T("500"),  NULL),
				new CEnumMemberCommand<Agilent34401dBmRefResistanceEnum>(Agilent34401dBmRef600_Ohm, _T("600"),  NULL),
				new CEnumMemberCommand<Agilent34401dBmRefResistanceEnum>(Agilent34401dBmRef800_Ohm, _T("800"),  NULL),
				new CEnumMemberCommand<Agilent34401dBmRefResistanceEnum>(Agilent34401dBmRef900_Ohm, _T("900"),  NULL),
				new CEnumMemberCommand<Agilent34401dBmRefResistanceEnum>(Agilent34401dBmRef1000_Ohm, _T("1000"),  NULL),
				new CEnumMemberCommand<Agilent34401dBmRefResistanceEnum>(Agilent34401dBmRef1200_Ohm, _T("1200"),  NULL),
				new CEnumMemberCommand<Agilent34401dBmRefResistanceEnum>(Agilent34401dBmRef8000_Ohm, _T("8000"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Agilent34401MathFunctionEnum>* GetEnumCommandConverter<Agilent34401MathFunctionEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("IAgilent34401Math.Function")) == 0)
	{
		static CEnumCommandConverter<Agilent34401MathFunctionEnum> _converter(
			new CEnumCommand<Agilent34401MathFunctionEnum>(_T(""),
				new CEnumMemberCommand<Agilent34401MathFunctionEnum>(Agilent34401MathNull, _T("NULL"),  NULL),
				new CEnumMemberCommand<Agilent34401MathFunctionEnum>(Agilent34401MathdB, _T("DB"),  NULL),
				new CEnumMemberCommand<Agilent34401MathFunctionEnum>(Agilent34401MathdBm, _T("DBM"),  NULL),
				new CEnumMemberCommand<Agilent34401MathFunctionEnum>(Agilent34401MathAverage, _T("AVER"),  NULL),
				new CEnumMemberCommand<Agilent34401MathFunctionEnum>(Agilent34401MathLimit, _T("LIM"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Agilent34401StatusRegisterEnum>* GetEnumCommandConverter<Agilent34401StatusRegisterEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Agilent34401StatusSubRegisterEnum>* GetEnumCommandConverter<Agilent34401StatusSubRegisterEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Agilent34401TriggerSourceEnum>* GetEnumCommandConverter<Agilent34401TriggerSourceEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("IAgilent34401Trigger.Source")) == 0)
	{
		static CEnumCommandConverter<Agilent34401TriggerSourceEnum> _converter(
			new CEnumCommand<Agilent34401TriggerSourceEnum>(_T(""),
				new CEnumMemberCommand<Agilent34401TriggerSourceEnum>(Agilent34401TriggerSourceImmediate, _T("IMM"),  NULL),
				new CEnumMemberCommand<Agilent34401TriggerSourceEnum>(Agilent34401TriggerSourceExternal, _T("EXT"),  NULL),
				new CEnumMemberCommand<Agilent34401TriggerSourceEnum>(Agilent34401TriggerSourceSwTrigFunc, _T("BUS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Agilent34401SampleTriggerEnum>* GetEnumCommandConverter<Agilent34401SampleTriggerEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("IAgilent34401MultiPoint.SampleTrigger")) == 0)
	{
		static CEnumCommandConverter<Agilent34401SampleTriggerEnum> _converter(
			new CEnumCommand<Agilent34401SampleTriggerEnum>(_T(""),
				new CEnumMemberCommand<Agilent34401SampleTriggerEnum>(Agilent34401SampleTriggerImmediate, _T("IMM"),  NULL),
				new CEnumMemberCommand<Agilent34401SampleTriggerEnum>(Agilent34401SampleTriggerExternal, _T("EXT"),  NULL),
				new CEnumMemberCommand<Agilent34401SampleTriggerEnum>(Agilent34401SampleTriggerSwTrigFunc, _T("BUS"),  NULL),
				new CEnumMemberCommand<Agilent34401SampleTriggerEnum>(Agilent34401SampleTriggerInterval, _T("IMM"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Agilent34401MeasCompleteDestEnum>* GetEnumCommandConverter<Agilent34401MeasCompleteDestEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Agilent34401TriggerSlopeEnum>* GetEnumCommandConverter<Agilent34401TriggerSlopeEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Agilent34401ResolutionEnum>* GetEnumCommandConverter<Agilent34401ResolutionEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<VisaStatusCode>* GetEnumCommandConverter<VisaStatusCode>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<EventType>* GetEnumCommandConverter<EventType>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<HardwareInterfaceType>* GetEnumCommandConverter<HardwareInterfaceType>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IOProtocol>* GetEnumCommandConverter<IOProtocol>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<FDCMode>* GetEnumCommandConverter<FDCMode>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<AddressSpace>* GetEnumCommandConverter<AddressSpace>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<EventMechanism>* GetEnumCommandConverter<EventMechanism>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<TriggerLine>* GetEnumCommandConverter<TriggerLine>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<TriggerProtocol>* GetEnumCommandConverter<TriggerProtocol>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<BufferMask>* GetEnumCommandConverter<BufferMask>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Timeout>* GetEnumCommandConverter<Timeout>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<AccessMode>* GetEnumCommandConverter<AccessMode>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<SerialParity>* GetEnumCommandConverter<SerialParity>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<SerialStopBits>* GetEnumCommandConverter<SerialStopBits>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<SerialFlowControl>* GetEnumCommandConverter<SerialFlowControl>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<SerialEndConst>* GetEnumCommandConverter<SerialEndConst>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<LineState>* GetEnumCommandConverter<LineState>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<VXIMemoryAccessPrivilege>* GetEnumCommandConverter<VXIMemoryAccessPrivilege>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<DataWidth>* GetEnumCommandConverter<DataWidth>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<RENControlConst>* GetEnumCommandConverter<RENControlConst>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<ATNControlConst>* GetEnumCommandConverter<ATNControlConst>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<GPIBAddressState>* GetEnumCommandConverter<GPIBAddressState>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<VXICommandQuery>* GetEnumCommandConverter<VXICommandQuery>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<AssertInterruptConst>* GetEnumCommandConverter<AssertInterruptConst>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<AssertUtilityConst>* GetEnumCommandConverter<AssertUtilityConst>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<VXIDevClass>* GetEnumCommandConverter<VXIDevClass>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<PXIMemType>* GetEnumCommandConverter<PXIMemType>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IEEEASCIIType>* GetEnumCommandConverter<IEEEASCIIType>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IEEEBinaryType>* GetEnumCommandConverter<IEEEBinaryType>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<ConflictHandlerType>* GetEnumCommandConverter<ConflictHandlerType>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviDmmFunctionEnum>* GetEnumCommandConverter<IviDmmFunctionEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviDmmApertureTimeUnitsEnum>* GetEnumCommandConverter<IviDmmApertureTimeUnitsEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviDmmAutoZeroEnum>* GetEnumCommandConverter<IviDmmAutoZeroEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviDmmTransducerTypeEnum>* GetEnumCommandConverter<IviDmmTransducerTypeEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviDmmThermocoupleTypeEnum>* GetEnumCommandConverter<IviDmmThermocoupleTypeEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviDmmRefJunctionTypeEnum>* GetEnumCommandConverter<IviDmmRefJunctionTypeEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviDmmTriggerSourceEnum>* GetEnumCommandConverter<IviDmmTriggerSourceEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviDmmTriggerSlopeEnum>* GetEnumCommandConverter<IviDmmTriggerSlopeEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviDmmSampleTriggerEnum>* GetEnumCommandConverter<IviDmmSampleTriggerEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviDmmMeasCompleteDestEnum>* GetEnumCommandConverter<IviDmmMeasCompleteDestEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviDmmAutoRangeEnum>* GetEnumCommandConverter<IviDmmAutoRangeEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviDmmFrequencyVoltageRangeEnum>* GetEnumCommandConverter<IviDmmFrequencyVoltageRangeEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviDmmMaxTimeEnum>* GetEnumCommandConverter<IviDmmMaxTimeEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviDmmTriggerDelayEnum>* GetEnumCommandConverter<IviDmmTriggerDelayEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<VARIANT_BOOL>* GetEnumCommandConverter<VARIANT_BOOL>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("IAgilent34401ACCurrent.AutoRange")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("IAgilent34401ACVoltage.AutoRange")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("IAgilent34401Advanced.AutoImpedance")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("IAgilent34401Calibration.SecureState")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("IAgilent34401DCCurrent.AutoRange")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("IAgilent34401DCVoltage.AutoRange")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("IAgilent34401Display.Enabled")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("IAgilent34401Frequency.AutoVoltageRange")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("IAgilent34401Math.Enabled")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("IAgilent34401Resistance.AutoRange")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("IAgilent34401System.BeeperEnabled")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("IAgilent34401Trigger.AutoDelay")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"),  NULL),
				NULL),
			NULL);
			
	return &_converter;
}


bool CNode::BoolToCommand(VARIANT_BOOL bVal, CString& strCommand) const
{
	return EnumToCommand(bVal, strCommand);
}

bool CNode::BoolFromResponse(const CString& strCommand, VARIANT_BOOL& bVal) const
{
	return EnumFromResponse(strCommand, bVal);
}

const IEnumCommandConverter* GetEnumCommandConverter(const CString& strEnumName, const CString& strMethodIdentifier)
{
	if (strEnumName.CompareNoCase(_T("VARIANT_BOOL")) == 0)
	{
		return GetEnumCommandConverter<VARIANT_BOOL>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("ApertureTimeUnits")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401ApertureTimeUnitsEnum")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401ApertureTimeUnits")) == 0 || strEnumName.CompareNoCase(_T("ApertureTimeUnitsEnum")) == 0)
	{
		return GetEnumCommandConverter<Agilent34401ApertureTimeUnitsEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("AutoZero")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401AutoZeroEnum")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401AutoZero")) == 0 || strEnumName.CompareNoCase(_T("AutoZeroEnum")) == 0)
	{
		return GetEnumCommandConverter<Agilent34401AutoZeroEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("InputTerminal")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401InputTerminalEnum")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401InputTerminal")) == 0 || strEnumName.CompareNoCase(_T("InputTerminalEnum")) == 0)
	{
		return GetEnumCommandConverter<Agilent34401InputTerminalEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("Function")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401FunctionEnum")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401Function")) == 0 || strEnumName.CompareNoCase(_T("FunctionEnum")) == 0)
	{
		return GetEnumCommandConverter<Agilent34401FunctionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("dBmRefResistance")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401dBmRefResistanceEnum")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401dBmRefResistance")) == 0 || strEnumName.CompareNoCase(_T("dBmRefResistanceEnum")) == 0)
	{
		return GetEnumCommandConverter<Agilent34401dBmRefResistanceEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("MathFunction")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401MathFunctionEnum")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401MathFunction")) == 0 || strEnumName.CompareNoCase(_T("MathFunctionEnum")) == 0)
	{
		return GetEnumCommandConverter<Agilent34401MathFunctionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("StatusRegister")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401StatusRegisterEnum")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401StatusRegister")) == 0 || strEnumName.CompareNoCase(_T("StatusRegisterEnum")) == 0)
	{
		return GetEnumCommandConverter<Agilent34401StatusRegisterEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("StatusSubRegister")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401StatusSubRegisterEnum")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401StatusSubRegister")) == 0 || strEnumName.CompareNoCase(_T("StatusSubRegisterEnum")) == 0)
	{
		return GetEnumCommandConverter<Agilent34401StatusSubRegisterEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerSource")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401TriggerSourceEnum")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401TriggerSource")) == 0 || strEnumName.CompareNoCase(_T("TriggerSourceEnum")) == 0)
	{
		return GetEnumCommandConverter<Agilent34401TriggerSourceEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("SampleTrigger")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401SampleTriggerEnum")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401SampleTrigger")) == 0 || strEnumName.CompareNoCase(_T("SampleTriggerEnum")) == 0)
	{
		return GetEnumCommandConverter<Agilent34401SampleTriggerEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("MeasCompleteDest")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401MeasCompleteDestEnum")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401MeasCompleteDest")) == 0 || strEnumName.CompareNoCase(_T("MeasCompleteDestEnum")) == 0)
	{
		return GetEnumCommandConverter<Agilent34401MeasCompleteDestEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerSlope")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401TriggerSlopeEnum")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401TriggerSlope")) == 0 || strEnumName.CompareNoCase(_T("TriggerSlopeEnum")) == 0)
	{
		return GetEnumCommandConverter<Agilent34401TriggerSlopeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("Resolution")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401ResolutionEnum")) == 0 || strEnumName.CompareNoCase(_T("Agilent34401Resolution")) == 0 || strEnumName.CompareNoCase(_T("ResolutionEnum")) == 0)
	{
		return GetEnumCommandConverter<Agilent34401ResolutionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("VisaStatusCode")) == 0 || strEnumName.CompareNoCase(_T("VisaStatusCode")) == 0 || strEnumName.CompareNoCase(_T("VisaStatusCode")) == 0 || strEnumName.CompareNoCase(_T("VisaStatusCode")) == 0)
	{
		return GetEnumCommandConverter<VisaStatusCode>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("EventType")) == 0 || strEnumName.CompareNoCase(_T("EventType")) == 0 || strEnumName.CompareNoCase(_T("EventType")) == 0 || strEnumName.CompareNoCase(_T("EventType")) == 0)
	{
		return GetEnumCommandConverter<EventType>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("HardwareInterfaceType")) == 0 || strEnumName.CompareNoCase(_T("HardwareInterfaceType")) == 0 || strEnumName.CompareNoCase(_T("HardwareInterfaceType")) == 0 || strEnumName.CompareNoCase(_T("HardwareInterfaceType")) == 0)
	{
		return GetEnumCommandConverter<HardwareInterfaceType>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("IOProtocol")) == 0 || strEnumName.CompareNoCase(_T("IOProtocol")) == 0 || strEnumName.CompareNoCase(_T("IOProtocol")) == 0 || strEnumName.CompareNoCase(_T("IOProtocol")) == 0)
	{
		return GetEnumCommandConverter<IOProtocol>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("FDCMode")) == 0 || strEnumName.CompareNoCase(_T("FDCMode")) == 0 || strEnumName.CompareNoCase(_T("FDCMode")) == 0 || strEnumName.CompareNoCase(_T("FDCMode")) == 0)
	{
		return GetEnumCommandConverter<FDCMode>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("AddressSpace")) == 0 || strEnumName.CompareNoCase(_T("AddressSpace")) == 0 || strEnumName.CompareNoCase(_T("AddressSpace")) == 0 || strEnumName.CompareNoCase(_T("AddressSpace")) == 0)
	{
		return GetEnumCommandConverter<AddressSpace>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("EventMechanism")) == 0 || strEnumName.CompareNoCase(_T("EventMechanism")) == 0 || strEnumName.CompareNoCase(_T("EventMechanism")) == 0 || strEnumName.CompareNoCase(_T("EventMechanism")) == 0)
	{
		return GetEnumCommandConverter<EventMechanism>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerLine")) == 0 || strEnumName.CompareNoCase(_T("TriggerLine")) == 0 || strEnumName.CompareNoCase(_T("TriggerLine")) == 0 || strEnumName.CompareNoCase(_T("TriggerLine")) == 0)
	{
		return GetEnumCommandConverter<TriggerLine>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerProtocol")) == 0 || strEnumName.CompareNoCase(_T("TriggerProtocol")) == 0 || strEnumName.CompareNoCase(_T("TriggerProtocol")) == 0 || strEnumName.CompareNoCase(_T("TriggerProtocol")) == 0)
	{
		return GetEnumCommandConverter<TriggerProtocol>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("BufferMask")) == 0 || strEnumName.CompareNoCase(_T("BufferMask")) == 0 || strEnumName.CompareNoCase(_T("BufferMask")) == 0 || strEnumName.CompareNoCase(_T("BufferMask")) == 0)
	{
		return GetEnumCommandConverter<BufferMask>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("Timeout")) == 0 || strEnumName.CompareNoCase(_T("Timeout")) == 0 || strEnumName.CompareNoCase(_T("Timeout")) == 0 || strEnumName.CompareNoCase(_T("Timeout")) == 0)
	{
		return GetEnumCommandConverter<Timeout>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("AccessMode")) == 0 || strEnumName.CompareNoCase(_T("AccessMode")) == 0 || strEnumName.CompareNoCase(_T("AccessMode")) == 0 || strEnumName.CompareNoCase(_T("AccessMode")) == 0)
	{
		return GetEnumCommandConverter<AccessMode>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("SerialParity")) == 0 || strEnumName.CompareNoCase(_T("SerialParity")) == 0 || strEnumName.CompareNoCase(_T("SerialParity")) == 0 || strEnumName.CompareNoCase(_T("SerialParity")) == 0)
	{
		return GetEnumCommandConverter<SerialParity>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("SerialStopBits")) == 0 || strEnumName.CompareNoCase(_T("SerialStopBits")) == 0 || strEnumName.CompareNoCase(_T("SerialStopBits")) == 0 || strEnumName.CompareNoCase(_T("SerialStopBits")) == 0)
	{
		return GetEnumCommandConverter<SerialStopBits>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("SerialFlowControl")) == 0 || strEnumName.CompareNoCase(_T("SerialFlowControl")) == 0 || strEnumName.CompareNoCase(_T("SerialFlowControl")) == 0 || strEnumName.CompareNoCase(_T("SerialFlowControl")) == 0)
	{
		return GetEnumCommandConverter<SerialFlowControl>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("SerialEndConst")) == 0 || strEnumName.CompareNoCase(_T("SerialEndConst")) == 0 || strEnumName.CompareNoCase(_T("SerialEndConst")) == 0 || strEnumName.CompareNoCase(_T("SerialEndConst")) == 0)
	{
		return GetEnumCommandConverter<SerialEndConst>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("LineState")) == 0 || strEnumName.CompareNoCase(_T("LineState")) == 0 || strEnumName.CompareNoCase(_T("LineState")) == 0 || strEnumName.CompareNoCase(_T("LineState")) == 0)
	{
		return GetEnumCommandConverter<LineState>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("VXIMemoryAccessPrivilege")) == 0 || strEnumName.CompareNoCase(_T("VXIMemoryAccessPrivilege")) == 0 || strEnumName.CompareNoCase(_T("VXIMemoryAccessPrivilege")) == 0 || strEnumName.CompareNoCase(_T("VXIMemoryAccessPrivilege")) == 0)
	{
		return GetEnumCommandConverter<VXIMemoryAccessPrivilege>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("DataWidth")) == 0 || strEnumName.CompareNoCase(_T("DataWidth")) == 0 || strEnumName.CompareNoCase(_T("DataWidth")) == 0 || strEnumName.CompareNoCase(_T("DataWidth")) == 0)
	{
		return GetEnumCommandConverter<DataWidth>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("RENControlConst")) == 0 || strEnumName.CompareNoCase(_T("RENControlConst")) == 0 || strEnumName.CompareNoCase(_T("RENControlConst")) == 0 || strEnumName.CompareNoCase(_T("RENControlConst")) == 0)
	{
		return GetEnumCommandConverter<RENControlConst>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("ATNControlConst")) == 0 || strEnumName.CompareNoCase(_T("ATNControlConst")) == 0 || strEnumName.CompareNoCase(_T("ATNControlConst")) == 0 || strEnumName.CompareNoCase(_T("ATNControlConst")) == 0)
	{
		return GetEnumCommandConverter<ATNControlConst>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("GPIBAddressState")) == 0 || strEnumName.CompareNoCase(_T("GPIBAddressState")) == 0 || strEnumName.CompareNoCase(_T("GPIBAddressState")) == 0 || strEnumName.CompareNoCase(_T("GPIBAddressState")) == 0)
	{
		return GetEnumCommandConverter<GPIBAddressState>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("VXICommandQuery")) == 0 || strEnumName.CompareNoCase(_T("VXICommandQuery")) == 0 || strEnumName.CompareNoCase(_T("VXICommandQuery")) == 0 || strEnumName.CompareNoCase(_T("VXICommandQuery")) == 0)
	{
		return GetEnumCommandConverter<VXICommandQuery>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("AssertInterruptConst")) == 0 || strEnumName.CompareNoCase(_T("AssertInterruptConst")) == 0 || strEnumName.CompareNoCase(_T("AssertInterruptConst")) == 0 || strEnumName.CompareNoCase(_T("AssertInterruptConst")) == 0)
	{
		return GetEnumCommandConverter<AssertInterruptConst>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("AssertUtilityConst")) == 0 || strEnumName.CompareNoCase(_T("AssertUtilityConst")) == 0 || strEnumName.CompareNoCase(_T("AssertUtilityConst")) == 0 || strEnumName.CompareNoCase(_T("AssertUtilityConst")) == 0)
	{
		return GetEnumCommandConverter<AssertUtilityConst>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("VXIDevClass")) == 0 || strEnumName.CompareNoCase(_T("VXIDevClass")) == 0 || strEnumName.CompareNoCase(_T("VXIDevClass")) == 0 || strEnumName.CompareNoCase(_T("VXIDevClass")) == 0)
	{
		return GetEnumCommandConverter<VXIDevClass>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PXIMemType")) == 0 || strEnumName.CompareNoCase(_T("PXIMemType")) == 0 || strEnumName.CompareNoCase(_T("PXIMemType")) == 0 || strEnumName.CompareNoCase(_T("PXIMemType")) == 0)
	{
		return GetEnumCommandConverter<PXIMemType>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("IEEEASCIIType")) == 0 || strEnumName.CompareNoCase(_T("IEEEASCIIType")) == 0 || strEnumName.CompareNoCase(_T("IEEEASCIIType")) == 0 || strEnumName.CompareNoCase(_T("IEEEASCIIType")) == 0)
	{
		return GetEnumCommandConverter<IEEEASCIIType>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("IEEEBinaryType")) == 0 || strEnumName.CompareNoCase(_T("IEEEBinaryType")) == 0 || strEnumName.CompareNoCase(_T("IEEEBinaryType")) == 0 || strEnumName.CompareNoCase(_T("IEEEBinaryType")) == 0)
	{
		return GetEnumCommandConverter<IEEEBinaryType>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("ConflictHandlerType")) == 0 || strEnumName.CompareNoCase(_T("ConflictHandlerType")) == 0 || strEnumName.CompareNoCase(_T("ConflictHandlerType")) == 0 || strEnumName.CompareNoCase(_T("ConflictHandlerType")) == 0)
	{
		return GetEnumCommandConverter<ConflictHandlerType>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("Function")) == 0 || strEnumName.CompareNoCase(_T("IviDmmFunctionEnum")) == 0 || strEnumName.CompareNoCase(_T("IviDmmFunction")) == 0 || strEnumName.CompareNoCase(_T("FunctionEnum")) == 0)
	{
		return GetEnumCommandConverter<IviDmmFunctionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("ApertureTimeUnits")) == 0 || strEnumName.CompareNoCase(_T("IviDmmApertureTimeUnitsEnum")) == 0 || strEnumName.CompareNoCase(_T("IviDmmApertureTimeUnits")) == 0 || strEnumName.CompareNoCase(_T("ApertureTimeUnitsEnum")) == 0)
	{
		return GetEnumCommandConverter<IviDmmApertureTimeUnitsEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("AutoZero")) == 0 || strEnumName.CompareNoCase(_T("IviDmmAutoZeroEnum")) == 0 || strEnumName.CompareNoCase(_T("IviDmmAutoZero")) == 0 || strEnumName.CompareNoCase(_T("AutoZeroEnum")) == 0)
	{
		return GetEnumCommandConverter<IviDmmAutoZeroEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TransducerType")) == 0 || strEnumName.CompareNoCase(_T("IviDmmTransducerTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("IviDmmTransducerType")) == 0 || strEnumName.CompareNoCase(_T("TransducerTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<IviDmmTransducerTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("ThermocoupleType")) == 0 || strEnumName.CompareNoCase(_T("IviDmmThermocoupleTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("IviDmmThermocoupleType")) == 0 || strEnumName.CompareNoCase(_T("ThermocoupleTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<IviDmmThermocoupleTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("RefJunctionType")) == 0 || strEnumName.CompareNoCase(_T("IviDmmRefJunctionTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("IviDmmRefJunctionType")) == 0 || strEnumName.CompareNoCase(_T("RefJunctionTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<IviDmmRefJunctionTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerSource")) == 0 || strEnumName.CompareNoCase(_T("IviDmmTriggerSourceEnum")) == 0 || strEnumName.CompareNoCase(_T("IviDmmTriggerSource")) == 0 || strEnumName.CompareNoCase(_T("TriggerSourceEnum")) == 0)
	{
		return GetEnumCommandConverter<IviDmmTriggerSourceEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerSlope")) == 0 || strEnumName.CompareNoCase(_T("IviDmmTriggerSlopeEnum")) == 0 || strEnumName.CompareNoCase(_T("IviDmmTriggerSlope")) == 0 || strEnumName.CompareNoCase(_T("TriggerSlopeEnum")) == 0)
	{
		return GetEnumCommandConverter<IviDmmTriggerSlopeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("SampleTrigger")) == 0 || strEnumName.CompareNoCase(_T("IviDmmSampleTriggerEnum")) == 0 || strEnumName.CompareNoCase(_T("IviDmmSampleTrigger")) == 0 || strEnumName.CompareNoCase(_T("SampleTriggerEnum")) == 0)
	{
		return GetEnumCommandConverter<IviDmmSampleTriggerEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("MeasCompleteDest")) == 0 || strEnumName.CompareNoCase(_T("IviDmmMeasCompleteDestEnum")) == 0 || strEnumName.CompareNoCase(_T("IviDmmMeasCompleteDest")) == 0 || strEnumName.CompareNoCase(_T("MeasCompleteDestEnum")) == 0)
	{
		return GetEnumCommandConverter<IviDmmMeasCompleteDestEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("AutoRange")) == 0 || strEnumName.CompareNoCase(_T("IviDmmAutoRangeEnum")) == 0 || strEnumName.CompareNoCase(_T("IviDmmAutoRange")) == 0 || strEnumName.CompareNoCase(_T("AutoRangeEnum")) == 0)
	{
		return GetEnumCommandConverter<IviDmmAutoRangeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("FrequencyVoltageRange")) == 0 || strEnumName.CompareNoCase(_T("IviDmmFrequencyVoltageRangeEnum")) == 0 || strEnumName.CompareNoCase(_T("IviDmmFrequencyVoltageRange")) == 0 || strEnumName.CompareNoCase(_T("FrequencyVoltageRangeEnum")) == 0)
	{
		return GetEnumCommandConverter<IviDmmFrequencyVoltageRangeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("MaxTime")) == 0 || strEnumName.CompareNoCase(_T("IviDmmMaxTimeEnum")) == 0 || strEnumName.CompareNoCase(_T("IviDmmMaxTime")) == 0 || strEnumName.CompareNoCase(_T("MaxTimeEnum")) == 0)
	{
		return GetEnumCommandConverter<IviDmmMaxTimeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerDelay")) == 0 || strEnumName.CompareNoCase(_T("IviDmmTriggerDelayEnum")) == 0 || strEnumName.CompareNoCase(_T("IviDmmTriggerDelay")) == 0 || strEnumName.CompareNoCase(_T("TriggerDelayEnum")) == 0)
	{
		return GetEnumCommandConverter<IviDmmTriggerDelayEnum>(strMethodIdentifier);
	}


	return NULL;
};

///////////////////////////////////////////////////////////////////////////////
//
//	Functions for converting between enum values and their symbolic names
//

template <>
const CEnumNameConverter<Agilent34401ApertureTimeUnitsEnum>* GetEnumNameConverter<Agilent34401ApertureTimeUnitsEnum>()
{
	static CEnumNameConverter<Agilent34401ApertureTimeUnitsEnum> _converter(
		Agilent34401ApertureSeconds, _T("Agilent34401ApertureSeconds"),
		Agilent34401AperturePowerLineCycles, _T("Agilent34401AperturePowerLineCycles"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Agilent34401AutoZeroEnum>* GetEnumNameConverter<Agilent34401AutoZeroEnum>()
{
	static CEnumNameConverter<Agilent34401AutoZeroEnum> _converter(
		Agilent34401AutoZeroOff, _T("Agilent34401AutoZeroOff"),
		Agilent34401AutoZeroOn, _T("Agilent34401AutoZeroOn"),
		Agilent34401AutoZeroOnce, _T("Agilent34401AutoZeroOnce"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Agilent34401InputTerminalEnum>* GetEnumNameConverter<Agilent34401InputTerminalEnum>()
{
	static CEnumNameConverter<Agilent34401InputTerminalEnum> _converter(
		Agilent34401InputTerminalFront, _T("Agilent34401InputTerminalFront"),
		Agilent34401InputTerminalRear, _T("Agilent34401InputTerminalRear"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Agilent34401FunctionEnum>* GetEnumNameConverter<Agilent34401FunctionEnum>()
{
	static CEnumNameConverter<Agilent34401FunctionEnum> _converter(
		Agilent34401FunctionDCVolts, _T("Agilent34401FunctionDCVolts"),
		Agilent34401FunctionACVolts, _T("Agilent34401FunctionACVolts"),
		Agilent34401FunctionDCCurrent, _T("Agilent34401FunctionDCCurrent"),
		Agilent34401FunctionACCurrent, _T("Agilent34401FunctionACCurrent"),
		Agilent34401Function2WireRes, _T("Agilent34401Function2WireRes"),
		Agilent34401Function4WireRes, _T("Agilent34401Function4WireRes"),
		Agilent34401FunctionFreq, _T("Agilent34401FunctionFreq"),
		Agilent34401FunctionPeriod, _T("Agilent34401FunctionPeriod"),
		Agilent34401FunctionDCRatioVolts, _T("Agilent34401FunctionDCRatioVolts"),
		Agilent34401FunctionContinuty, _T("Agilent34401FunctionContinuty"),
		Agilent34401FunctionDiode, _T("Agilent34401FunctionDiode"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Agilent34401dBmRefResistanceEnum>* GetEnumNameConverter<Agilent34401dBmRefResistanceEnum>()
{
	static CEnumNameConverter<Agilent34401dBmRefResistanceEnum> _converter(
		Agilent34401dBmRef50_Ohm, _T("Agilent34401dBmRef50_Ohm"),
		Agilent34401dBmRef75_Ohm, _T("Agilent34401dBmRef75_Ohm"),
		Agilent34401dBmRef93_Ohm, _T("Agilent34401dBmRef93_Ohm"),
		Agilent34401dBmRef110_Ohm, _T("Agilent34401dBmRef110_Ohm"),
		Agilent34401dBmRef124_Ohm, _T("Agilent34401dBmRef124_Ohm"),
		Agilent34401dBmRef125_Ohm, _T("Agilent34401dBmRef125_Ohm"),
		Agilent34401dBmRef135_Ohm, _T("Agilent34401dBmRef135_Ohm"),
		Agilent34401dBmRef150_Ohm, _T("Agilent34401dBmRef150_Ohm"),
		Agilent34401dBmRef250_Ohm, _T("Agilent34401dBmRef250_Ohm"),
		Agilent34401dBmRef300_Ohm, _T("Agilent34401dBmRef300_Ohm"),
		Agilent34401dBmRef500_Ohm, _T("Agilent34401dBmRef500_Ohm"),
		Agilent34401dBmRef600_Ohm, _T("Agilent34401dBmRef600_Ohm"),
		Agilent34401dBmRef800_Ohm, _T("Agilent34401dBmRef800_Ohm"),
		Agilent34401dBmRef900_Ohm, _T("Agilent34401dBmRef900_Ohm"),
		Agilent34401dBmRef1000_Ohm, _T("Agilent34401dBmRef1000_Ohm"),
		Agilent34401dBmRef1200_Ohm, _T("Agilent34401dBmRef1200_Ohm"),
		Agilent34401dBmRef8000_Ohm, _T("Agilent34401dBmRef8000_Ohm"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Agilent34401MathFunctionEnum>* GetEnumNameConverter<Agilent34401MathFunctionEnum>()
{
	static CEnumNameConverter<Agilent34401MathFunctionEnum> _converter(
		Agilent34401MathNull, _T("Agilent34401MathNull"),
		Agilent34401MathdB, _T("Agilent34401MathdB"),
		Agilent34401MathdBm, _T("Agilent34401MathdBm"),
		Agilent34401MathAverage, _T("Agilent34401MathAverage"),
		Agilent34401MathLimit, _T("Agilent34401MathLimit"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Agilent34401StatusRegisterEnum>* GetEnumNameConverter<Agilent34401StatusRegisterEnum>()
{
	static CEnumNameConverter<Agilent34401StatusRegisterEnum> _converter(
		Agilent34401StatusRegisterStatusByte, _T("Agilent34401StatusRegisterStatusByte"),
		Agilent34401StatusRegisterQuestionableData, _T("Agilent34401StatusRegisterQuestionableData"),
		Agilent34401StatusRegisterStandardEvent, _T("Agilent34401StatusRegisterStandardEvent"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Agilent34401StatusSubRegisterEnum>* GetEnumNameConverter<Agilent34401StatusSubRegisterEnum>()
{
	static CEnumNameConverter<Agilent34401StatusSubRegisterEnum> _converter(
		Agilent34401StatusSubRegisterEvent, _T("Agilent34401StatusSubRegisterEvent"),
		Agilent34401StatusSubRegisterEnable, _T("Agilent34401StatusSubRegisterEnable"),
		Agilent34401StatusSubRegisterSummary, _T("Agilent34401StatusSubRegisterSummary"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Agilent34401TriggerSourceEnum>* GetEnumNameConverter<Agilent34401TriggerSourceEnum>()
{
	static CEnumNameConverter<Agilent34401TriggerSourceEnum> _converter(
		Agilent34401TriggerSourceImmediate, _T("Agilent34401TriggerSourceImmediate"),
		Agilent34401TriggerSourceExternal, _T("Agilent34401TriggerSourceExternal"),
		Agilent34401TriggerSourceSwTrigFunc, _T("Agilent34401TriggerSourceSwTrigFunc"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Agilent34401SampleTriggerEnum>* GetEnumNameConverter<Agilent34401SampleTriggerEnum>()
{
	static CEnumNameConverter<Agilent34401SampleTriggerEnum> _converter(
		Agilent34401SampleTriggerImmediate, _T("Agilent34401SampleTriggerImmediate"),
		Agilent34401SampleTriggerExternal, _T("Agilent34401SampleTriggerExternal"),
		Agilent34401SampleTriggerSwTrigFunc, _T("Agilent34401SampleTriggerSwTrigFunc"),
		Agilent34401SampleTriggerInterval, _T("Agilent34401SampleTriggerInterval"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Agilent34401MeasCompleteDestEnum>* GetEnumNameConverter<Agilent34401MeasCompleteDestEnum>()
{
	static CEnumNameConverter<Agilent34401MeasCompleteDestEnum> _converter(
		Agilent34401MeasCompleteDestNone, _T("Agilent34401MeasCompleteDestNone"),
		Agilent34401MeasCompleteDestExternal, _T("Agilent34401MeasCompleteDestExternal"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Agilent34401TriggerSlopeEnum>* GetEnumNameConverter<Agilent34401TriggerSlopeEnum>()
{
	static CEnumNameConverter<Agilent34401TriggerSlopeEnum> _converter(
		Agilent34401TriggerSlopePositive, _T("Agilent34401TriggerSlopePositive"),
		Agilent34401TriggerSlopeNegative, _T("Agilent34401TriggerSlopeNegative"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Agilent34401ResolutionEnum>* GetEnumNameConverter<Agilent34401ResolutionEnum>()
{
	static CEnumNameConverter<Agilent34401ResolutionEnum> _converter(
		Agilent34401ResolutionFast4Digit, _T("Agilent34401ResolutionFast4Digit"),
		Agilent34401ResolutionSlow4Digit, _T("Agilent34401ResolutionSlow4Digit"),
		Agilent34401ResolutionFast5Digit, _T("Agilent34401ResolutionFast5Digit"),
		Agilent34401ResolutionSlow5Digit, _T("Agilent34401ResolutionSlow5Digit"),
		Agilent34401ResolutionFast6Digit, _T("Agilent34401ResolutionFast6Digit"),
		Agilent34401ResolutionSlow6Digit, _T("Agilent34401ResolutionSlow6Digit"),
		Agilent34401Resolution4andHalfDigit, _T("Agilent34401Resolution4andHalfDigit"),
		Agilent34401Resolution5andHalfDigit, _T("Agilent34401Resolution5andHalfDigit"),
		Agilent34401Resolution6andHalfDigit, _T("Agilent34401Resolution6andHalfDigit"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<VisaStatusCode>* GetEnumNameConverter<VisaStatusCode>()
{
	static CEnumNameConverter<VisaStatusCode> _converter(
		S_VISA_SUCCESS, _T("S_VISA_SUCCESS"),
		S_VISA_EVENT_EN, _T("S_VISA_EVENT_EN"),
		S_VISA_EVENT_DIS, _T("S_VISA_EVENT_DIS"),
		S_VISA_QUEUE_EMPTY, _T("S_VISA_QUEUE_EMPTY"),
		S_VISA_TERM_CHAR, _T("S_VISA_TERM_CHAR"),
		S_VISA_MAX_CNT, _T("S_VISA_MAX_CNT"),
		S_VISA_DEV_NPRESENT, _T("S_VISA_DEV_NPRESENT"),
		S_VISA_QUEUE_NEMPTY, _T("S_VISA_QUEUE_NEMPTY"),
		S_VISA_TRIG_MAPPED, _T("S_VISA_TRIG_MAPPED"),
		S_VISA_NCHAIN, _T("S_VISA_NCHAIN"),
		S_VISA_NESTED_SHARED, _T("S_VISA_NESTED_SHARED"),
		S_VISA_NESTED_EXCLUSIVE, _T("S_VISA_NESTED_EXCLUSIVE"),
		S_VISA_SYNC, _T("S_VISA_SYNC"),
		S_VISA_QUEUE_OVERFLOW, _T("S_VISA_QUEUE_OVERFLOW"),
		S_VISA_CONFIG_NLOADED, _T("S_VISA_CONFIG_NLOADED"),
		S_VISA_NULL_OBJECT, _T("S_VISA_NULL_OBJECT"),
		S_VISA_NSUP_ATTR_STATE, _T("S_VISA_NSUP_ATTR_STATE"),
		S_VISA_UNKNOWN_STATUS, _T("S_VISA_UNKNOWN_STATUS"),
		S_VISA_NSUP_BUF, _T("S_VISA_NSUP_BUF"),
		S_VISA_EXT_FUNC_NIMPL, _T("S_VISA_EXT_FUNC_NIMPL"),
		E_VISA_SYSTEM_ERROR, _T("E_VISA_SYSTEM_ERROR"),
		E_VISA_INV_OBJECT, _T("E_VISA_INV_OBJECT"),
		E_VISA_RSRC_LOCKED, _T("E_VISA_RSRC_LOCKED"),
		E_VISA_INV_EXPR, _T("E_VISA_INV_EXPR"),
		E_VISA_RSRC_NFOUND, _T("E_VISA_RSRC_NFOUND"),
		E_VISA_INV_RSRC_NAME, _T("E_VISA_INV_RSRC_NAME"),
		E_VISA_INV_ACC_MODE, _T("E_VISA_INV_ACC_MODE"),
		E_VISA_TMO, _T("E_VISA_TMO"),
		E_VISA_CLOSING_FAILED, _T("E_VISA_CLOSING_FAILED"),
		E_VISA_INV_DEGREE, _T("E_VISA_INV_DEGREE"),
		E_VISA_INV_JOB_ID, _T("E_VISA_INV_JOB_ID"),
		E_VISA_NSUP_ATTR, _T("E_VISA_NSUP_ATTR"),
		E_VISA_NSUP_ATTR_STATE, _T("E_VISA_NSUP_ATTR_STATE"),
		E_VISA_ATTR_READONLY, _T("E_VISA_ATTR_READONLY"),
		E_VISA_INV_LOCK_TYPE, _T("E_VISA_INV_LOCK_TYPE"),
		E_VISA_INV_ACCESS_KEY, _T("E_VISA_INV_ACCESS_KEY"),
		E_VISA_INV_EVENT, _T("E_VISA_INV_EVENT"),
		E_VISA_INV_MECH, _T("E_VISA_INV_MECH"),
		E_VISA_HNDLR_NINSTALLED, _T("E_VISA_HNDLR_NINSTALLED"),
		E_VISA_INV_HNDLR_REF, _T("E_VISA_INV_HNDLR_REF"),
		E_VISA_INV_CONTEXT, _T("E_VISA_INV_CONTEXT"),
		E_VISA_QUEUE_OVERFLOW, _T("E_VISA_QUEUE_OVERFLOW"),
		E_VISA_NENABLED, _T("E_VISA_NENABLED"),
		E_VISA_ABORT, _T("E_VISA_ABORT"),
		E_VISA_RAW_WR_PROT_VIOL, _T("E_VISA_RAW_WR_PROT_VIOL"),
		E_VISA_RAW_RD_PROT_VIOL, _T("E_VISA_RAW_RD_PROT_VIOL"),
		E_VISA_OUTP_PROT_VIOL, _T("E_VISA_OUTP_PROT_VIOL"),
		E_VISA_INP_PROT_VIOL, _T("E_VISA_INP_PROT_VIOL"),
		E_VISA_BERR, _T("E_VISA_BERR"),
		E_VISA_IN_PROGRESS, _T("E_VISA_IN_PROGRESS"),
		E_VISA_INV_SETUP, _T("E_VISA_INV_SETUP"),
		E_VISA_QUEUE_ERROR, _T("E_VISA_QUEUE_ERROR"),
		E_VISA_ALLOC, _T("E_VISA_ALLOC"),
		E_VISA_INV_MASK, _T("E_VISA_INV_MASK"),
		E_VISA_IO, _T("E_VISA_IO"),
		E_VISA_INV_FMT, _T("E_VISA_INV_FMT"),
		E_VISA_NSUP_FMT, _T("E_VISA_NSUP_FMT"),
		E_VISA_LINE_IN_USE, _T("E_VISA_LINE_IN_USE"),
		E_VISA_NSUP_MODE, _T("E_VISA_NSUP_MODE"),
		E_VISA_SRQ_NOCCURRED, _T("E_VISA_SRQ_NOCCURRED"),
		E_VISA_INV_SPACE, _T("E_VISA_INV_SPACE"),
		E_VISA_INV_OFFSET, _T("E_VISA_INV_OFFSET"),
		E_VISA_INV_WIDTH, _T("E_VISA_INV_WIDTH"),
		E_VISA_NSUP_OFFSET, _T("E_VISA_NSUP_OFFSET"),
		E_VISA_NSUP_VAR_WIDTH, _T("E_VISA_NSUP_VAR_WIDTH"),
		E_VISA_WINDOW_NMAPPED, _T("E_VISA_WINDOW_NMAPPED"),
		E_VISA_RESP_PENDING, _T("E_VISA_RESP_PENDING"),
		E_VISA_NLISTENERS, _T("E_VISA_NLISTENERS"),
		E_VISA_NCIC, _T("E_VISA_NCIC"),
		E_VISA_NSYS_CNTLR, _T("E_VISA_NSYS_CNTLR"),
		E_VISA_NSUP_OPER, _T("E_VISA_NSUP_OPER"),
		E_VISA_INTR_PENDING, _T("E_VISA_INTR_PENDING"),
		E_VISA_ASRL_PARITY, _T("E_VISA_ASRL_PARITY"),
		E_VISA_ASRL_FRAMING, _T("E_VISA_ASRL_FRAMING"),
		E_VISA_ASRL_OVERRUN, _T("E_VISA_ASRL_OVERRUN"),
		E_VISA_TRIG_NMAPPED, _T("E_VISA_TRIG_NMAPPED"),
		E_VISA_NSUP_ALIGN_OFFSET, _T("E_VISA_NSUP_ALIGN_OFFSET"),
		E_VISA_USER_BUF, _T("E_VISA_USER_BUF"),
		E_VISA_RSRC_BUSY, _T("E_VISA_RSRC_BUSY"),
		E_VISA_NSUP_WIDTH, _T("E_VISA_NSUP_WIDTH"),
		E_VISA_INV_PARAMETER, _T("E_VISA_INV_PARAMETER"),
		E_VISA_INV_PROT, _T("E_VISA_INV_PROT"),
		E_VISA_INV_SIZE, _T("E_VISA_INV_SIZE"),
		E_VISA_WINDOW_MAPPED, _T("E_VISA_WINDOW_MAPPED"),
		E_VISA_NIMPL_OPER, _T("E_VISA_NIMPL_OPER"),
		E_VISA_INV_LENGTH, _T("E_VISA_INV_LENGTH"),
		E_VISA_INV_MODE, _T("E_VISA_INV_MODE"),
		E_VISA_SESN_NLOCKED, _T("E_VISA_SESN_NLOCKED"),
		E_VISA_MEM_NSHARED, _T("E_VISA_MEM_NSHARED"),
		E_VISA_LIBRARY_NFOUND, _T("E_VISA_LIBRARY_NFOUND"),
		E_VISA_NSUP_INTR, _T("E_VISA_NSUP_INTR"),
		E_VISA_INV_LINE, _T("E_VISA_INV_LINE"),
		E_VISA_FILE_ACCESS, _T("E_VISA_FILE_ACCESS"),
		E_VISA_FILE_IO, _T("E_VISA_FILE_IO"),
		E_VISA_NSUP_LINE, _T("E_VISA_NSUP_LINE"),
		E_VISA_NSUP_MECH, _T("E_VISA_NSUP_MECH"),
		E_VISA_INTF_NUM_NCONFIG, _T("E_VISA_INTF_NUM_NCONFIG"),
		E_VISA_CONN_LOST, _T("E_VISA_CONN_LOST"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<EventType>* GetEnumNameConverter<EventType>()
{
	static CEnumNameConverter<EventType> _converter(
		EVENT_IO_COMPLETION, _T("EVENT_IO_COMPLETION"),
		EVENT_TRIG, _T("EVENT_TRIG"),
		EVENT_SERVICE_REQ, _T("EVENT_SERVICE_REQ"),
		EVENT_CLEAR, _T("EVENT_CLEAR"),
		EVENT_EXCEPTION, _T("EVENT_EXCEPTION"),
		EVENT_GPIB_CIC, _T("EVENT_GPIB_CIC"),
		EVENT_GPIB_TALK, _T("EVENT_GPIB_TALK"),
		EVENT_GPIB_LISTEN, _T("EVENT_GPIB_LISTEN"),
		EVENT_VXI_VME_SYSFAIL, _T("EVENT_VXI_VME_SYSFAIL"),
		EVENT_VXI_VME_SYSRESET, _T("EVENT_VXI_VME_SYSRESET"),
		EVENT_VXI_SIGP, _T("EVENT_VXI_SIGP"),
		EVENT_VXI_VME_INTR, _T("EVENT_VXI_VME_INTR"),
		EVENT_TCPIP_CONNECT, _T("EVENT_TCPIP_CONNECT"),
		EVENT_USB_INTR, _T("EVENT_USB_INTR"),
		ALL_ENABLED_EVENTS, _T("ALL_ENABLED_EVENTS"),
		CUSTOM_EVENT_TYPE, _T("CUSTOM_EVENT_TYPE"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<HardwareInterfaceType>* GetEnumNameConverter<HardwareInterfaceType>()
{
	static CEnumNameConverter<HardwareInterfaceType> _converter(
		INTF_GPIB, _T("INTF_GPIB"),
		INTF_VXI, _T("INTF_VXI"),
		INTF_GPIB_VXI, _T("INTF_GPIB_VXI"),
		INTF_ASRL, _T("INTF_ASRL"),
		INTF_TCPIP, _T("INTF_TCPIP"),
		INTF_USB, _T("INTF_USB"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IOProtocol>* GetEnumNameConverter<IOProtocol>()
{
	static CEnumNameConverter<IOProtocol> _converter(
		PROT_NORMAL, _T("PROT_NORMAL"),
		PROT_FDC, _T("PROT_FDC"),
		PROT_HS488, _T("PROT_HS488"),
		PROT_4882_STRS, _T("PROT_4882_STRS"),
		PROT_USBTMC_VENDOR, _T("PROT_USBTMC_VENDOR"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<FDCMode>* GetEnumNameConverter<FDCMode>()
{
	static CEnumNameConverter<FDCMode> _converter(
		FDC_NORMAL, _T("FDC_NORMAL"),
		FDC_STREAM, _T("FDC_STREAM"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<AddressSpace>* GetEnumNameConverter<AddressSpace>()
{
	static CEnumNameConverter<AddressSpace> _converter(
		LOCAL_SPACE, _T("LOCAL_SPACE"),
		VXI_A16_SPACE, _T("VXI_A16_SPACE"),
		VXI_A24_SPACE, _T("VXI_A24_SPACE"),
		VXI_A32_SPACE, _T("VXI_A32_SPACE"),
		OPAQUE_SPACE, _T("OPAQUE_SPACE"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<EventMechanism>* GetEnumNameConverter<EventMechanism>()
{
	static CEnumNameConverter<EventMechanism> _converter(
		EVENT_QUEUE, _T("EVENT_QUEUE"),
		EVENT_HNDLR, _T("EVENT_HNDLR"),
		EVENT_SUSPEND_HNDLR, _T("EVENT_SUSPEND_HNDLR"),
		EVENT_ALL_MECH, _T("EVENT_ALL_MECH"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<TriggerLine>* GetEnumNameConverter<TriggerLine>()
{
	static CEnumNameConverter<TriggerLine> _converter(
		TRIG_ALL, _T("TRIG_ALL"),
		TRIG_SW, _T("TRIG_SW"),
		TRIG_TTL0, _T("TRIG_TTL0"),
		TRIG_TTL1, _T("TRIG_TTL1"),
		TRIG_TTL2, _T("TRIG_TTL2"),
		TRIG_TTL3, _T("TRIG_TTL3"),
		TRIG_TTL4, _T("TRIG_TTL4"),
		TRIG_TTL5, _T("TRIG_TTL5"),
		TRIG_TTL6, _T("TRIG_TTL6"),
		TRIG_TTL7, _T("TRIG_TTL7"),
		TRIG_ECL0, _T("TRIG_ECL0"),
		TRIG_ECL1, _T("TRIG_ECL1"),
		TRIG_PANEL_IN, _T("TRIG_PANEL_IN"),
		TRIG_PANEL_OUT, _T("TRIG_PANEL_OUT"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<TriggerProtocol>* GetEnumNameConverter<TriggerProtocol>()
{
	static CEnumNameConverter<TriggerProtocol> _converter(
		TRIG_PROT_DEFAULT, _T("TRIG_PROT_DEFAULT"),
		TRIG_PROT_ON, _T("TRIG_PROT_ON"),
		TRIG_PROT_OFF, _T("TRIG_PROT_OFF"),
		TRIG_PROT_SYNC, _T("TRIG_PROT_SYNC"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<BufferMask>* GetEnumNameConverter<BufferMask>()
{
	static CEnumNameConverter<BufferMask> _converter(
		IO_IN_BUF, _T("IO_IN_BUF"),
		IO_OUT_BUF, _T("IO_OUT_BUF"),
		IO_IN_AND_OUT_BUFS, _T("IO_IN_AND_OUT_BUFS"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Timeout>* GetEnumNameConverter<Timeout>()
{
	static CEnumNameConverter<Timeout> _converter(
		TMO_IMMEDIATE, _T("TMO_IMMEDIATE"),
		TMO_INFINITE, _T("TMO_INFINITE"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<AccessMode>* GetEnumNameConverter<AccessMode>()
{
	static CEnumNameConverter<AccessMode> _converter(
		NO_LOCK, _T("NO_LOCK"),
		EXCLUSIVE_LOCK, _T("EXCLUSIVE_LOCK"),
		SHARED_LOCK, _T("SHARED_LOCK"),
		LOAD_CONFIG, _T("LOAD_CONFIG"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<SerialParity>* GetEnumNameConverter<SerialParity>()
{
	static CEnumNameConverter<SerialParity> _converter(
		ASRL_PAR_NONE, _T("ASRL_PAR_NONE"),
		ASRL_PAR_ODD, _T("ASRL_PAR_ODD"),
		ASRL_PAR_EVEN, _T("ASRL_PAR_EVEN"),
		ASRL_PAR_MARK, _T("ASRL_PAR_MARK"),
		ASRL_PAR_SPACE, _T("ASRL_PAR_SPACE"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<SerialStopBits>* GetEnumNameConverter<SerialStopBits>()
{
	static CEnumNameConverter<SerialStopBits> _converter(
		ASRL_STOP_ONE, _T("ASRL_STOP_ONE"),
		ASRL_STOP_ONE5, _T("ASRL_STOP_ONE5"),
		ASRL_STOP_TWO, _T("ASRL_STOP_TWO"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<SerialFlowControl>* GetEnumNameConverter<SerialFlowControl>()
{
	static CEnumNameConverter<SerialFlowControl> _converter(
		ASRL_FLOW_NONE, _T("ASRL_FLOW_NONE"),
		ASRL_FLOW_XON_XOFF, _T("ASRL_FLOW_XON_XOFF"),
		ASRL_FLOW_RTS_CTS, _T("ASRL_FLOW_RTS_CTS"),
		ASRL_FLOW_DTR_DSR, _T("ASRL_FLOW_DTR_DSR"),
		ASRL_FLOW_RTS_CTS_AND_XON_XOFF, _T("ASRL_FLOW_RTS_CTS_AND_XON_XOFF"),
		ASRL_FLOW_DTR_DSR_AND_XON_XOFF, _T("ASRL_FLOW_DTR_DSR_AND_XON_XOFF"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<SerialEndConst>* GetEnumNameConverter<SerialEndConst>()
{
	static CEnumNameConverter<SerialEndConst> _converter(
		ASRL_END_NONE, _T("ASRL_END_NONE"),
		ASRL_END_LAST_BIT, _T("ASRL_END_LAST_BIT"),
		ASRL_END_TERMCHAR, _T("ASRL_END_TERMCHAR"),
		ASRL_END_BREAK, _T("ASRL_END_BREAK"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<LineState>* GetEnumNameConverter<LineState>()
{
	static CEnumNameConverter<LineState> _converter(
		STATE_ASSERTED, _T("STATE_ASSERTED"),
		STATE_UNASSERTED, _T("STATE_UNASSERTED"),
		STATE_UNKNOWN, _T("STATE_UNKNOWN"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<VXIMemoryAccessPrivilege>* GetEnumNameConverter<VXIMemoryAccessPrivilege>()
{
	static CEnumNameConverter<VXIMemoryAccessPrivilege> _converter(
		DATA_PRIV, _T("DATA_PRIV"),
		DATA_NPRIV, _T("DATA_NPRIV"),
		PROG_PRIV, _T("PROG_PRIV"),
		PROG_NPRIV, _T("PROG_NPRIV"),
		BLCK_PRIV, _T("BLCK_PRIV"),
		BLCK_NPRIV, _T("BLCK_NPRIV"),
		D64_PRIV, _T("D64_PRIV"),
		D64_NPRIV, _T("D64_NPRIV"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<DataWidth>* GetEnumNameConverter<DataWidth>()
{
	static CEnumNameConverter<DataWidth> _converter(
		WIDTH_8, _T("WIDTH_8"),
		WIDTH_16, _T("WIDTH_16"),
		WIDTH_32, _T("WIDTH_32"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<RENControlConst>* GetEnumNameConverter<RENControlConst>()
{
	static CEnumNameConverter<RENControlConst> _converter(
		GPIB_REN_DEASSERT, _T("GPIB_REN_DEASSERT"),
		GPIB_REN_ASSERT, _T("GPIB_REN_ASSERT"),
		GPIB_REN_GTL_AND_DEASSERT, _T("GPIB_REN_GTL_AND_DEASSERT"),
		GPIB_REN_ASSERT_AND_ADDRESS, _T("GPIB_REN_ASSERT_AND_ADDRESS"),
		GPIB_REN_LLO, _T("GPIB_REN_LLO"),
		GPIB_REN_ADDRESS_AND_LLO, _T("GPIB_REN_ADDRESS_AND_LLO"),
		GPIB_REN_GTL, _T("GPIB_REN_GTL"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<ATNControlConst>* GetEnumNameConverter<ATNControlConst>()
{
	static CEnumNameConverter<ATNControlConst> _converter(
		GPIB_ATN_DEASSERT, _T("GPIB_ATN_DEASSERT"),
		GPIB_ATN_ASSERT, _T("GPIB_ATN_ASSERT"),
		GPIB_ATN_DEASSERT_HANDSHAKE, _T("GPIB_ATN_DEASSERT_HANDSHAKE"),
		GPIB_ATN_ASSERT_IMMEDIATE, _T("GPIB_ATN_ASSERT_IMMEDIATE"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<GPIBAddressState>* GetEnumNameConverter<GPIBAddressState>()
{
	static CEnumNameConverter<GPIBAddressState> _converter(
		GPIB_UNADDRESSED, _T("GPIB_UNADDRESSED"),
		GPIB_TALKER, _T("GPIB_TALKER"),
		GPIB_LISTENER, _T("GPIB_LISTENER"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<VXICommandQuery>* GetEnumNameConverter<VXICommandQuery>()
{
	static CEnumNameConverter<VXICommandQuery> _converter(
		VXI_CMD16, _T("VXI_CMD16"),
		VXI_CMD16_RESP16, _T("VXI_CMD16_RESP16"),
		VXI_RESP16, _T("VXI_RESP16"),
		VXI_CMD32, _T("VXI_CMD32"),
		VXI_CMD32_RESP16, _T("VXI_CMD32_RESP16"),
		VXI_CMD32_RESP32, _T("VXI_CMD32_RESP32"),
		VXI_RESP32, _T("VXI_RESP32"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<AssertInterruptConst>* GetEnumNameConverter<AssertInterruptConst>()
{
	static CEnumNameConverter<AssertInterruptConst> _converter(
		ASSERT_SIGNAL, _T("ASSERT_SIGNAL"),
		ASSERT_USE_ASSIGNED, _T("ASSERT_USE_ASSIGNED"),
		ASSERT_IRQ1, _T("ASSERT_IRQ1"),
		ASSERT_IRQ2, _T("ASSERT_IRQ2"),
		ASSERT_IRQ3, _T("ASSERT_IRQ3"),
		ASSERT_IRQ4, _T("ASSERT_IRQ4"),
		ASSERT_IRQ5, _T("ASSERT_IRQ5"),
		ASSERT_IRQ6, _T("ASSERT_IRQ6"),
		ASSERT_IRQ7, _T("ASSERT_IRQ7"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<AssertUtilityConst>* GetEnumNameConverter<AssertUtilityConst>()
{
	static CEnumNameConverter<AssertUtilityConst> _converter(
		ASSERT_SYSRESET, _T("ASSERT_SYSRESET"),
		ASSERT_SYSFAIL, _T("ASSERT_SYSFAIL"),
		DEASSERT_SYSFAIL, _T("DEASSERT_SYSFAIL"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<VXIDevClass>* GetEnumNameConverter<VXIDevClass>()
{
	static CEnumNameConverter<VXIDevClass> _converter(
		VXI_CLASS_MEMORY, _T("VXI_CLASS_MEMORY"),
		VXI_CLASS_EXTENDED, _T("VXI_CLASS_EXTENDED"),
		VXI_CLASS_MESSAGE, _T("VXI_CLASS_MESSAGE"),
		VXI_CLASS_REGISTER, _T("VXI_CLASS_REGISTER"),
		VXI_CLASS_OTHER, _T("VXI_CLASS_OTHER"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<PXIMemType>* GetEnumNameConverter<PXIMemType>()
{
	static CEnumNameConverter<PXIMemType> _converter(
		PXI_ADDR_NONE, _T("PXI_ADDR_NONE"),
		PXI_ADDR_MEM, _T("PXI_ADDR_MEM"),
		PXI_ADDR_IO, _T("PXI_ADDR_IO"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IEEEASCIIType>* GetEnumNameConverter<IEEEASCIIType>()
{
	static CEnumNameConverter<IEEEASCIIType> _converter(
		ASCIIType_I2, _T("ASCIIType_I2"),
		ASCIIType_I4, _T("ASCIIType_I4"),
		ASCIIType_R4, _T("ASCIIType_R4"),
		ASCIIType_R8, _T("ASCIIType_R8"),
		ASCIIType_BSTR, _T("ASCIIType_BSTR"),
		ASCIIType_Any, _T("ASCIIType_Any"),
		ASCIIType_UI1, _T("ASCIIType_UI1"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IEEEBinaryType>* GetEnumNameConverter<IEEEBinaryType>()
{
	static CEnumNameConverter<IEEEBinaryType> _converter(
		BinaryType_I2, _T("BinaryType_I2"),
		BinaryType_I4, _T("BinaryType_I4"),
		BinaryType_R4, _T("BinaryType_R4"),
		BinaryType_R8, _T("BinaryType_R8"),
		BinaryType_UI1, _T("BinaryType_UI1"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<ConflictHandlerType>* GetEnumNameConverter<ConflictHandlerType>()
{
	static CEnumNameConverter<ConflictHandlerType> _converter(
		NotChosen, _T("NotChosen"),
		ChosenByResourceManager, _T("ChosenByResourceManager"),
		ChosenByUser, _T("ChosenByUser"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviDmmFunctionEnum>* GetEnumNameConverter<IviDmmFunctionEnum>()
{
	static CEnumNameConverter<IviDmmFunctionEnum> _converter(
		IviDmmFunctionDCVolts, _T("IviDmmFunctionDCVolts"),
		IviDmmFunctionACVolts, _T("IviDmmFunctionACVolts"),
		IviDmmFunctionDCCurrent, _T("IviDmmFunctionDCCurrent"),
		IviDmmFunctionACCurrent, _T("IviDmmFunctionACCurrent"),
		IviDmmFunction2WireRes, _T("IviDmmFunction2WireRes"),
		IviDmmFunction4WireRes, _T("IviDmmFunction4WireRes"),
		IviDmmFunctionACPlusDCVolts, _T("IviDmmFunctionACPlusDCVolts"),
		IviDmmFunctionACPlusDCCurrent, _T("IviDmmFunctionACPlusDCCurrent"),
		IviDmmFunctionFreq, _T("IviDmmFunctionFreq"),
		IviDmmFunctionPeriod, _T("IviDmmFunctionPeriod"),
		IviDmmFunctionTemperature, _T("IviDmmFunctionTemperature"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviDmmApertureTimeUnitsEnum>* GetEnumNameConverter<IviDmmApertureTimeUnitsEnum>()
{
	static CEnumNameConverter<IviDmmApertureTimeUnitsEnum> _converter(
		IviDmmApertureSeconds, _T("IviDmmApertureSeconds"),
		IviDmmAperturePowerLineCycles, _T("IviDmmAperturePowerLineCycles"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviDmmAutoZeroEnum>* GetEnumNameConverter<IviDmmAutoZeroEnum>()
{
	static CEnumNameConverter<IviDmmAutoZeroEnum> _converter(
		IviDmmAutoZeroOff, _T("IviDmmAutoZeroOff"),
		IviDmmAutoZeroOn, _T("IviDmmAutoZeroOn"),
		IviDmmAutoZeroOnce, _T("IviDmmAutoZeroOnce"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviDmmTransducerTypeEnum>* GetEnumNameConverter<IviDmmTransducerTypeEnum>()
{
	static CEnumNameConverter<IviDmmTransducerTypeEnum> _converter(
		IviDmmTransducerTypeThermocouple, _T("IviDmmTransducerTypeThermocouple"),
		IviDmmTransducerTypeThermistor, _T("IviDmmTransducerTypeThermistor"),
		IviDmmTransducerType2WireRtd, _T("IviDmmTransducerType2WireRtd"),
		IviDmmTransducerType4WireRtd, _T("IviDmmTransducerType4WireRtd"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviDmmThermocoupleTypeEnum>* GetEnumNameConverter<IviDmmThermocoupleTypeEnum>()
{
	static CEnumNameConverter<IviDmmThermocoupleTypeEnum> _converter(
		IviDmmThermocoupleTypeB, _T("IviDmmThermocoupleTypeB"),
		IviDmmThermocoupleTypeC, _T("IviDmmThermocoupleTypeC"),
		IviDmmThermocoupleTypeD, _T("IviDmmThermocoupleTypeD"),
		IviDmmThermocoupleTypeE, _T("IviDmmThermocoupleTypeE"),
		IviDmmThermocoupleTypeG, _T("IviDmmThermocoupleTypeG"),
		IviDmmThermocoupleTypeJ, _T("IviDmmThermocoupleTypeJ"),
		IviDmmThermocoupleTypeK, _T("IviDmmThermocoupleTypeK"),
		IviDmmThermocoupleTypeN, _T("IviDmmThermocoupleTypeN"),
		IviDmmThermocoupleTypeR, _T("IviDmmThermocoupleTypeR"),
		IviDmmThermocoupleTypeS, _T("IviDmmThermocoupleTypeS"),
		IviDmmThermocoupleTypeT, _T("IviDmmThermocoupleTypeT"),
		IviDmmThermocoupleTypeU, _T("IviDmmThermocoupleTypeU"),
		IviDmmThermocoupleTypeV, _T("IviDmmThermocoupleTypeV"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviDmmRefJunctionTypeEnum>* GetEnumNameConverter<IviDmmRefJunctionTypeEnum>()
{
	static CEnumNameConverter<IviDmmRefJunctionTypeEnum> _converter(
		IviDmmRefJunctionTypeInternal, _T("IviDmmRefJunctionTypeInternal"),
		IviDmmRefJunctionTypeFixed, _T("IviDmmRefJunctionTypeFixed"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviDmmTriggerSourceEnum>* GetEnumNameConverter<IviDmmTriggerSourceEnum>()
{
	static CEnumNameConverter<IviDmmTriggerSourceEnum> _converter(
		IviDmmTriggerSourceImmediate, _T("IviDmmTriggerSourceImmediate"),
		IviDmmTriggerSourceExternal, _T("IviDmmTriggerSourceExternal"),
		IviDmmTriggerSourceSwTrigFunc, _T("IviDmmTriggerSourceSwTrigFunc"),
		IviDmmTriggerSourceTTL0, _T("IviDmmTriggerSourceTTL0"),
		IviDmmTriggerSourceTTL1, _T("IviDmmTriggerSourceTTL1"),
		IviDmmTriggerSourceTTL2, _T("IviDmmTriggerSourceTTL2"),
		IviDmmTriggerSourceTTL3, _T("IviDmmTriggerSourceTTL3"),
		IviDmmTriggerSourceTTL4, _T("IviDmmTriggerSourceTTL4"),
		IviDmmTriggerSourceTTL5, _T("IviDmmTriggerSourceTTL5"),
		IviDmmTriggerSourceTTL6, _T("IviDmmTriggerSourceTTL6"),
		IviDmmTriggerSourceTTL7, _T("IviDmmTriggerSourceTTL7"),
		IviDmmTriggerSourceECL0, _T("IviDmmTriggerSourceECL0"),
		IviDmmTriggerSourceECL1, _T("IviDmmTriggerSourceECL1"),
		IviDmmTriggerSourcePXIStar, _T("IviDmmTriggerSourcePXIStar"),
		IviDmmTriggerSourceRTSI0, _T("IviDmmTriggerSourceRTSI0"),
		IviDmmTriggerSourceRTSI1, _T("IviDmmTriggerSourceRTSI1"),
		IviDmmTriggerSourceRTSI2, _T("IviDmmTriggerSourceRTSI2"),
		IviDmmTriggerSourceRTSI3, _T("IviDmmTriggerSourceRTSI3"),
		IviDmmTriggerSourceRTSI4, _T("IviDmmTriggerSourceRTSI4"),
		IviDmmTriggerSourceRTSI5, _T("IviDmmTriggerSourceRTSI5"),
		IviDmmTriggerSourceRTSI6, _T("IviDmmTriggerSourceRTSI6"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviDmmTriggerSlopeEnum>* GetEnumNameConverter<IviDmmTriggerSlopeEnum>()
{
	static CEnumNameConverter<IviDmmTriggerSlopeEnum> _converter(
		IviDmmTriggerSlopePositive, _T("IviDmmTriggerSlopePositive"),
		IviDmmTriggerSlopeNegative, _T("IviDmmTriggerSlopeNegative"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviDmmSampleTriggerEnum>* GetEnumNameConverter<IviDmmSampleTriggerEnum>()
{
	static CEnumNameConverter<IviDmmSampleTriggerEnum> _converter(
		IviDmmSampleTriggerImmediate, _T("IviDmmSampleTriggerImmediate"),
		IviDmmSampleTriggerExternal, _T("IviDmmSampleTriggerExternal"),
		IviDmmSampleTriggerSwTrigFunc, _T("IviDmmSampleTriggerSwTrigFunc"),
		IviDmmSampleTriggerTTL0, _T("IviDmmSampleTriggerTTL0"),
		IviDmmSampleTriggerTTL1, _T("IviDmmSampleTriggerTTL1"),
		IviDmmSampleTriggerTTL2, _T("IviDmmSampleTriggerTTL2"),
		IviDmmSampleTriggerTTL3, _T("IviDmmSampleTriggerTTL3"),
		IviDmmSampleTriggerTTL4, _T("IviDmmSampleTriggerTTL4"),
		IviDmmSampleTriggerTTL5, _T("IviDmmSampleTriggerTTL5"),
		IviDmmSampleTriggerTTL6, _T("IviDmmSampleTriggerTTL6"),
		IviDmmSampleTriggerTTL7, _T("IviDmmSampleTriggerTTL7"),
		IviDmmSampleTriggerECL0, _T("IviDmmSampleTriggerECL0"),
		IviDmmSampleTriggerECL1, _T("IviDmmSampleTriggerECL1"),
		IviDmmSampleTriggerPXIStar, _T("IviDmmSampleTriggerPXIStar"),
		IviDmmSampleTriggerRTSI0, _T("IviDmmSampleTriggerRTSI0"),
		IviDmmSampleTriggerRTSI1, _T("IviDmmSampleTriggerRTSI1"),
		IviDmmSampleTriggerRTSI2, _T("IviDmmSampleTriggerRTSI2"),
		IviDmmSampleTriggerRTSI3, _T("IviDmmSampleTriggerRTSI3"),
		IviDmmSampleTriggerRTSI4, _T("IviDmmSampleTriggerRTSI4"),
		IviDmmSampleTriggerRTSI5, _T("IviDmmSampleTriggerRTSI5"),
		IviDmmSampleTriggerRTSI6, _T("IviDmmSampleTriggerRTSI6"),
		IviDmmSampleTriggerInterval, _T("IviDmmSampleTriggerInterval"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviDmmMeasCompleteDestEnum>* GetEnumNameConverter<IviDmmMeasCompleteDestEnum>()
{
	static CEnumNameConverter<IviDmmMeasCompleteDestEnum> _converter(
		IviDmmMeasCompleteDestNone, _T("IviDmmMeasCompleteDestNone"),
		IviDmmMeasCompleteDestExternal, _T("IviDmmMeasCompleteDestExternal"),
		IviDmmMeasCompleteDestTTL0, _T("IviDmmMeasCompleteDestTTL0"),
		IviDmmMeasCompleteDestTTL1, _T("IviDmmMeasCompleteDestTTL1"),
		IviDmmMeasCompleteDestTTL2, _T("IviDmmMeasCompleteDestTTL2"),
		IviDmmMeasCompleteDestTTL3, _T("IviDmmMeasCompleteDestTTL3"),
		IviDmmMeasCompleteDestTTL4, _T("IviDmmMeasCompleteDestTTL4"),
		IviDmmMeasCompleteDestTTL5, _T("IviDmmMeasCompleteDestTTL5"),
		IviDmmMeasCompleteDestTTL6, _T("IviDmmMeasCompleteDestTTL6"),
		IviDmmMeasCompleteDestTTL7, _T("IviDmmMeasCompleteDestTTL7"),
		IviDmmMeasCompleteDestECL0, _T("IviDmmMeasCompleteDestECL0"),
		IviDmmMeasCompleteDestECL1, _T("IviDmmMeasCompleteDestECL1"),
		IviDmmMeasCompleteDestPXIStar, _T("IviDmmMeasCompleteDestPXIStar"),
		IviDmmMeasCompleteDestRTSI0, _T("IviDmmMeasCompleteDestRTSI0"),
		IviDmmMeasCompleteDestRTSI1, _T("IviDmmMeasCompleteDestRTSI1"),
		IviDmmMeasCompleteDestRTSI2, _T("IviDmmMeasCompleteDestRTSI2"),
		IviDmmMeasCompleteDestRTSI3, _T("IviDmmMeasCompleteDestRTSI3"),
		IviDmmMeasCompleteDestRTSI4, _T("IviDmmMeasCompleteDestRTSI4"),
		IviDmmMeasCompleteDestRTSI5, _T("IviDmmMeasCompleteDestRTSI5"),
		IviDmmMeasCompleteDestRTSI6, _T("IviDmmMeasCompleteDestRTSI6"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviDmmAutoRangeEnum>* GetEnumNameConverter<IviDmmAutoRangeEnum>()
{
	static CEnumNameConverter<IviDmmAutoRangeEnum> _converter(
		IviDmmAutoRangeOn, _T("IviDmmAutoRangeOn"),
		IviDmmAutoRangeOff, _T("IviDmmAutoRangeOff"),
		IviDmmAutoRangeOnce, _T("IviDmmAutoRangeOnce"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviDmmFrequencyVoltageRangeEnum>* GetEnumNameConverter<IviDmmFrequencyVoltageRangeEnum>()
{
	static CEnumNameConverter<IviDmmFrequencyVoltageRangeEnum> _converter(
		IviDmmFrequencyVoltageRangeAutoRangeOn, _T("IviDmmFrequencyVoltageRangeAutoRangeOn"),
		IviDmmFrequencyVoltageRangeAutoRangeOff, _T("IviDmmFrequencyVoltageRangeAutoRangeOff"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviDmmMaxTimeEnum>* GetEnumNameConverter<IviDmmMaxTimeEnum>()
{
	static CEnumNameConverter<IviDmmMaxTimeEnum> _converter(
		IviDmmMaxTimeInfinite, _T("IviDmmMaxTimeInfinite"),
		IviDmmMaxTimeImmediate, _T("IviDmmMaxTimeImmediate"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviDmmTriggerDelayEnum>* GetEnumNameConverter<IviDmmTriggerDelayEnum>()
{
	static CEnumNameConverter<IviDmmTriggerDelayEnum> _converter(
		IviDmmTriggerDelayAutoDelayOn, _T("IviDmmTriggerDelayAutoDelayOn"),
		IviDmmTriggerDelayAutoDelayOff, _T("IviDmmTriggerDelayAutoDelayOff"),
		-1, NULL);

	return &_converter;
}

