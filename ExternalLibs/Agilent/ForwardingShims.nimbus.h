/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#pragma once

class Agilent34401;

typedef CDriver DriverBase;

class ForwardingShimImpl
{
public:
	static HRESULT IIviDriver_Initialize(Agilent34401* pT, BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString);
	static HRESULT IIviDriver_Close(Agilent34401* pT);
	static HRESULT IIviDriver_get_DriverOperation(Agilent34401* pT, IIviDriverOperation** val);
	static HRESULT IIviDriver_get_Identity(Agilent34401* pT, IIviDriverIdentity** val);
	static HRESULT IIviDriver_get_Utility(Agilent34401* pT, IIviDriverUtility** val);
	static HRESULT IIviDriver_get_Initialized(Agilent34401* pT, VARIANT_BOOL* val);
	static HRESULT IIviDriverOperation_InvalidateAllAttributes(Agilent34401* pT);
	static HRESULT IIviDriverOperation_ClearInterchangeWarnings(Agilent34401* pT);
	static HRESULT IIviDriverOperation_GetNextInterchangeWarning(Agilent34401* pT, BSTR* val);
	static HRESULT IIviDriverOperation_ResetInterchangeCheck(Agilent34401* pT);
	static HRESULT IIviDriverOperation_GetNextCoercionRecord(Agilent34401* pT, BSTR* val);
	static HRESULT IIviDriverOperation_get_LogicalName(Agilent34401* pT, BSTR* val);
	static HRESULT IIviDriverOperation_get_IoResourceDescriptor(Agilent34401* pT, BSTR* val);
	static HRESULT IIviDriverOperation_get_Cache(Agilent34401* pT, VARIANT_BOOL* val);
	static HRESULT IIviDriverOperation_put_Cache(Agilent34401* pT, VARIANT_BOOL val);
	static HRESULT IIviDriverOperation_get_InterchangeCheck(Agilent34401* pT, VARIANT_BOOL* val);
	static HRESULT IIviDriverOperation_put_InterchangeCheck(Agilent34401* pT, VARIANT_BOOL val);
	static HRESULT IIviDriverOperation_get_QueryInstrumentStatus(Agilent34401* pT, VARIANT_BOOL* val);
	static HRESULT IIviDriverOperation_put_QueryInstrumentStatus(Agilent34401* pT, VARIANT_BOOL val);
	static HRESULT IIviDriverOperation_get_RangeCheck(Agilent34401* pT, VARIANT_BOOL* val);
	static HRESULT IIviDriverOperation_put_RangeCheck(Agilent34401* pT, VARIANT_BOOL val);
	static HRESULT IIviDriverOperation_get_RecordCoercions(Agilent34401* pT, VARIANT_BOOL* val);
	static HRESULT IIviDriverOperation_put_RecordCoercions(Agilent34401* pT, VARIANT_BOOL val);
	static HRESULT IIviDriverOperation_get_Simulate(Agilent34401* pT, VARIANT_BOOL* val);
	static HRESULT IIviDriverOperation_put_Simulate(Agilent34401* pT, VARIANT_BOOL val);
	static HRESULT IIviDriverOperation_get_DriverSetup(Agilent34401* pT, BSTR* val);
	static HRESULT IIviDriverIdentity_get_InstrumentManufacturer(Agilent34401* pT, BSTR* val);
	static HRESULT IIviDriverIdentity_get_InstrumentModel(Agilent34401* pT, BSTR* val);
	static HRESULT IIviDriverIdentity_get_InstrumentFirmwareRevision(Agilent34401* pT, BSTR* val);
	static HRESULT IIviDriverIdentity_get_Identifier(Agilent34401* pT, BSTR* val);
	static HRESULT IIviDriverIdentity_get_SupportedInstrumentModels(Agilent34401* pT, BSTR* val);
	static HRESULT IIviDriverIdentity_get_SpecificationMajorVersion(Agilent34401* pT, long* val);
	static HRESULT IIviDriverIdentity_get_SpecificationMinorVersion(Agilent34401* pT, long* val);
	static HRESULT IIviDriverIdentity_get_GroupCapabilities(Agilent34401* pT, BSTR* val);
	static HRESULT IIviComponentIdentity_get_Description(Agilent34401* pT, BSTR* val);
	static HRESULT IIviComponentIdentity_get_Revision(Agilent34401* pT, BSTR* val);
	static HRESULT IIviComponentIdentity_get_Vendor(Agilent34401* pT, BSTR* val);
	static HRESULT IIviDriverUtility_Reset(Agilent34401* pT);
	static HRESULT IIviDriverUtility_ResetWithDefaults(Agilent34401* pT);
	static HRESULT IIviDriverUtility_Disable(Agilent34401* pT);
	static HRESULT IIviDriverUtility_SelfTest(Agilent34401* pT, long* TestResult, BSTR* TestMessage);
	static HRESULT IIviDriverUtility_ErrorQuery(Agilent34401* pT, long* ErrorCode, BSTR* ErrorMessage);
	static HRESULT IIviDriverUtility_LockObject(Agilent34401* pT);
	static HRESULT IIviDriverUtility_UnlockObject(Agilent34401* pT);
	static HRESULT IAgilent34401_get_Function(Agilent34401* pT, Agilent34401FunctionEnum* val);
	static HRESULT IAgilent34401_put_Function(Agilent34401* pT, Agilent34401FunctionEnum val);
	static HRESULT IAgilent34401_get_AC(Agilent34401* pT, IAgilent34401AC** val);
	static HRESULT IAgilent34401_get_Trigger(Agilent34401* pT, IAgilent34401Trigger** val);
	static HRESULT IAgilent34401_get_System(Agilent34401* pT, IAgilent34401System** val);
	static HRESULT IAgilent34401_get_Status(Agilent34401* pT, IAgilent34401Status** val);
	static HRESULT IAgilent34401_get_Resistance(Agilent34401* pT, IAgilent34401Resistance** val);
	static HRESULT IAgilent34401_get_Measurement(Agilent34401* pT, IAgilent34401Measurement** val);
	static HRESULT IAgilent34401_get_Math(Agilent34401* pT, IAgilent34401Math** val);
	static HRESULT IAgilent34401_get_Frequency(Agilent34401* pT, IAgilent34401Frequency** val);
	static HRESULT IAgilent34401_get_Display(Agilent34401* pT, IAgilent34401Display** val);
	static HRESULT IAgilent34401_get_DCVoltageRatio(Agilent34401* pT, IAgilent34401DCVoltageRatio** val);
	static HRESULT IAgilent34401_get_DCVoltage(Agilent34401* pT, IAgilent34401DCVoltage** val);
	static HRESULT IAgilent34401_get_DCCurrent(Agilent34401* pT, IAgilent34401DCCurrent** val);
	static HRESULT IAgilent34401_get_Calibration(Agilent34401* pT, IAgilent34401Calibration** val);
	static HRESULT IAgilent34401_get_Advanced(Agilent34401* pT, IAgilent34401Advanced** val);
	static HRESULT IAgilent34401_get_ACVoltage(Agilent34401* pT, IAgilent34401ACVoltage** val);
	static HRESULT IAgilent34401_get_ACCurrent(Agilent34401* pT, IAgilent34401ACCurrent** val);
	static HRESULT IAgilent34401_get_IviDmm(Agilent34401* pT, IIviDmm** val);
	static HRESULT IIviDmmAC_ConfigureBandwidth(Agilent34401* pT, double MinFreq, double MaxFreq);
	static HRESULT IIviDmmAC_get_FrequencyMax(Agilent34401* pT, double* val);
	static HRESULT IIviDmmAC_put_FrequencyMax(Agilent34401* pT, double val);
	static HRESULT IIviDmmAC_get_FrequencyMin(Agilent34401* pT, double* val);
	static HRESULT IIviDmmAC_put_FrequencyMin(Agilent34401* pT, double val);
	static HRESULT IIviDmmAdvanced_get_ActualRange(Agilent34401* pT, double* val);
	static HRESULT IIviDmmAdvanced_get_ApertureTime(Agilent34401* pT, double* val);
	static HRESULT IIviDmmAdvanced_get_ApertureTimeUnits(Agilent34401* pT, IviDmmApertureTimeUnitsEnum* val);
	static HRESULT IIviDmmAdvanced_get_AutoZero(Agilent34401* pT, IviDmmAutoZeroEnum* val);
	static HRESULT IIviDmmAdvanced_put_AutoZero(Agilent34401* pT, IviDmmAutoZeroEnum val);
	static HRESULT IIviDmmAdvanced_get_PowerlineFrequency(Agilent34401* pT, double* val);
	static HRESULT IIviDmmAdvanced_put_PowerlineFrequency(Agilent34401* pT, double val);
	static HRESULT IIviDmmFrequency_get_VoltageRange(Agilent34401* pT, double* val);
	static HRESULT IIviDmmFrequency_put_VoltageRange(Agilent34401* pT, double val);
	static HRESULT IIviDmmMeasurement_Initiate(Agilent34401* pT);
	static HRESULT IIviDmmMeasurement_Abort(Agilent34401* pT);
	static HRESULT IIviDmmMeasurement_Fetch(Agilent34401* pT, long MaxTimeMilliseconds, double* val);
	static HRESULT IIviDmmMeasurement_FetchMultiPoint(Agilent34401* pT, long MaxTimeMilliseconds, SAFEARRAY** val);
	static HRESULT IIviDmmMeasurement_Read(Agilent34401* pT, long MaxTimeMilliseconds, double* val);
	static HRESULT IIviDmmMeasurement_ReadMultiPoint(Agilent34401* pT, long MaxTimeMilliseconds, SAFEARRAY** val);
	static HRESULT IIviDmmMeasurement_SendSoftwareTrigger(Agilent34401* pT);
	static HRESULT IIviDmmMeasurement_IsOverRange(Agilent34401* pT, double MeasurementValue, VARIANT_BOOL* val);
	static HRESULT IIviDmmRTD_Configure(Agilent34401* pT, double Alpha, double Resistance);
	static HRESULT IIviDmmRTD_get_Alpha(Agilent34401* pT, double* val);
	static HRESULT IIviDmmRTD_put_Alpha(Agilent34401* pT, double val);
	static HRESULT IIviDmmRTD_get_Resistance(Agilent34401* pT, double* val);
	static HRESULT IIviDmmRTD_put_Resistance(Agilent34401* pT, double val);
	static HRESULT IIviDmmThermocouple_Configure(Agilent34401* pT, IviDmmThermocoupleTypeEnum Type, IviDmmRefJunctionTypeEnum RefJunctionType);
	static HRESULT IIviDmmThermocouple_get_FixedRefJunction(Agilent34401* pT, double* val);
	static HRESULT IIviDmmThermocouple_put_FixedRefJunction(Agilent34401* pT, double val);
	static HRESULT IIviDmmThermocouple_get_RefJunctionType(Agilent34401* pT, IviDmmRefJunctionTypeEnum* val);
	static HRESULT IIviDmmThermocouple_put_RefJunctionType(Agilent34401* pT, IviDmmRefJunctionTypeEnum val);
	static HRESULT IIviDmmThermocouple_get_Type(Agilent34401* pT, IviDmmThermocoupleTypeEnum* val);
	static HRESULT IIviDmmThermocouple_put_Type(Agilent34401* pT, IviDmmThermocoupleTypeEnum val);
	static HRESULT IIviDmmThermistor_get_Resistance(Agilent34401* pT, double* val);
	static HRESULT IIviDmmThermistor_put_Resistance(Agilent34401* pT, double val);
	static HRESULT IIviDmmTemperature_get_TransducerType(Agilent34401* pT, IviDmmTransducerTypeEnum* val);
	static HRESULT IIviDmmTemperature_put_TransducerType(Agilent34401* pT, IviDmmTransducerTypeEnum val);
	static HRESULT IIviDmmTemperature_get_RTD(Agilent34401* pT, IIviDmmRTD** val);
	static HRESULT IIviDmmTemperature_get_Thermocouple(Agilent34401* pT, IIviDmmThermocouple** val);
	static HRESULT IIviDmmTemperature_get_Thermistor(Agilent34401* pT, IIviDmmThermistor** val);
	static HRESULT IIviDmmMultiPoint_Configure(Agilent34401* pT, long TriggerCount, long SampleCount, IviDmmSampleTriggerEnum SampleTrigger, double SampleInterval);
	static HRESULT IIviDmmMultiPoint_get_MeasurementComplete(Agilent34401* pT, IviDmmMeasCompleteDestEnum* val);
	static HRESULT IIviDmmMultiPoint_put_MeasurementComplete(Agilent34401* pT, IviDmmMeasCompleteDestEnum val);
	static HRESULT IIviDmmMultiPoint_get_Count(Agilent34401* pT, long* val);
	static HRESULT IIviDmmMultiPoint_put_Count(Agilent34401* pT, long val);
	static HRESULT IIviDmmMultiPoint_get_SampleCount(Agilent34401* pT, long* val);
	static HRESULT IIviDmmMultiPoint_put_SampleCount(Agilent34401* pT, long val);
	static HRESULT IIviDmmMultiPoint_get_SampleInterval(Agilent34401* pT, double* val);
	static HRESULT IIviDmmMultiPoint_put_SampleInterval(Agilent34401* pT, double val);
	static HRESULT IIviDmmMultiPoint_get_SampleTrigger(Agilent34401* pT, IviDmmSampleTriggerEnum* val);
	static HRESULT IIviDmmMultiPoint_put_SampleTrigger(Agilent34401* pT, IviDmmSampleTriggerEnum val);
	static HRESULT IIviDmmTrigger_Configure(Agilent34401* pT, IviDmmTriggerSourceEnum TriggerSource, double TriggerDelay);
	static HRESULT IIviDmmTrigger_get_Slope(Agilent34401* pT, IviDmmTriggerSlopeEnum* val);
	static HRESULT IIviDmmTrigger_put_Slope(Agilent34401* pT, IviDmmTriggerSlopeEnum val);
	static HRESULT IIviDmmTrigger_get_Delay(Agilent34401* pT, double* val);
	static HRESULT IIviDmmTrigger_put_Delay(Agilent34401* pT, double val);
	static HRESULT IIviDmmTrigger_get_Source(Agilent34401* pT, IviDmmTriggerSourceEnum* val);
	static HRESULT IIviDmmTrigger_put_Source(Agilent34401* pT, IviDmmTriggerSourceEnum val);
	static HRESULT IIviDmmTrigger_get_MultiPoint(Agilent34401* pT, IIviDmmMultiPoint** val);
	static HRESULT IIviDmm_Configure(Agilent34401* pT, IviDmmFunctionEnum Function, double Range, double Resolution);
	static HRESULT IIviDmm_get_Function(Agilent34401* pT, IviDmmFunctionEnum* val);
	static HRESULT IIviDmm_put_Function(Agilent34401* pT, IviDmmFunctionEnum val);
	static HRESULT IIviDmm_get_Range(Agilent34401* pT, double* val);
	static HRESULT IIviDmm_put_Range(Agilent34401* pT, double val);
	static HRESULT IIviDmm_get_Resolution(Agilent34401* pT, double* val);
	static HRESULT IIviDmm_put_Resolution(Agilent34401* pT, double val);
	static HRESULT IIviDmm_get_AC(Agilent34401* pT, IIviDmmAC** val);
	static HRESULT IIviDmm_get_Advanced(Agilent34401* pT, IIviDmmAdvanced** val);
	static HRESULT IIviDmm_get_Frequency(Agilent34401* pT, IIviDmmFrequency** val);
	static HRESULT IIviDmm_get_Measurement(Agilent34401* pT, IIviDmmMeasurement** val);
	static HRESULT IIviDmm_get_Temperature(Agilent34401* pT, IIviDmmTemperature** val);
	static HRESULT IIviDmm_get_Trigger(Agilent34401* pT, IIviDmmTrigger** val);
	static HRESULT IAgilent34401AC_ConfigureBandwidth(Agilent34401* pT, double MinFreq, double MaxFreq);
	static HRESULT IAgilent34401AC_get_FrequencyMax(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401AC_get_FrequencyMin(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401AC_put_FrequencyMin(Agilent34401* pT, double val);
	static HRESULT IAgilent34401ACCurrent_Configure(Agilent34401* pT, double Range, double Resolution);
	static HRESULT IAgilent34401ACCurrent_get_AutoRange(Agilent34401* pT, VARIANT_BOOL* val);
	static HRESULT IAgilent34401ACCurrent_put_AutoRange(Agilent34401* pT, VARIANT_BOOL val);
	static HRESULT IAgilent34401ACCurrent_get_Range(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401ACCurrent_put_Range(Agilent34401* pT, double val);
	static HRESULT IAgilent34401ACCurrent_get_RangeMax(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401ACCurrent_get_RangeMin(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401ACCurrent_get_Resolution(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401ACCurrent_put_Resolution(Agilent34401* pT, double val);
	static HRESULT IAgilent34401ACCurrent_get_ResolutionMax(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401ACCurrent_get_ResolutionMin(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401ACVoltage_Configure(Agilent34401* pT, double Range, double Resolution);
	static HRESULT IAgilent34401ACVoltage_get_AutoRange(Agilent34401* pT, VARIANT_BOOL* val);
	static HRESULT IAgilent34401ACVoltage_put_AutoRange(Agilent34401* pT, VARIANT_BOOL val);
	static HRESULT IAgilent34401ACVoltage_get_Range(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401ACVoltage_put_Range(Agilent34401* pT, double val);
	static HRESULT IAgilent34401ACVoltage_get_RangeMax(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401ACVoltage_get_RangeMin(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401ACVoltage_get_Resolution(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401ACVoltage_put_Resolution(Agilent34401* pT, double val);
	static HRESULT IAgilent34401ACVoltage_get_ResolutionMax(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401ACVoltage_get_ResolutionMin(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Advanced_get_ActualRange(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Advanced_get_ApertureTime(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Advanced_put_ApertureTime(Agilent34401* pT, double val);
	static HRESULT IAgilent34401Advanced_get_ApertureTimeUnits(Agilent34401* pT, Agilent34401ApertureTimeUnitsEnum* val);
	static HRESULT IAgilent34401Advanced_get_AutoImpedance(Agilent34401* pT, VARIANT_BOOL* val);
	static HRESULT IAgilent34401Advanced_put_AutoImpedance(Agilent34401* pT, VARIANT_BOOL val);
	static HRESULT IAgilent34401Advanced_get_AutoZero(Agilent34401* pT, Agilent34401AutoZeroEnum* val);
	static HRESULT IAgilent34401Advanced_put_AutoZero(Agilent34401* pT, Agilent34401AutoZeroEnum val);
	static HRESULT IAgilent34401Advanced_get_InputTerminal(Agilent34401* pT, Agilent34401InputTerminalEnum* val);
	static HRESULT IAgilent34401Advanced_get_PowerlineFrequency(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Advanced_get_StoreEnabled(Agilent34401* pT, VARIANT_BOOL* val);
	static HRESULT IAgilent34401Advanced_put_StoreEnabled(Agilent34401* pT, VARIANT_BOOL val);
	static HRESULT IAgilent34401Calibration_SecureCode(Agilent34401* pT, VARIANT_BOOL SecureState, BSTR Code);
	static HRESULT IAgilent34401Calibration_Code(Agilent34401* pT, BSTR Code);
	static HRESULT IAgilent34401Calibration_get_Count(Agilent34401* pT, long* val);
	static HRESULT IAgilent34401Calibration_get_SecureState(Agilent34401* pT, VARIANT_BOOL* val);
	static HRESULT IAgilent34401Calibration_get_String(Agilent34401* pT, BSTR* val);
	static HRESULT IAgilent34401Calibration_put_String(Agilent34401* pT, BSTR val);
	static HRESULT IAgilent34401Calibration_get_Value(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Calibration_put_Value(Agilent34401* pT, double val);
	static HRESULT IAgilent34401DCCurrent_Configure(Agilent34401* pT, double Range, double Resolution);
	static HRESULT IAgilent34401DCCurrent_get_AutoRange(Agilent34401* pT, VARIANT_BOOL* val);
	static HRESULT IAgilent34401DCCurrent_put_AutoRange(Agilent34401* pT, VARIANT_BOOL val);
	static HRESULT IAgilent34401DCCurrent_get_Range(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401DCCurrent_put_Range(Agilent34401* pT, double val);
	static HRESULT IAgilent34401DCCurrent_get_RangeMax(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401DCCurrent_get_RangeMin(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401DCCurrent_get_Resolution(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401DCCurrent_put_Resolution(Agilent34401* pT, double val);
	static HRESULT IAgilent34401DCCurrent_get_ResolutionMax(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401DCCurrent_get_ResolutionMin(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401DCVoltage_Configure(Agilent34401* pT, double Range, double Resolution);
	static HRESULT IAgilent34401DCVoltage_get_AutoRange(Agilent34401* pT, VARIANT_BOOL* val);
	static HRESULT IAgilent34401DCVoltage_put_AutoRange(Agilent34401* pT, VARIANT_BOOL val);
	static HRESULT IAgilent34401DCVoltage_get_Range(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401DCVoltage_put_Range(Agilent34401* pT, double val);
	static HRESULT IAgilent34401DCVoltage_get_RangeMax(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401DCVoltage_get_RangeMin(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401DCVoltage_get_Resolution(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401DCVoltage_put_Resolution(Agilent34401* pT, double val);
	static HRESULT IAgilent34401DCVoltage_get_ResolutionMax(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401DCVoltage_get_ResolutionMin(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401DCVoltageRatio_get_InputVoltageMax(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401DCVoltageRatio_get_InputVoltageMin(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401DCVoltageRatio_get_ReferenceVoltageMax(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401DCVoltageRatio_get_ReferenceVoltageMin(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Display_Clear(Agilent34401* pT);
	static HRESULT IAgilent34401Display_get_Enabled(Agilent34401* pT, VARIANT_BOOL* val);
	static HRESULT IAgilent34401Display_put_Enabled(Agilent34401* pT, VARIANT_BOOL val);
	static HRESULT IAgilent34401Display_get_Text(Agilent34401* pT, BSTR* val);
	static HRESULT IAgilent34401Display_put_Text(Agilent34401* pT, BSTR val);
	static HRESULT IAgilent34401Frequency_get_AutoVoltageRange(Agilent34401* pT, VARIANT_BOOL* val);
	static HRESULT IAgilent34401Frequency_put_AutoVoltageRange(Agilent34401* pT, VARIANT_BOOL val);
	static HRESULT IAgilent34401Frequency_get_VoltageRange(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Frequency_put_VoltageRange(Agilent34401* pT, double val);
	static HRESULT IAgilent34401Frequency_get_VoltageRangeMax(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Frequency_get_VoltageRangeMin(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Math_get_Average(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Math_get_Count(Agilent34401* pT, long* val);
	static HRESULT IAgilent34401Math_get_dBmRefResistance(Agilent34401* pT, Agilent34401dBmRefResistanceEnum* val);
	static HRESULT IAgilent34401Math_put_dBmRefResistance(Agilent34401* pT, Agilent34401dBmRefResistanceEnum val);
	static HRESULT IAgilent34401Math_get_dBReference(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Math_put_dBReference(Agilent34401* pT, double val);
	static HRESULT IAgilent34401Math_get_Enabled(Agilent34401* pT, VARIANT_BOOL* val);
	static HRESULT IAgilent34401Math_put_Enabled(Agilent34401* pT, VARIANT_BOOL val);
	static HRESULT IAgilent34401Math_get_Function(Agilent34401* pT, Agilent34401MathFunctionEnum* val);
	static HRESULT IAgilent34401Math_put_Function(Agilent34401* pT, Agilent34401MathFunctionEnum val);
	static HRESULT IAgilent34401Math_get_LimitLower(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Math_put_LimitLower(Agilent34401* pT, double val);
	static HRESULT IAgilent34401Math_get_LimitUpper(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Math_put_LimitUpper(Agilent34401* pT, double val);
	static HRESULT IAgilent34401Math_get_Maximum(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Math_get_Minimum(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Math_get_NullOffset(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Math_put_NullOffset(Agilent34401* pT, double val);
	static HRESULT IAgilent34401Measurement_SendSoftwareTrigger(Agilent34401* pT);
	static HRESULT IAgilent34401Measurement_ReadMultiPoint(Agilent34401* pT, long MaxTimeMilliseconds, SAFEARRAY** ReadingArray);
	static HRESULT IAgilent34401Measurement_Read(Agilent34401* pT, long MaxTimeMilliseconds, double* val);
	static HRESULT IAgilent34401Measurement_IsOverRange(Agilent34401* pT, double MeasurementValue, VARIANT_BOOL* val);
	static HRESULT IAgilent34401Measurement_Initiate(Agilent34401* pT);
	static HRESULT IAgilent34401Measurement_FetchMultiPoint(Agilent34401* pT, long MaxTimeMilliseconds, SAFEARRAY** ReadingArray);
	static HRESULT IAgilent34401Measurement_Fetch(Agilent34401* pT, long MaxTimeMilliseconds, double* val);
	static HRESULT IAgilent34401Measurement_Abort(Agilent34401* pT);
	static HRESULT IAgilent34401MultiPoint_Configure(Agilent34401* pT, long TriggerCount, long SampleCount, Agilent34401SampleTriggerEnum SampleTrigger, double SampleInterval);
	static HRESULT IAgilent34401MultiPoint_get_Count(Agilent34401* pT, long* val);
	static HRESULT IAgilent34401MultiPoint_put_Count(Agilent34401* pT, long val);
	static HRESULT IAgilent34401MultiPoint_get_MeasurementComplete(Agilent34401* pT, Agilent34401MeasCompleteDestEnum* val);
	static HRESULT IAgilent34401MultiPoint_put_MeasurementComplete(Agilent34401* pT, Agilent34401MeasCompleteDestEnum val);
	static HRESULT IAgilent34401MultiPoint_get_SampleCount(Agilent34401* pT, long* val);
	static HRESULT IAgilent34401MultiPoint_put_SampleCount(Agilent34401* pT, long val);
	static HRESULT IAgilent34401MultiPoint_get_SampleInterval(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401MultiPoint_put_SampleInterval(Agilent34401* pT, double val);
	static HRESULT IAgilent34401MultiPoint_get_SampleTrigger(Agilent34401* pT, Agilent34401SampleTriggerEnum* val);
	static HRESULT IAgilent34401MultiPoint_put_SampleTrigger(Agilent34401* pT, Agilent34401SampleTriggerEnum val);
	static HRESULT IAgilent34401Resistance_Configure(Agilent34401* pT, double Range, double Resolution);
	static HRESULT IAgilent34401Resistance_get_AutoRange(Agilent34401* pT, VARIANT_BOOL* val);
	static HRESULT IAgilent34401Resistance_put_AutoRange(Agilent34401* pT, VARIANT_BOOL val);
	static HRESULT IAgilent34401Resistance_get_Range(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Resistance_put_Range(Agilent34401* pT, double val);
	static HRESULT IAgilent34401Resistance_get_RangeMax(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Resistance_get_RangeMin(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Resistance_get_Resolution(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Resistance_put_Resolution(Agilent34401* pT, double val);
	static HRESULT IAgilent34401Resistance_get_ResolutionMax(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Resistance_get_ResolutionMin(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Status_QueryRegister(Agilent34401* pT, Agilent34401StatusRegisterEnum Register, Agilent34401StatusSubRegisterEnum SubRegister, long* val);
	static HRESULT IAgilent34401Status_Preset(Agilent34401* pT);
	static HRESULT IAgilent34401Status_ConfigureRegister(Agilent34401* pT, Agilent34401StatusRegisterEnum Register, Agilent34401StatusSubRegisterEnum SubRegister, long Val);
	static HRESULT IAgilent34401Status_Clear(Agilent34401* pT);
	static HRESULT IAgilent34401Status_get_Register(Agilent34401* pT, Agilent34401StatusRegisterEnum Register, Agilent34401StatusSubRegisterEnum SubRegister, long* val);
	static HRESULT IAgilent34401Status_put_Register(Agilent34401* pT, Agilent34401StatusRegisterEnum Register, Agilent34401StatusSubRegisterEnum SubRegister, long val);
	static HRESULT IAgilent34401Status_get_SerialPoll(Agilent34401* pT, long* val);
	static HRESULT IAgilent34401System_WaitForOperationComplete(Agilent34401* pT, long MaxTimeMilliseconds);
	static HRESULT IAgilent34401System_EnableLocalControls(Agilent34401* pT);
	static HRESULT IAgilent34401System_DisableLocalControls(Agilent34401* pT);
	static HRESULT IAgilent34401System_Beep(Agilent34401* pT);
	static HRESULT IAgilent34401System_get_AsyncEventsEnabled(Agilent34401* pT, VARIANT_BOOL* val);
	static HRESULT IAgilent34401System_put_AsyncEventsEnabled(Agilent34401* pT, VARIANT_BOOL val);
	static HRESULT IAgilent34401System_get_BeeperEnabled(Agilent34401* pT, VARIANT_BOOL* val);
	static HRESULT IAgilent34401System_put_BeeperEnabled(Agilent34401* pT, VARIANT_BOOL val);
	static HRESULT IAgilent34401System_get_IO(Agilent34401* pT, IFormattedIO488** val);
	static HRESULT IAgilent34401System_get_TimeoutMilliseconds(Agilent34401* pT, long* val);
	static HRESULT IAgilent34401System_put_TimeoutMilliseconds(Agilent34401* pT, long val);
	static HRESULT IAgilent34401System_get_TraceEnabled(Agilent34401* pT, VARIANT_BOOL* val);
	static HRESULT IAgilent34401System_put_TraceEnabled(Agilent34401* pT, VARIANT_BOOL val);
	static HRESULT IAgilent34401Trigger_Configure(Agilent34401* pT, Agilent34401TriggerSourceEnum TriggerSource, double TriggerDelay);
	static HRESULT IAgilent34401Trigger_get_AutoDelay(Agilent34401* pT, VARIANT_BOOL* val);
	static HRESULT IAgilent34401Trigger_put_AutoDelay(Agilent34401* pT, VARIANT_BOOL val);
	static HRESULT IAgilent34401Trigger_get_Delay(Agilent34401* pT, double* val);
	static HRESULT IAgilent34401Trigger_put_Delay(Agilent34401* pT, double val);
	static HRESULT IAgilent34401Trigger_get_MultiPoint(Agilent34401* pT, IAgilent34401MultiPoint** val);
	static HRESULT IAgilent34401Trigger_get_Slope(Agilent34401* pT, Agilent34401TriggerSlopeEnum* val);
	static HRESULT IAgilent34401Trigger_get_Source(Agilent34401* pT, Agilent34401TriggerSourceEnum* val);
	static HRESULT IAgilent34401Trigger_put_Source(Agilent34401* pT, Agilent34401TriggerSourceEnum val);
	static HRESULT IAgilent34401System2_ReadBytes(Agilent34401* pT, SAFEARRAY** val);
	static HRESULT IAgilent34401System2_ReadString(Agilent34401* pT, BSTR* val);
	static HRESULT IAgilent34401System2_WriteBytes(Agilent34401* pT, SAFEARRAY** Buffer, __int64* val);
	static HRESULT IAgilent34401System2_WriteString(Agilent34401* pT, BSTR Data);
	static HRESULT IAgilent34401System2_get_IOTimeout(Agilent34401* pT, long* val);
	static HRESULT IAgilent34401System2_put_IOTimeout(Agilent34401* pT, long val);
	static HRESULT IAgilent344012_get_System2(Agilent34401* pT, IAgilent34401System2** val);
};

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDriver
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDriver : public IIviDriver
{
	STDMETHODIMP Initialize(BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString)
	{
		return ForwardingShimImpl::IIviDriver_Initialize(static_cast<Deriving*>(this), ResourceName, IdQuery, Reset, OptionString);
	}
	STDMETHODIMP Close()
	{
		return ForwardingShimImpl::IIviDriver_Close(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_DriverOperation(IIviDriverOperation** val)
	{
		return ForwardingShimImpl::IIviDriver_get_DriverOperation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Identity(IIviDriverIdentity** val)
	{
		return ForwardingShimImpl::IIviDriver_get_Identity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Utility(IIviDriverUtility** val)
	{
		return ForwardingShimImpl::IIviDriver_get_Utility(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Initialized(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriver_get_Initialized(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviDriver<Agilent34401> _IIviDriver;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDriverOperation
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDriverOperation : public IIviDriverOperation
{
	STDMETHODIMP InvalidateAllAttributes()
	{
		return ForwardingShimImpl::IIviDriverOperation_InvalidateAllAttributes(static_cast<Deriving*>(this));
	}
	STDMETHODIMP ClearInterchangeWarnings()
	{
		return ForwardingShimImpl::IIviDriverOperation_ClearInterchangeWarnings(static_cast<Deriving*>(this));
	}
	STDMETHODIMP GetNextInterchangeWarning(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_GetNextInterchangeWarning(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP ResetInterchangeCheck()
	{
		return ForwardingShimImpl::IIviDriverOperation_ResetInterchangeCheck(static_cast<Deriving*>(this));
	}
	STDMETHODIMP GetNextCoercionRecord(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_GetNextCoercionRecord(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_LogicalName(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_LogicalName(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_IoResourceDescriptor(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_IoResourceDescriptor(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Cache(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_Cache(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Cache(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviDriverOperation_put_Cache(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InterchangeCheck(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_InterchangeCheck(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_InterchangeCheck(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviDriverOperation_put_InterchangeCheck(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_QueryInstrumentStatus(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_QueryInstrumentStatus(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_QueryInstrumentStatus(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviDriverOperation_put_QueryInstrumentStatus(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RangeCheck(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_RangeCheck(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_RangeCheck(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviDriverOperation_put_RangeCheck(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RecordCoercions(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_RecordCoercions(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_RecordCoercions(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviDriverOperation_put_RecordCoercions(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Simulate(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_Simulate(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Simulate(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviDriverOperation_put_Simulate(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DriverSetup(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_DriverSetup(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviDriverOperation<Agilent34401> _IIviDriverOperation;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDriverIdentity
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDriverIdentity : public IIviDriverIdentity
{
	STDMETHODIMP get_Description(BSTR* val)
	{
		return ForwardingShimImpl::IIviComponentIdentity_get_Description(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Revision(BSTR* val)
	{
		return ForwardingShimImpl::IIviComponentIdentity_get_Revision(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Vendor(BSTR* val)
	{
		return ForwardingShimImpl::IIviComponentIdentity_get_Vendor(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InstrumentManufacturer(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_InstrumentManufacturer(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InstrumentModel(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_InstrumentModel(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InstrumentFirmwareRevision(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_InstrumentFirmwareRevision(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Identifier(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_Identifier(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SupportedInstrumentModels(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_SupportedInstrumentModels(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SpecificationMajorVersion(long* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_SpecificationMajorVersion(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SpecificationMinorVersion(long* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_SpecificationMinorVersion(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_GroupCapabilities(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_GroupCapabilities(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviDriverIdentity<Agilent34401> _IIviDriverIdentity;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviComponentIdentity
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviComponentIdentity : public IIviComponentIdentity
{
	STDMETHODIMP get_Description(BSTR* val)
	{
		return ForwardingShimImpl::IIviComponentIdentity_get_Description(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Revision(BSTR* val)
	{
		return ForwardingShimImpl::IIviComponentIdentity_get_Revision(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Vendor(BSTR* val)
	{
		return ForwardingShimImpl::IIviComponentIdentity_get_Vendor(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviComponentIdentity<Agilent34401> _IIviComponentIdentity;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDriverUtility
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDriverUtility : public IIviDriverUtility
{
	STDMETHODIMP Reset()
	{
		return ForwardingShimImpl::IIviDriverUtility_Reset(static_cast<Deriving*>(this));
	}
	STDMETHODIMP ResetWithDefaults()
	{
		return ForwardingShimImpl::IIviDriverUtility_ResetWithDefaults(static_cast<Deriving*>(this));
	}
	STDMETHODIMP Disable()
	{
		return ForwardingShimImpl::IIviDriverUtility_Disable(static_cast<Deriving*>(this));
	}
	STDMETHODIMP SelfTest(long* TestResult, BSTR* TestMessage)
	{
		return ForwardingShimImpl::IIviDriverUtility_SelfTest(static_cast<Deriving*>(this), TestResult, TestMessage);
	}
	STDMETHODIMP ErrorQuery(long* ErrorCode, BSTR* ErrorMessage)
	{
		return ForwardingShimImpl::IIviDriverUtility_ErrorQuery(static_cast<Deriving*>(this), ErrorCode, ErrorMessage);
	}
	STDMETHODIMP LockObject()
	{
		return ForwardingShimImpl::IIviDriverUtility_LockObject(static_cast<Deriving*>(this));
	}
	STDMETHODIMP UnlockObject()
	{
		return ForwardingShimImpl::IIviDriverUtility_UnlockObject(static_cast<Deriving*>(this));
	}
};

typedef __IIviDriverUtility<Agilent34401> _IIviDriverUtility;

///////////////////////////////////////////////////////////////////////////////
//
//	IAgilent34401
//

template <typename Deriving> struct ATL_NO_VTABLE __IAgilent34401 : public IAgilent34401
{
	STDMETHODIMP Initialize(BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString)
	{
		return ForwardingShimImpl::IIviDriver_Initialize(static_cast<Deriving*>(this), ResourceName, IdQuery, Reset, OptionString);
	}
	STDMETHODIMP Close()
	{
		return ForwardingShimImpl::IIviDriver_Close(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_DriverOperation(IIviDriverOperation** val)
	{
		return ForwardingShimImpl::IIviDriver_get_DriverOperation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Identity(IIviDriverIdentity** val)
	{
		return ForwardingShimImpl::IIviDriver_get_Identity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Utility(IIviDriverUtility** val)
	{
		return ForwardingShimImpl::IIviDriver_get_Utility(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Initialized(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriver_get_Initialized(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Function(Agilent34401FunctionEnum* val)
	{
		return ForwardingShimImpl::IAgilent34401_get_Function(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Function(Agilent34401FunctionEnum val)
	{
		return ForwardingShimImpl::IAgilent34401_put_Function(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AC(IAgilent34401AC** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_AC(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Trigger(IAgilent34401Trigger** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_Trigger(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_System(IAgilent34401System** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_System(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Status(IAgilent34401Status** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_Status(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Resistance(IAgilent34401Resistance** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_Resistance(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Measurement(IAgilent34401Measurement** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_Measurement(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Math(IAgilent34401Math** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_Math(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Frequency(IAgilent34401Frequency** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_Frequency(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Display(IAgilent34401Display** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_Display(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DCVoltageRatio(IAgilent34401DCVoltageRatio** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_DCVoltageRatio(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DCVoltage(IAgilent34401DCVoltage** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_DCVoltage(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DCCurrent(IAgilent34401DCCurrent** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_DCCurrent(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Calibration(IAgilent34401Calibration** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_Calibration(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Advanced(IAgilent34401Advanced** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_Advanced(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ACVoltage(IAgilent34401ACVoltage** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_ACVoltage(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ACCurrent(IAgilent34401ACCurrent** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_ACCurrent(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_IviDmm(IIviDmm** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_IviDmm(static_cast<Deriving*>(this), val);
	}
};

typedef __IAgilent34401<Agilent34401> _IAgilent34401;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDmmAC
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDmmAC : public IIviDmmAC
{
	STDMETHODIMP ConfigureBandwidth(double MinFreq, double MaxFreq)
	{
		return ForwardingShimImpl::IIviDmmAC_ConfigureBandwidth(static_cast<Deriving*>(this), MinFreq, MaxFreq);
	}
	STDMETHODIMP get_FrequencyMax(double* val)
	{
		return ForwardingShimImpl::IIviDmmAC_get_FrequencyMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_FrequencyMax(double val)
	{
		return ForwardingShimImpl::IIviDmmAC_put_FrequencyMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_FrequencyMin(double* val)
	{
		return ForwardingShimImpl::IIviDmmAC_get_FrequencyMin(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_FrequencyMin(double val)
	{
		return ForwardingShimImpl::IIviDmmAC_put_FrequencyMin(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviDmmAC<Agilent34401> _IIviDmmAC;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDmmAdvanced
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDmmAdvanced : public IIviDmmAdvanced
{
	STDMETHODIMP get_ActualRange(double* val)
	{
		return ForwardingShimImpl::IIviDmmAdvanced_get_ActualRange(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ApertureTime(double* val)
	{
		return ForwardingShimImpl::IIviDmmAdvanced_get_ApertureTime(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ApertureTimeUnits(IviDmmApertureTimeUnitsEnum* val)
	{
		return ForwardingShimImpl::IIviDmmAdvanced_get_ApertureTimeUnits(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AutoZero(IviDmmAutoZeroEnum* val)
	{
		return ForwardingShimImpl::IIviDmmAdvanced_get_AutoZero(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_AutoZero(IviDmmAutoZeroEnum val)
	{
		return ForwardingShimImpl::IIviDmmAdvanced_put_AutoZero(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_PowerlineFrequency(double* val)
	{
		return ForwardingShimImpl::IIviDmmAdvanced_get_PowerlineFrequency(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_PowerlineFrequency(double val)
	{
		return ForwardingShimImpl::IIviDmmAdvanced_put_PowerlineFrequency(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviDmmAdvanced<Agilent34401> _IIviDmmAdvanced;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDmmFrequency
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDmmFrequency : public IIviDmmFrequency
{
	STDMETHODIMP get_VoltageRange(double* val)
	{
		return ForwardingShimImpl::IIviDmmFrequency_get_VoltageRange(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_VoltageRange(double val)
	{
		return ForwardingShimImpl::IIviDmmFrequency_put_VoltageRange(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviDmmFrequency<Agilent34401> _IIviDmmFrequency;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDmmMeasurement
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDmmMeasurement : public IIviDmmMeasurement
{
	STDMETHODIMP Initiate()
	{
		return ForwardingShimImpl::IIviDmmMeasurement_Initiate(static_cast<Deriving*>(this));
	}
	STDMETHODIMP Abort()
	{
		return ForwardingShimImpl::IIviDmmMeasurement_Abort(static_cast<Deriving*>(this));
	}
	STDMETHODIMP Fetch(long MaxTimeMilliseconds, double* val)
	{
		return ForwardingShimImpl::IIviDmmMeasurement_Fetch(static_cast<Deriving*>(this), MaxTimeMilliseconds, val);
	}
	STDMETHODIMP FetchMultiPoint(long MaxTimeMilliseconds, SAFEARRAY** val)
	{
		return ForwardingShimImpl::IIviDmmMeasurement_FetchMultiPoint(static_cast<Deriving*>(this), MaxTimeMilliseconds, val);
	}
	STDMETHODIMP Read(long MaxTimeMilliseconds, double* val)
	{
		return ForwardingShimImpl::IIviDmmMeasurement_Read(static_cast<Deriving*>(this), MaxTimeMilliseconds, val);
	}
	STDMETHODIMP ReadMultiPoint(long MaxTimeMilliseconds, SAFEARRAY** val)
	{
		return ForwardingShimImpl::IIviDmmMeasurement_ReadMultiPoint(static_cast<Deriving*>(this), MaxTimeMilliseconds, val);
	}
	STDMETHODIMP SendSoftwareTrigger()
	{
		return ForwardingShimImpl::IIviDmmMeasurement_SendSoftwareTrigger(static_cast<Deriving*>(this));
	}
	STDMETHODIMP IsOverRange(double MeasurementValue, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDmmMeasurement_IsOverRange(static_cast<Deriving*>(this), MeasurementValue, val);
	}
};

typedef __IIviDmmMeasurement<Agilent34401> _IIviDmmMeasurement;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDmmRTD
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDmmRTD : public IIviDmmRTD
{
	STDMETHODIMP Configure(double Alpha, double Resistance)
	{
		return ForwardingShimImpl::IIviDmmRTD_Configure(static_cast<Deriving*>(this), Alpha, Resistance);
	}
	STDMETHODIMP get_Alpha(double* val)
	{
		return ForwardingShimImpl::IIviDmmRTD_get_Alpha(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Alpha(double val)
	{
		return ForwardingShimImpl::IIviDmmRTD_put_Alpha(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Resistance(double* val)
	{
		return ForwardingShimImpl::IIviDmmRTD_get_Resistance(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Resistance(double val)
	{
		return ForwardingShimImpl::IIviDmmRTD_put_Resistance(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviDmmRTD<Agilent34401> _IIviDmmRTD;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDmmThermocouple
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDmmThermocouple : public IIviDmmThermocouple
{
	STDMETHODIMP Configure(IviDmmThermocoupleTypeEnum Type, IviDmmRefJunctionTypeEnum RefJunctionType)
	{
		return ForwardingShimImpl::IIviDmmThermocouple_Configure(static_cast<Deriving*>(this), Type, RefJunctionType);
	}
	STDMETHODIMP get_FixedRefJunction(double* val)
	{
		return ForwardingShimImpl::IIviDmmThermocouple_get_FixedRefJunction(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_FixedRefJunction(double val)
	{
		return ForwardingShimImpl::IIviDmmThermocouple_put_FixedRefJunction(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RefJunctionType(IviDmmRefJunctionTypeEnum* val)
	{
		return ForwardingShimImpl::IIviDmmThermocouple_get_RefJunctionType(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_RefJunctionType(IviDmmRefJunctionTypeEnum val)
	{
		return ForwardingShimImpl::IIviDmmThermocouple_put_RefJunctionType(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Type(IviDmmThermocoupleTypeEnum* val)
	{
		return ForwardingShimImpl::IIviDmmThermocouple_get_Type(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Type(IviDmmThermocoupleTypeEnum val)
	{
		return ForwardingShimImpl::IIviDmmThermocouple_put_Type(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviDmmThermocouple<Agilent34401> _IIviDmmThermocouple;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDmmThermistor
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDmmThermistor : public IIviDmmThermistor
{
	STDMETHODIMP get_Resistance(double* val)
	{
		return ForwardingShimImpl::IIviDmmThermistor_get_Resistance(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Resistance(double val)
	{
		return ForwardingShimImpl::IIviDmmThermistor_put_Resistance(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviDmmThermistor<Agilent34401> _IIviDmmThermistor;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDmmTemperature
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDmmTemperature : public IIviDmmTemperature
{
	STDMETHODIMP get_TransducerType(IviDmmTransducerTypeEnum* val)
	{
		return ForwardingShimImpl::IIviDmmTemperature_get_TransducerType(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_TransducerType(IviDmmTransducerTypeEnum val)
	{
		return ForwardingShimImpl::IIviDmmTemperature_put_TransducerType(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RTD(IIviDmmRTD** val)
	{
		return ForwardingShimImpl::IIviDmmTemperature_get_RTD(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Thermocouple(IIviDmmThermocouple** val)
	{
		return ForwardingShimImpl::IIviDmmTemperature_get_Thermocouple(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Thermistor(IIviDmmThermistor** val)
	{
		return ForwardingShimImpl::IIviDmmTemperature_get_Thermistor(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviDmmTemperature<Agilent34401> _IIviDmmTemperature;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDmmMultiPoint
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDmmMultiPoint : public IIviDmmMultiPoint
{
	STDMETHODIMP Configure(long TriggerCount, long SampleCount, IviDmmSampleTriggerEnum SampleTrigger, double SampleInterval)
	{
		return ForwardingShimImpl::IIviDmmMultiPoint_Configure(static_cast<Deriving*>(this), TriggerCount, SampleCount, SampleTrigger, SampleInterval);
	}
	STDMETHODIMP get_MeasurementComplete(IviDmmMeasCompleteDestEnum* val)
	{
		return ForwardingShimImpl::IIviDmmMultiPoint_get_MeasurementComplete(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_MeasurementComplete(IviDmmMeasCompleteDestEnum val)
	{
		return ForwardingShimImpl::IIviDmmMultiPoint_put_MeasurementComplete(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Count(long* val)
	{
		return ForwardingShimImpl::IIviDmmMultiPoint_get_Count(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Count(long val)
	{
		return ForwardingShimImpl::IIviDmmMultiPoint_put_Count(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SampleCount(long* val)
	{
		return ForwardingShimImpl::IIviDmmMultiPoint_get_SampleCount(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SampleCount(long val)
	{
		return ForwardingShimImpl::IIviDmmMultiPoint_put_SampleCount(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SampleInterval(double* val)
	{
		return ForwardingShimImpl::IIviDmmMultiPoint_get_SampleInterval(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SampleInterval(double val)
	{
		return ForwardingShimImpl::IIviDmmMultiPoint_put_SampleInterval(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SampleTrigger(IviDmmSampleTriggerEnum* val)
	{
		return ForwardingShimImpl::IIviDmmMultiPoint_get_SampleTrigger(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SampleTrigger(IviDmmSampleTriggerEnum val)
	{
		return ForwardingShimImpl::IIviDmmMultiPoint_put_SampleTrigger(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviDmmMultiPoint<Agilent34401> _IIviDmmMultiPoint;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDmmTrigger
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDmmTrigger : public IIviDmmTrigger
{
	STDMETHODIMP Configure(IviDmmTriggerSourceEnum TriggerSource, double TriggerDelay)
	{
		return ForwardingShimImpl::IIviDmmTrigger_Configure(static_cast<Deriving*>(this), TriggerSource, TriggerDelay);
	}
	STDMETHODIMP get_Slope(IviDmmTriggerSlopeEnum* val)
	{
		return ForwardingShimImpl::IIviDmmTrigger_get_Slope(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Slope(IviDmmTriggerSlopeEnum val)
	{
		return ForwardingShimImpl::IIviDmmTrigger_put_Slope(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Delay(double* val)
	{
		return ForwardingShimImpl::IIviDmmTrigger_get_Delay(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Delay(double val)
	{
		return ForwardingShimImpl::IIviDmmTrigger_put_Delay(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Source(IviDmmTriggerSourceEnum* val)
	{
		return ForwardingShimImpl::IIviDmmTrigger_get_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Source(IviDmmTriggerSourceEnum val)
	{
		return ForwardingShimImpl::IIviDmmTrigger_put_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_MultiPoint(IIviDmmMultiPoint** val)
	{
		return ForwardingShimImpl::IIviDmmTrigger_get_MultiPoint(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviDmmTrigger<Agilent34401> _IIviDmmTrigger;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDmm
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDmm : public IIviDmm
{
	STDMETHODIMP Initialize(BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString)
	{
		return ForwardingShimImpl::IIviDriver_Initialize(static_cast<Deriving*>(this), ResourceName, IdQuery, Reset, OptionString);
	}
	STDMETHODIMP Close()
	{
		return ForwardingShimImpl::IIviDriver_Close(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_DriverOperation(IIviDriverOperation** val)
	{
		return ForwardingShimImpl::IIviDriver_get_DriverOperation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Identity(IIviDriverIdentity** val)
	{
		return ForwardingShimImpl::IIviDriver_get_Identity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Utility(IIviDriverUtility** val)
	{
		return ForwardingShimImpl::IIviDriver_get_Utility(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Initialized(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriver_get_Initialized(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP Configure(IviDmmFunctionEnum Function, double Range, double Resolution)
	{
		return ForwardingShimImpl::IIviDmm_Configure(static_cast<Deriving*>(this), Function, Range, Resolution);
	}
	STDMETHODIMP get_Function(IviDmmFunctionEnum* val)
	{
		return ForwardingShimImpl::IIviDmm_get_Function(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Function(IviDmmFunctionEnum val)
	{
		return ForwardingShimImpl::IIviDmm_put_Function(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Range(double* val)
	{
		return ForwardingShimImpl::IIviDmm_get_Range(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Range(double val)
	{
		return ForwardingShimImpl::IIviDmm_put_Range(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Resolution(double* val)
	{
		return ForwardingShimImpl::IIviDmm_get_Resolution(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Resolution(double val)
	{
		return ForwardingShimImpl::IIviDmm_put_Resolution(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AC(IIviDmmAC** val)
	{
		return ForwardingShimImpl::IIviDmm_get_AC(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Advanced(IIviDmmAdvanced** val)
	{
		return ForwardingShimImpl::IIviDmm_get_Advanced(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Frequency(IIviDmmFrequency** val)
	{
		return ForwardingShimImpl::IIviDmm_get_Frequency(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Measurement(IIviDmmMeasurement** val)
	{
		return ForwardingShimImpl::IIviDmm_get_Measurement(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Temperature(IIviDmmTemperature** val)
	{
		return ForwardingShimImpl::IIviDmm_get_Temperature(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Trigger(IIviDmmTrigger** val)
	{
		return ForwardingShimImpl::IIviDmm_get_Trigger(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviDmm<Agilent34401> _IIviDmm;

///////////////////////////////////////////////////////////////////////////////
//
//	IAgilent34401AC
//

template <typename Deriving> struct ATL_NO_VTABLE __IAgilent34401AC : public IAgilent34401AC
{
	STDMETHODIMP ConfigureBandwidth(double MinFreq, double MaxFreq)
	{
		return ForwardingShimImpl::IAgilent34401AC_ConfigureBandwidth(static_cast<Deriving*>(this), MinFreq, MaxFreq);
	}
	STDMETHODIMP get_FrequencyMax(double* val)
	{
		return ForwardingShimImpl::IAgilent34401AC_get_FrequencyMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_FrequencyMin(double* val)
	{
		return ForwardingShimImpl::IAgilent34401AC_get_FrequencyMin(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_FrequencyMin(double val)
	{
		return ForwardingShimImpl::IAgilent34401AC_put_FrequencyMin(static_cast<Deriving*>(this), val);
	}
};

typedef __IAgilent34401AC<Agilent34401> _IAgilent34401AC;

///////////////////////////////////////////////////////////////////////////////
//
//	IAgilent34401ACCurrent
//

template <typename Deriving> struct ATL_NO_VTABLE __IAgilent34401ACCurrent : public IAgilent34401ACCurrent
{
	STDMETHODIMP Configure(double Range, double Resolution)
	{
		return ForwardingShimImpl::IAgilent34401ACCurrent_Configure(static_cast<Deriving*>(this), Range, Resolution);
	}
	STDMETHODIMP get_AutoRange(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IAgilent34401ACCurrent_get_AutoRange(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_AutoRange(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IAgilent34401ACCurrent_put_AutoRange(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Range(double* val)
	{
		return ForwardingShimImpl::IAgilent34401ACCurrent_get_Range(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Range(double val)
	{
		return ForwardingShimImpl::IAgilent34401ACCurrent_put_Range(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RangeMax(double* val)
	{
		return ForwardingShimImpl::IAgilent34401ACCurrent_get_RangeMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RangeMin(double* val)
	{
		return ForwardingShimImpl::IAgilent34401ACCurrent_get_RangeMin(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Resolution(double* val)
	{
		return ForwardingShimImpl::IAgilent34401ACCurrent_get_Resolution(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Resolution(double val)
	{
		return ForwardingShimImpl::IAgilent34401ACCurrent_put_Resolution(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ResolutionMax(double* val)
	{
		return ForwardingShimImpl::IAgilent34401ACCurrent_get_ResolutionMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ResolutionMin(double* val)
	{
		return ForwardingShimImpl::IAgilent34401ACCurrent_get_ResolutionMin(static_cast<Deriving*>(this), val);
	}
};

typedef __IAgilent34401ACCurrent<Agilent34401> _IAgilent34401ACCurrent;

///////////////////////////////////////////////////////////////////////////////
//
//	IAgilent34401ACVoltage
//

template <typename Deriving> struct ATL_NO_VTABLE __IAgilent34401ACVoltage : public IAgilent34401ACVoltage
{
	STDMETHODIMP Configure(double Range, double Resolution)
	{
		return ForwardingShimImpl::IAgilent34401ACVoltage_Configure(static_cast<Deriving*>(this), Range, Resolution);
	}
	STDMETHODIMP get_AutoRange(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IAgilent34401ACVoltage_get_AutoRange(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_AutoRange(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IAgilent34401ACVoltage_put_AutoRange(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Range(double* val)
	{
		return ForwardingShimImpl::IAgilent34401ACVoltage_get_Range(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Range(double val)
	{
		return ForwardingShimImpl::IAgilent34401ACVoltage_put_Range(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RangeMax(double* val)
	{
		return ForwardingShimImpl::IAgilent34401ACVoltage_get_RangeMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RangeMin(double* val)
	{
		return ForwardingShimImpl::IAgilent34401ACVoltage_get_RangeMin(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Resolution(double* val)
	{
		return ForwardingShimImpl::IAgilent34401ACVoltage_get_Resolution(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Resolution(double val)
	{
		return ForwardingShimImpl::IAgilent34401ACVoltage_put_Resolution(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ResolutionMax(double* val)
	{
		return ForwardingShimImpl::IAgilent34401ACVoltage_get_ResolutionMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ResolutionMin(double* val)
	{
		return ForwardingShimImpl::IAgilent34401ACVoltage_get_ResolutionMin(static_cast<Deriving*>(this), val);
	}
};

typedef __IAgilent34401ACVoltage<Agilent34401> _IAgilent34401ACVoltage;

///////////////////////////////////////////////////////////////////////////////
//
//	IAgilent34401Advanced
//

template <typename Deriving> struct ATL_NO_VTABLE __IAgilent34401Advanced : public IAgilent34401Advanced
{
	STDMETHODIMP get_ActualRange(double* val)
	{
		return ForwardingShimImpl::IAgilent34401Advanced_get_ActualRange(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ApertureTime(double* val)
	{
		return ForwardingShimImpl::IAgilent34401Advanced_get_ApertureTime(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ApertureTime(double val)
	{
		return ForwardingShimImpl::IAgilent34401Advanced_put_ApertureTime(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ApertureTimeUnits(Agilent34401ApertureTimeUnitsEnum* val)
	{
		return ForwardingShimImpl::IAgilent34401Advanced_get_ApertureTimeUnits(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AutoImpedance(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IAgilent34401Advanced_get_AutoImpedance(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_AutoImpedance(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IAgilent34401Advanced_put_AutoImpedance(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AutoZero(Agilent34401AutoZeroEnum* val)
	{
		return ForwardingShimImpl::IAgilent34401Advanced_get_AutoZero(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_AutoZero(Agilent34401AutoZeroEnum val)
	{
		return ForwardingShimImpl::IAgilent34401Advanced_put_AutoZero(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InputTerminal(Agilent34401InputTerminalEnum* val)
	{
		return ForwardingShimImpl::IAgilent34401Advanced_get_InputTerminal(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_PowerlineFrequency(double* val)
	{
		return ForwardingShimImpl::IAgilent34401Advanced_get_PowerlineFrequency(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_StoreEnabled(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IAgilent34401Advanced_get_StoreEnabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_StoreEnabled(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IAgilent34401Advanced_put_StoreEnabled(static_cast<Deriving*>(this), val);
	}
};

typedef __IAgilent34401Advanced<Agilent34401> _IAgilent34401Advanced;

///////////////////////////////////////////////////////////////////////////////
//
//	IAgilent34401Calibration
//

template <typename Deriving> struct ATL_NO_VTABLE __IAgilent34401Calibration : public IAgilent34401Calibration
{
	STDMETHODIMP SecureCode(VARIANT_BOOL SecureState, BSTR Code)
	{
		return ForwardingShimImpl::IAgilent34401Calibration_SecureCode(static_cast<Deriving*>(this), SecureState, Code);
	}
	STDMETHODIMP Code(BSTR Code)
	{
		return ForwardingShimImpl::IAgilent34401Calibration_Code(static_cast<Deriving*>(this), Code);
	}
	STDMETHODIMP get_Count(long* val)
	{
		return ForwardingShimImpl::IAgilent34401Calibration_get_Count(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SecureState(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IAgilent34401Calibration_get_SecureState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_String(BSTR* val)
	{
		return ForwardingShimImpl::IAgilent34401Calibration_get_String(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_String(BSTR val)
	{
		return ForwardingShimImpl::IAgilent34401Calibration_put_String(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Value(double* val)
	{
		return ForwardingShimImpl::IAgilent34401Calibration_get_Value(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Value(double val)
	{
		return ForwardingShimImpl::IAgilent34401Calibration_put_Value(static_cast<Deriving*>(this), val);
	}
};

typedef __IAgilent34401Calibration<Agilent34401> _IAgilent34401Calibration;

///////////////////////////////////////////////////////////////////////////////
//
//	IAgilent34401DCCurrent
//

template <typename Deriving> struct ATL_NO_VTABLE __IAgilent34401DCCurrent : public IAgilent34401DCCurrent
{
	STDMETHODIMP Configure(double Range, double Resolution)
	{
		return ForwardingShimImpl::IAgilent34401DCCurrent_Configure(static_cast<Deriving*>(this), Range, Resolution);
	}
	STDMETHODIMP get_AutoRange(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IAgilent34401DCCurrent_get_AutoRange(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_AutoRange(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IAgilent34401DCCurrent_put_AutoRange(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Range(double* val)
	{
		return ForwardingShimImpl::IAgilent34401DCCurrent_get_Range(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Range(double val)
	{
		return ForwardingShimImpl::IAgilent34401DCCurrent_put_Range(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RangeMax(double* val)
	{
		return ForwardingShimImpl::IAgilent34401DCCurrent_get_RangeMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RangeMin(double* val)
	{
		return ForwardingShimImpl::IAgilent34401DCCurrent_get_RangeMin(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Resolution(double* val)
	{
		return ForwardingShimImpl::IAgilent34401DCCurrent_get_Resolution(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Resolution(double val)
	{
		return ForwardingShimImpl::IAgilent34401DCCurrent_put_Resolution(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ResolutionMax(double* val)
	{
		return ForwardingShimImpl::IAgilent34401DCCurrent_get_ResolutionMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ResolutionMin(double* val)
	{
		return ForwardingShimImpl::IAgilent34401DCCurrent_get_ResolutionMin(static_cast<Deriving*>(this), val);
	}
};

typedef __IAgilent34401DCCurrent<Agilent34401> _IAgilent34401DCCurrent;

///////////////////////////////////////////////////////////////////////////////
//
//	IAgilent34401DCVoltage
//

template <typename Deriving> struct ATL_NO_VTABLE __IAgilent34401DCVoltage : public IAgilent34401DCVoltage
{
	STDMETHODIMP Configure(double Range, double Resolution)
	{
		return ForwardingShimImpl::IAgilent34401DCVoltage_Configure(static_cast<Deriving*>(this), Range, Resolution);
	}
	STDMETHODIMP get_AutoRange(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IAgilent34401DCVoltage_get_AutoRange(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_AutoRange(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IAgilent34401DCVoltage_put_AutoRange(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Range(double* val)
	{
		return ForwardingShimImpl::IAgilent34401DCVoltage_get_Range(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Range(double val)
	{
		return ForwardingShimImpl::IAgilent34401DCVoltage_put_Range(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RangeMax(double* val)
	{
		return ForwardingShimImpl::IAgilent34401DCVoltage_get_RangeMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RangeMin(double* val)
	{
		return ForwardingShimImpl::IAgilent34401DCVoltage_get_RangeMin(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Resolution(double* val)
	{
		return ForwardingShimImpl::IAgilent34401DCVoltage_get_Resolution(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Resolution(double val)
	{
		return ForwardingShimImpl::IAgilent34401DCVoltage_put_Resolution(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ResolutionMax(double* val)
	{
		return ForwardingShimImpl::IAgilent34401DCVoltage_get_ResolutionMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ResolutionMin(double* val)
	{
		return ForwardingShimImpl::IAgilent34401DCVoltage_get_ResolutionMin(static_cast<Deriving*>(this), val);
	}
};

typedef __IAgilent34401DCVoltage<Agilent34401> _IAgilent34401DCVoltage;

///////////////////////////////////////////////////////////////////////////////
//
//	IAgilent34401DCVoltageRatio
//

template <typename Deriving> struct ATL_NO_VTABLE __IAgilent34401DCVoltageRatio : public IAgilent34401DCVoltageRatio
{
	STDMETHODIMP get_InputVoltageMax(double* val)
	{
		return ForwardingShimImpl::IAgilent34401DCVoltageRatio_get_InputVoltageMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InputVoltageMin(double* val)
	{
		return ForwardingShimImpl::IAgilent34401DCVoltageRatio_get_InputVoltageMin(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ReferenceVoltageMax(double* val)
	{
		return ForwardingShimImpl::IAgilent34401DCVoltageRatio_get_ReferenceVoltageMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ReferenceVoltageMin(double* val)
	{
		return ForwardingShimImpl::IAgilent34401DCVoltageRatio_get_ReferenceVoltageMin(static_cast<Deriving*>(this), val);
	}
};

typedef __IAgilent34401DCVoltageRatio<Agilent34401> _IAgilent34401DCVoltageRatio;

///////////////////////////////////////////////////////////////////////////////
//
//	IAgilent34401Display
//

template <typename Deriving> struct ATL_NO_VTABLE __IAgilent34401Display : public IAgilent34401Display
{
	STDMETHODIMP Clear()
	{
		return ForwardingShimImpl::IAgilent34401Display_Clear(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_Enabled(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IAgilent34401Display_get_Enabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Enabled(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IAgilent34401Display_put_Enabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Text(BSTR* val)
	{
		return ForwardingShimImpl::IAgilent34401Display_get_Text(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Text(BSTR val)
	{
		return ForwardingShimImpl::IAgilent34401Display_put_Text(static_cast<Deriving*>(this), val);
	}
};

typedef __IAgilent34401Display<Agilent34401> _IAgilent34401Display;

///////////////////////////////////////////////////////////////////////////////
//
//	IAgilent34401Frequency
//

template <typename Deriving> struct ATL_NO_VTABLE __IAgilent34401Frequency : public IAgilent34401Frequency
{
	STDMETHODIMP get_AutoVoltageRange(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IAgilent34401Frequency_get_AutoVoltageRange(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_AutoVoltageRange(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IAgilent34401Frequency_put_AutoVoltageRange(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_VoltageRange(double* val)
	{
		return ForwardingShimImpl::IAgilent34401Frequency_get_VoltageRange(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_VoltageRange(double val)
	{
		return ForwardingShimImpl::IAgilent34401Frequency_put_VoltageRange(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_VoltageRangeMax(double* val)
	{
		return ForwardingShimImpl::IAgilent34401Frequency_get_VoltageRangeMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_VoltageRangeMin(double* val)
	{
		return ForwardingShimImpl::IAgilent34401Frequency_get_VoltageRangeMin(static_cast<Deriving*>(this), val);
	}
};

typedef __IAgilent34401Frequency<Agilent34401> _IAgilent34401Frequency;

///////////////////////////////////////////////////////////////////////////////
//
//	IAgilent34401Math
//

template <typename Deriving> struct ATL_NO_VTABLE __IAgilent34401Math : public IAgilent34401Math
{
	STDMETHODIMP get_Average(double* val)
	{
		return ForwardingShimImpl::IAgilent34401Math_get_Average(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Count(long* val)
	{
		return ForwardingShimImpl::IAgilent34401Math_get_Count(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_dBmRefResistance(Agilent34401dBmRefResistanceEnum* val)
	{
		return ForwardingShimImpl::IAgilent34401Math_get_dBmRefResistance(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_dBmRefResistance(Agilent34401dBmRefResistanceEnum val)
	{
		return ForwardingShimImpl::IAgilent34401Math_put_dBmRefResistance(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_dBReference(double* val)
	{
		return ForwardingShimImpl::IAgilent34401Math_get_dBReference(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_dBReference(double val)
	{
		return ForwardingShimImpl::IAgilent34401Math_put_dBReference(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Enabled(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IAgilent34401Math_get_Enabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Enabled(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IAgilent34401Math_put_Enabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Function(Agilent34401MathFunctionEnum* val)
	{
		return ForwardingShimImpl::IAgilent34401Math_get_Function(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Function(Agilent34401MathFunctionEnum val)
	{
		return ForwardingShimImpl::IAgilent34401Math_put_Function(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_LimitLower(double* val)
	{
		return ForwardingShimImpl::IAgilent34401Math_get_LimitLower(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_LimitLower(double val)
	{
		return ForwardingShimImpl::IAgilent34401Math_put_LimitLower(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_LimitUpper(double* val)
	{
		return ForwardingShimImpl::IAgilent34401Math_get_LimitUpper(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_LimitUpper(double val)
	{
		return ForwardingShimImpl::IAgilent34401Math_put_LimitUpper(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Maximum(double* val)
	{
		return ForwardingShimImpl::IAgilent34401Math_get_Maximum(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Minimum(double* val)
	{
		return ForwardingShimImpl::IAgilent34401Math_get_Minimum(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_NullOffset(double* val)
	{
		return ForwardingShimImpl::IAgilent34401Math_get_NullOffset(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_NullOffset(double val)
	{
		return ForwardingShimImpl::IAgilent34401Math_put_NullOffset(static_cast<Deriving*>(this), val);
	}
};

typedef __IAgilent34401Math<Agilent34401> _IAgilent34401Math;

///////////////////////////////////////////////////////////////////////////////
//
//	IAgilent34401Measurement
//

template <typename Deriving> struct ATL_NO_VTABLE __IAgilent34401Measurement : public IAgilent34401Measurement
{
	STDMETHODIMP SendSoftwareTrigger()
	{
		return ForwardingShimImpl::IAgilent34401Measurement_SendSoftwareTrigger(static_cast<Deriving*>(this));
	}
	STDMETHODIMP ReadMultiPoint(long MaxTimeMilliseconds, SAFEARRAY** ReadingArray)
	{
		return ForwardingShimImpl::IAgilent34401Measurement_ReadMultiPoint(static_cast<Deriving*>(this), MaxTimeMilliseconds, ReadingArray);
	}
	STDMETHODIMP Read(long MaxTimeMilliseconds, double* val)
	{
		return ForwardingShimImpl::IAgilent34401Measurement_Read(static_cast<Deriving*>(this), MaxTimeMilliseconds, val);
	}
	STDMETHODIMP IsOverRange(double MeasurementValue, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IAgilent34401Measurement_IsOverRange(static_cast<Deriving*>(this), MeasurementValue, val);
	}
	STDMETHODIMP Initiate()
	{
		return ForwardingShimImpl::IAgilent34401Measurement_Initiate(static_cast<Deriving*>(this));
	}
	STDMETHODIMP FetchMultiPoint(long MaxTimeMilliseconds, SAFEARRAY** ReadingArray)
	{
		return ForwardingShimImpl::IAgilent34401Measurement_FetchMultiPoint(static_cast<Deriving*>(this), MaxTimeMilliseconds, ReadingArray);
	}
	STDMETHODIMP Fetch(long MaxTimeMilliseconds, double* val)
	{
		return ForwardingShimImpl::IAgilent34401Measurement_Fetch(static_cast<Deriving*>(this), MaxTimeMilliseconds, val);
	}
	STDMETHODIMP Abort()
	{
		return ForwardingShimImpl::IAgilent34401Measurement_Abort(static_cast<Deriving*>(this));
	}
};

typedef __IAgilent34401Measurement<Agilent34401> _IAgilent34401Measurement;

///////////////////////////////////////////////////////////////////////////////
//
//	IAgilent34401MultiPoint
//

template <typename Deriving> struct ATL_NO_VTABLE __IAgilent34401MultiPoint : public IAgilent34401MultiPoint
{
	STDMETHODIMP Configure(long TriggerCount, long SampleCount, Agilent34401SampleTriggerEnum SampleTrigger, double SampleInterval)
	{
		return ForwardingShimImpl::IAgilent34401MultiPoint_Configure(static_cast<Deriving*>(this), TriggerCount, SampleCount, SampleTrigger, SampleInterval);
	}
	STDMETHODIMP get_Count(long* val)
	{
		return ForwardingShimImpl::IAgilent34401MultiPoint_get_Count(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Count(long val)
	{
		return ForwardingShimImpl::IAgilent34401MultiPoint_put_Count(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_MeasurementComplete(Agilent34401MeasCompleteDestEnum* val)
	{
		return ForwardingShimImpl::IAgilent34401MultiPoint_get_MeasurementComplete(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_MeasurementComplete(Agilent34401MeasCompleteDestEnum val)
	{
		return ForwardingShimImpl::IAgilent34401MultiPoint_put_MeasurementComplete(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SampleCount(long* val)
	{
		return ForwardingShimImpl::IAgilent34401MultiPoint_get_SampleCount(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SampleCount(long val)
	{
		return ForwardingShimImpl::IAgilent34401MultiPoint_put_SampleCount(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SampleInterval(double* val)
	{
		return ForwardingShimImpl::IAgilent34401MultiPoint_get_SampleInterval(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SampleInterval(double val)
	{
		return ForwardingShimImpl::IAgilent34401MultiPoint_put_SampleInterval(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SampleTrigger(Agilent34401SampleTriggerEnum* val)
	{
		return ForwardingShimImpl::IAgilent34401MultiPoint_get_SampleTrigger(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SampleTrigger(Agilent34401SampleTriggerEnum val)
	{
		return ForwardingShimImpl::IAgilent34401MultiPoint_put_SampleTrigger(static_cast<Deriving*>(this), val);
	}
};

typedef __IAgilent34401MultiPoint<Agilent34401> _IAgilent34401MultiPoint;

///////////////////////////////////////////////////////////////////////////////
//
//	IAgilent34401Resistance
//

template <typename Deriving> struct ATL_NO_VTABLE __IAgilent34401Resistance : public IAgilent34401Resistance
{
	STDMETHODIMP Configure(double Range, double Resolution)
	{
		return ForwardingShimImpl::IAgilent34401Resistance_Configure(static_cast<Deriving*>(this), Range, Resolution);
	}
	STDMETHODIMP get_AutoRange(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IAgilent34401Resistance_get_AutoRange(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_AutoRange(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IAgilent34401Resistance_put_AutoRange(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Range(double* val)
	{
		return ForwardingShimImpl::IAgilent34401Resistance_get_Range(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Range(double val)
	{
		return ForwardingShimImpl::IAgilent34401Resistance_put_Range(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RangeMax(double* val)
	{
		return ForwardingShimImpl::IAgilent34401Resistance_get_RangeMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RangeMin(double* val)
	{
		return ForwardingShimImpl::IAgilent34401Resistance_get_RangeMin(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Resolution(double* val)
	{
		return ForwardingShimImpl::IAgilent34401Resistance_get_Resolution(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Resolution(double val)
	{
		return ForwardingShimImpl::IAgilent34401Resistance_put_Resolution(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ResolutionMax(double* val)
	{
		return ForwardingShimImpl::IAgilent34401Resistance_get_ResolutionMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ResolutionMin(double* val)
	{
		return ForwardingShimImpl::IAgilent34401Resistance_get_ResolutionMin(static_cast<Deriving*>(this), val);
	}
};

typedef __IAgilent34401Resistance<Agilent34401> _IAgilent34401Resistance;

///////////////////////////////////////////////////////////////////////////////
//
//	IAgilent34401Status
//

template <typename Deriving> struct ATL_NO_VTABLE __IAgilent34401Status : public IAgilent34401Status
{
	STDMETHODIMP QueryRegister(Agilent34401StatusRegisterEnum Register, Agilent34401StatusSubRegisterEnum SubRegister, long* val)
	{
		return ForwardingShimImpl::IAgilent34401Status_QueryRegister(static_cast<Deriving*>(this), Register, SubRegister, val);
	}
	STDMETHODIMP Preset()
	{
		return ForwardingShimImpl::IAgilent34401Status_Preset(static_cast<Deriving*>(this));
	}
	STDMETHODIMP ConfigureRegister(Agilent34401StatusRegisterEnum Register, Agilent34401StatusSubRegisterEnum SubRegister, long Val)
	{
		return ForwardingShimImpl::IAgilent34401Status_ConfigureRegister(static_cast<Deriving*>(this), Register, SubRegister, Val);
	}
	STDMETHODIMP Clear()
	{
		return ForwardingShimImpl::IAgilent34401Status_Clear(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_Register(Agilent34401StatusRegisterEnum Register, Agilent34401StatusSubRegisterEnum SubRegister, long* val)
	{
		return ForwardingShimImpl::IAgilent34401Status_get_Register(static_cast<Deriving*>(this), Register, SubRegister, val);
	}
	STDMETHODIMP put_Register(Agilent34401StatusRegisterEnum Register, Agilent34401StatusSubRegisterEnum SubRegister, long val)
	{
		return ForwardingShimImpl::IAgilent34401Status_put_Register(static_cast<Deriving*>(this), Register, SubRegister, val);
	}
	STDMETHODIMP get_SerialPoll(long* val)
	{
		return ForwardingShimImpl::IAgilent34401Status_get_SerialPoll(static_cast<Deriving*>(this), val);
	}
};

typedef __IAgilent34401Status<Agilent34401> _IAgilent34401Status;

///////////////////////////////////////////////////////////////////////////////
//
//	IAgilent34401System
//

template <typename Deriving> struct ATL_NO_VTABLE __IAgilent34401System : public IAgilent34401System
{
	STDMETHODIMP WaitForOperationComplete(long MaxTimeMilliseconds)
	{
		return ForwardingShimImpl::IAgilent34401System_WaitForOperationComplete(static_cast<Deriving*>(this), MaxTimeMilliseconds);
	}
	STDMETHODIMP EnableLocalControls()
	{
		return ForwardingShimImpl::IAgilent34401System_EnableLocalControls(static_cast<Deriving*>(this));
	}
	STDMETHODIMP DisableLocalControls()
	{
		return ForwardingShimImpl::IAgilent34401System_DisableLocalControls(static_cast<Deriving*>(this));
	}
	STDMETHODIMP Beep()
	{
		return ForwardingShimImpl::IAgilent34401System_Beep(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_AsyncEventsEnabled(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IAgilent34401System_get_AsyncEventsEnabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_AsyncEventsEnabled(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IAgilent34401System_put_AsyncEventsEnabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_BeeperEnabled(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IAgilent34401System_get_BeeperEnabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_BeeperEnabled(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IAgilent34401System_put_BeeperEnabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_IO(IFormattedIO488** val)
	{
		return ForwardingShimImpl::IAgilent34401System_get_IO(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_TimeoutMilliseconds(long* val)
	{
		return ForwardingShimImpl::IAgilent34401System_get_TimeoutMilliseconds(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_TimeoutMilliseconds(long val)
	{
		return ForwardingShimImpl::IAgilent34401System_put_TimeoutMilliseconds(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_TraceEnabled(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IAgilent34401System_get_TraceEnabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_TraceEnabled(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IAgilent34401System_put_TraceEnabled(static_cast<Deriving*>(this), val);
	}
};

typedef __IAgilent34401System<Agilent34401> _IAgilent34401System;

///////////////////////////////////////////////////////////////////////////////
//
//	IAgilent34401Trigger
//

template <typename Deriving> struct ATL_NO_VTABLE __IAgilent34401Trigger : public IAgilent34401Trigger
{
	STDMETHODIMP Configure(Agilent34401TriggerSourceEnum TriggerSource, double TriggerDelay)
	{
		return ForwardingShimImpl::IAgilent34401Trigger_Configure(static_cast<Deriving*>(this), TriggerSource, TriggerDelay);
	}
	STDMETHODIMP get_AutoDelay(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IAgilent34401Trigger_get_AutoDelay(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_AutoDelay(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IAgilent34401Trigger_put_AutoDelay(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Delay(double* val)
	{
		return ForwardingShimImpl::IAgilent34401Trigger_get_Delay(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Delay(double val)
	{
		return ForwardingShimImpl::IAgilent34401Trigger_put_Delay(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_MultiPoint(IAgilent34401MultiPoint** val)
	{
		return ForwardingShimImpl::IAgilent34401Trigger_get_MultiPoint(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Slope(Agilent34401TriggerSlopeEnum* val)
	{
		return ForwardingShimImpl::IAgilent34401Trigger_get_Slope(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Source(Agilent34401TriggerSourceEnum* val)
	{
		return ForwardingShimImpl::IAgilent34401Trigger_get_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Source(Agilent34401TriggerSourceEnum val)
	{
		return ForwardingShimImpl::IAgilent34401Trigger_put_Source(static_cast<Deriving*>(this), val);
	}
};

typedef __IAgilent34401Trigger<Agilent34401> _IAgilent34401Trigger;

///////////////////////////////////////////////////////////////////////////////
//
//	IAgilent34401System2
//

template <typename Deriving> struct ATL_NO_VTABLE __IAgilent34401System2 : public IAgilent34401System2
{
	STDMETHODIMP WaitForOperationComplete(long MaxTimeMilliseconds)
	{
		return ForwardingShimImpl::IAgilent34401System_WaitForOperationComplete(static_cast<Deriving*>(this), MaxTimeMilliseconds);
	}
	STDMETHODIMP EnableLocalControls()
	{
		return ForwardingShimImpl::IAgilent34401System_EnableLocalControls(static_cast<Deriving*>(this));
	}
	STDMETHODIMP DisableLocalControls()
	{
		return ForwardingShimImpl::IAgilent34401System_DisableLocalControls(static_cast<Deriving*>(this));
	}
	STDMETHODIMP Beep()
	{
		return ForwardingShimImpl::IAgilent34401System_Beep(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_AsyncEventsEnabled(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IAgilent34401System_get_AsyncEventsEnabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_AsyncEventsEnabled(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IAgilent34401System_put_AsyncEventsEnabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_BeeperEnabled(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IAgilent34401System_get_BeeperEnabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_BeeperEnabled(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IAgilent34401System_put_BeeperEnabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_IO(IFormattedIO488** val)
	{
		return ForwardingShimImpl::IAgilent34401System_get_IO(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_TimeoutMilliseconds(long* val)
	{
		return ForwardingShimImpl::IAgilent34401System_get_TimeoutMilliseconds(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_TimeoutMilliseconds(long val)
	{
		return ForwardingShimImpl::IAgilent34401System_put_TimeoutMilliseconds(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_TraceEnabled(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IAgilent34401System_get_TraceEnabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_TraceEnabled(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IAgilent34401System_put_TraceEnabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP ReadBytes(SAFEARRAY** val)
	{
		return ForwardingShimImpl::IAgilent34401System2_ReadBytes(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP ReadString(BSTR* val)
	{
		return ForwardingShimImpl::IAgilent34401System2_ReadString(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP WriteBytes(SAFEARRAY** Buffer, __int64* val)
	{
		return ForwardingShimImpl::IAgilent34401System2_WriteBytes(static_cast<Deriving*>(this), Buffer, val);
	}
	STDMETHODIMP WriteString(BSTR Data)
	{
		return ForwardingShimImpl::IAgilent34401System2_WriteString(static_cast<Deriving*>(this), Data);
	}
	STDMETHODIMP get_IOTimeout(long* val)
	{
		return ForwardingShimImpl::IAgilent34401System2_get_IOTimeout(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_IOTimeout(long val)
	{
		return ForwardingShimImpl::IAgilent34401System2_put_IOTimeout(static_cast<Deriving*>(this), val);
	}
};

typedef __IAgilent34401System2<Agilent34401> _IAgilent34401System2;

///////////////////////////////////////////////////////////////////////////////
//
//	IAgilent344012
//

template <typename Deriving> struct ATL_NO_VTABLE __IAgilent344012 : public IAgilent344012
{
	STDMETHODIMP Initialize(BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString)
	{
		return ForwardingShimImpl::IIviDriver_Initialize(static_cast<Deriving*>(this), ResourceName, IdQuery, Reset, OptionString);
	}
	STDMETHODIMP Close()
	{
		return ForwardingShimImpl::IIviDriver_Close(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_DriverOperation(IIviDriverOperation** val)
	{
		return ForwardingShimImpl::IIviDriver_get_DriverOperation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Identity(IIviDriverIdentity** val)
	{
		return ForwardingShimImpl::IIviDriver_get_Identity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Utility(IIviDriverUtility** val)
	{
		return ForwardingShimImpl::IIviDriver_get_Utility(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Initialized(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriver_get_Initialized(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Function(Agilent34401FunctionEnum* val)
	{
		return ForwardingShimImpl::IAgilent34401_get_Function(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Function(Agilent34401FunctionEnum val)
	{
		return ForwardingShimImpl::IAgilent34401_put_Function(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AC(IAgilent34401AC** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_AC(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Trigger(IAgilent34401Trigger** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_Trigger(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_System(IAgilent34401System** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_System(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Status(IAgilent34401Status** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_Status(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Resistance(IAgilent34401Resistance** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_Resistance(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Measurement(IAgilent34401Measurement** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_Measurement(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Math(IAgilent34401Math** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_Math(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Frequency(IAgilent34401Frequency** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_Frequency(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Display(IAgilent34401Display** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_Display(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DCVoltageRatio(IAgilent34401DCVoltageRatio** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_DCVoltageRatio(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DCVoltage(IAgilent34401DCVoltage** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_DCVoltage(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DCCurrent(IAgilent34401DCCurrent** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_DCCurrent(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Calibration(IAgilent34401Calibration** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_Calibration(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Advanced(IAgilent34401Advanced** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_Advanced(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ACVoltage(IAgilent34401ACVoltage** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_ACVoltage(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ACCurrent(IAgilent34401ACCurrent** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_ACCurrent(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_IviDmm(IIviDmm** val)
	{
		return ForwardingShimImpl::IAgilent34401_get_IviDmm(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_System2(IAgilent34401System2** val)
	{
		return ForwardingShimImpl::IAgilent344012_get_System2(static_cast<Deriving*>(this), val);
	}
};

typedef __IAgilent344012<Agilent34401> _IAgilent344012;

