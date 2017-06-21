/******************************************************************************
 *                                                                         
 *               Copyright Keysight Technologies 2003-2014
 *               All rights reserved.
 *
 *****************************************************************************/

#pragma once

#include "_Agilent34401.h"

#include "ForwardingShims.nimbus.h"
#include "ErrorReporter.nimbus.h"
#include "CoAgilent34401.nimbus.h"


class ATL_NO_VTABLE Agilent34401 : 
	public _Driver<Agilent34401>,
			public _IAgilent34401,
	public _IIviDmmAC,
	public _IIviDmmAdvanced,
	public _IIviDmmFrequency,
	public _IIviDmmMeasurement,
	public _IIviDmmRTD,
	public _IIviDmmThermocouple,
	public _IIviDmmThermistor,
	public _IIviDmmTemperature,
	public _IIviDmmMultiPoint,
	public _IIviDmmTrigger,
	public _IIviDmm,
	public _IIviDriverOperation,
	public _IIviDriverIdentity,
	public _IIviDriverUtility,
	public _IAgilent34401AC,
	public _IAgilent34401ACCurrent,
	public _IAgilent34401ACVoltage,
	public _IAgilent34401Advanced,
	public _IAgilent34401Calibration,
	public _IAgilent34401DCCurrent,
	public _IAgilent34401DCVoltage,
	public _IAgilent34401DCVoltageRatio,
	public _IAgilent34401Display,
	public _IAgilent34401Frequency,
	public _IAgilent34401Math,
	public _IAgilent34401Measurement,
	public _IAgilent34401MultiPoint,
	public _IAgilent34401Resistance,
	public _IAgilent34401Status,
	public _IAgilent34401System,
	public _IAgilent34401Trigger,
	public _IAgilent344012,
	public _IAgilent34401System2
{
	DECLARE_NIMBUS_CLASS_AGILENT34401()

	__declspec(property(get=GetIoSession)) IVisaComSession& io;
	__declspec(property(get=GetErrorReporter)) CAgilent34401ErrorReporter& err;

	virtual void ResetObjectState();
	virtual HRESULT OnFinalConstruct();
	virtual void OnFinalRelease();
	virtual HRESULT OnFinalInitialize();
	virtual HRESULT OnFinalClose();

	virtual HRESULT InitializeIdentification();


private:
	bool m_bRS232Flag; // Set in FinalInitialize()

public:
	// IIviComponentIdentity
	STDMETHOD(IIviComponentIdentity_get_Description)(BSTR* val);
	STDMETHOD(IIviComponentIdentity_get_Revision)(BSTR* val);
	STDMETHOD(IIviComponentIdentity_get_Vendor)(BSTR* val);

	// IIviDriver
	STDMETHOD(IIviDriver_Close)();
	STDMETHOD(IIviDriver_Initialize)(BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString);
	STDMETHOD(IIviDriver_get_DriverOperation)(IIviDriverOperation** val);
	STDMETHOD(IIviDriver_get_Identity)(IIviDriverIdentity** val);
	STDMETHOD(IIviDriver_get_Utility)(IIviDriverUtility** val);
	STDMETHOD(IIviDriver_get_Initialized)(VARIANT_BOOL* val);

	// IAgilent34401DCCurrent
	STDMETHOD(IAgilent34401DCCurrent_Configure)(double Range, double Resolution);
	STDMETHOD(IAgilent34401DCCurrent_get_AutoRange)(VARIANT_BOOL* val);
	STDMETHOD(IAgilent34401DCCurrent_put_AutoRange)(VARIANT_BOOL val);
	STDMETHOD(IAgilent34401DCCurrent_get_Range)(double* val);
	STDMETHOD(IAgilent34401DCCurrent_put_Range)(double val);
	STDMETHOD(IAgilent34401DCCurrent_get_RangeMax)(double* val);
	STDMETHOD(IAgilent34401DCCurrent_get_RangeMin)(double* val);
	STDMETHOD(IAgilent34401DCCurrent_get_Resolution)(double* val);
	STDMETHOD(IAgilent34401DCCurrent_put_Resolution)(double val);
	STDMETHOD(IAgilent34401DCCurrent_get_ResolutionMax)(double* val);
	STDMETHOD(IAgilent34401DCCurrent_get_ResolutionMin)(double* val);

	// IAgilent34401DCVoltageRatio
	STDMETHOD(IAgilent34401DCVoltageRatio_get_InputVoltageMax)(double* val);
	STDMETHOD(IAgilent34401DCVoltageRatio_get_InputVoltageMin)(double* val);
	STDMETHOD(IAgilent34401DCVoltageRatio_get_ReferenceVoltageMax)(double* val);
	STDMETHOD(IAgilent34401DCVoltageRatio_get_ReferenceVoltageMin)(double* val);

	// IAgilent34401DCVoltage
	STDMETHOD(IAgilent34401DCVoltage_Configure)(double Range, double Resolution);
	STDMETHOD(IAgilent34401DCVoltage_get_AutoRange)(VARIANT_BOOL* val);
	STDMETHOD(IAgilent34401DCVoltage_put_AutoRange)(VARIANT_BOOL val);
	STDMETHOD(IAgilent34401DCVoltage_get_Range)(double* val);
	STDMETHOD(IAgilent34401DCVoltage_put_Range)(double val);
	STDMETHOD(IAgilent34401DCVoltage_get_RangeMax)(double* val);
	STDMETHOD(IAgilent34401DCVoltage_get_RangeMin)(double* val);
	STDMETHOD(IAgilent34401DCVoltage_get_Resolution)(double* val);
	STDMETHOD(IAgilent34401DCVoltage_put_Resolution)(double val);
	STDMETHOD(IAgilent34401DCVoltage_get_ResolutionMax)(double* val);
	STDMETHOD(IAgilent34401DCVoltage_get_ResolutionMin)(double* val);

	// IAgilent34401Calibration
	STDMETHOD(IAgilent34401Calibration_SecureCode)(VARIANT_BOOL SecureState, BSTR Code);
	STDMETHOD(IAgilent34401Calibration_Code)(BSTR Code);
	STDMETHOD(IAgilent34401Calibration_get_Count)(long* val);
	STDMETHOD(IAgilent34401Calibration_get_SecureState)(VARIANT_BOOL* val);
	STDMETHOD(IAgilent34401Calibration_get_String)(BSTR* val);
	STDMETHOD(IAgilent34401Calibration_put_String)(BSTR val);
	STDMETHOD(IAgilent34401Calibration_get_Value)(double* val);
	STDMETHOD(IAgilent34401Calibration_put_Value)(double val);

	// IAgilent34401ACCurrent
	STDMETHOD(IAgilent34401ACCurrent_Configure)(double Range, double Resolution);
	STDMETHOD(IAgilent34401ACCurrent_get_AutoRange)(VARIANT_BOOL* val);
	STDMETHOD(IAgilent34401ACCurrent_put_AutoRange)(VARIANT_BOOL val);
	STDMETHOD(IAgilent34401ACCurrent_get_Range)(double* val);
	STDMETHOD(IAgilent34401ACCurrent_put_Range)(double val);
	STDMETHOD(IAgilent34401ACCurrent_get_RangeMax)(double* val);
	STDMETHOD(IAgilent34401ACCurrent_get_RangeMin)(double* val);
	STDMETHOD(IAgilent34401ACCurrent_get_Resolution)(double* val);
	STDMETHOD(IAgilent34401ACCurrent_put_Resolution)(double val);
	STDMETHOD(IAgilent34401ACCurrent_get_ResolutionMax)(double* val);
	STDMETHOD(IAgilent34401ACCurrent_get_ResolutionMin)(double* val);

	// IAgilent34401ACVoltage
	STDMETHOD(IAgilent34401ACVoltage_Configure)(double Range, double Resolution);
	STDMETHOD(IAgilent34401ACVoltage_get_AutoRange)(VARIANT_BOOL* val);
	STDMETHOD(IAgilent34401ACVoltage_put_AutoRange)(VARIANT_BOOL val);
	STDMETHOD(IAgilent34401ACVoltage_get_Range)(double* val);
	STDMETHOD(IAgilent34401ACVoltage_put_Range)(double val);
	STDMETHOD(IAgilent34401ACVoltage_get_RangeMax)(double* val);
	STDMETHOD(IAgilent34401ACVoltage_get_RangeMin)(double* val);
	STDMETHOD(IAgilent34401ACVoltage_get_Resolution)(double* val);
	STDMETHOD(IAgilent34401ACVoltage_put_Resolution)(double val);
	STDMETHOD(IAgilent34401ACVoltage_get_ResolutionMax)(double* val);
	STDMETHOD(IAgilent34401ACVoltage_get_ResolutionMin)(double* val);

	// IAgilent34401Advanced
	STDMETHOD(IAgilent34401Advanced_get_ActualRange)(double* val);
	STDMETHOD(IAgilent34401Advanced_get_ApertureTime)(double* val);
	STDMETHOD(IAgilent34401Advanced_put_ApertureTime)(double val);
	STDMETHOD(IAgilent34401Advanced_get_ApertureTimeUnits)(Agilent34401ApertureTimeUnitsEnum* val);
	STDMETHOD(IAgilent34401Advanced_get_AutoImpedance)(VARIANT_BOOL* val);
	STDMETHOD(IAgilent34401Advanced_put_AutoImpedance)(VARIANT_BOOL val);
	STDMETHOD(IAgilent34401Advanced_get_AutoZero)(Agilent34401AutoZeroEnum* val);
	STDMETHOD(IAgilent34401Advanced_put_AutoZero)(Agilent34401AutoZeroEnum val);
	STDMETHOD(IAgilent34401Advanced_get_InputTerminal)(Agilent34401InputTerminalEnum* val);
	STDMETHOD(IAgilent34401Advanced_get_PowerlineFrequency)(double* val);
	STDMETHOD(IAgilent34401Advanced_get_StoreEnabled)(VARIANT_BOOL* val);
	STDMETHOD(IAgilent34401Advanced_put_StoreEnabled)(VARIANT_BOOL val);

	// IAgilent34401Display
	STDMETHOD(IAgilent34401Display_Clear)();
	STDMETHOD(IAgilent34401Display_get_Enabled)(VARIANT_BOOL* val);
	STDMETHOD(IAgilent34401Display_put_Enabled)(VARIANT_BOOL val);
	STDMETHOD(IAgilent34401Display_get_Text)(BSTR* val);
	STDMETHOD(IAgilent34401Display_put_Text)(BSTR val);

	// IAgilent34401Status
	STDMETHOD(IAgilent34401Status_QueryRegister)(Agilent34401StatusRegisterEnum Register, Agilent34401StatusSubRegisterEnum SubRegister, long* val);
	STDMETHOD(IAgilent34401Status_Preset)();
	STDMETHOD(IAgilent34401Status_ConfigureRegister)(Agilent34401StatusRegisterEnum Register, Agilent34401StatusSubRegisterEnum SubRegister, long Val);
	STDMETHOD(IAgilent34401Status_Clear)();
	STDMETHOD(IAgilent34401Status_get_Register)(Agilent34401StatusRegisterEnum Register, Agilent34401StatusSubRegisterEnum SubRegister, long* val);
	STDMETHOD(IAgilent34401Status_put_Register)(Agilent34401StatusRegisterEnum Register, Agilent34401StatusSubRegisterEnum SubRegister, long val);
	STDMETHOD(IAgilent34401Status_get_SerialPoll)(long* val);

	// IAgilent34401Resistance
	STDMETHOD(IAgilent34401Resistance_Configure)(double Range, double Resolution);
	STDMETHOD(IAgilent34401Resistance_get_AutoRange)(VARIANT_BOOL* val);
	STDMETHOD(IAgilent34401Resistance_put_AutoRange)(VARIANT_BOOL val);
	STDMETHOD(IAgilent34401Resistance_get_Range)(double* val);
	STDMETHOD(IAgilent34401Resistance_put_Range)(double val);
	STDMETHOD(IAgilent34401Resistance_get_RangeMax)(double* val);
	STDMETHOD(IAgilent34401Resistance_get_RangeMin)(double* val);
	STDMETHOD(IAgilent34401Resistance_get_Resolution)(double* val);
	STDMETHOD(IAgilent34401Resistance_put_Resolution)(double val);
	STDMETHOD(IAgilent34401Resistance_get_ResolutionMax)(double* val);
	STDMETHOD(IAgilent34401Resistance_get_ResolutionMin)(double* val);

	// IAgilent34401Trigger
	STDMETHOD(IAgilent34401Trigger_Configure)(Agilent34401TriggerSourceEnum TriggerSource, double TriggerDelay);
	STDMETHOD(IAgilent34401Trigger_get_AutoDelay)(VARIANT_BOOL* val);
	STDMETHOD(IAgilent34401Trigger_put_AutoDelay)(VARIANT_BOOL val);
	STDMETHOD(IAgilent34401Trigger_get_Delay)(double* val);
	STDMETHOD(IAgilent34401Trigger_put_Delay)(double val);
	STDMETHOD(IAgilent34401Trigger_get_MultiPoint)(IAgilent34401MultiPoint** val);
	STDMETHOD(IAgilent34401Trigger_get_Slope)(Agilent34401TriggerSlopeEnum* val);
	STDMETHOD(IAgilent34401Trigger_get_Source)(Agilent34401TriggerSourceEnum* val);
	STDMETHOD(IAgilent34401Trigger_put_Source)(Agilent34401TriggerSourceEnum val);

	// IAgilent34401System
	STDMETHOD(IAgilent34401System_WaitForOperationComplete)(long MaxTimeMilliseconds);
	STDMETHOD(IAgilent34401System_EnableLocalControls)();
	STDMETHOD(IAgilent34401System_DisableLocalControls)();
	STDMETHOD(IAgilent34401System_Beep)();
	STDMETHOD(IAgilent34401System_get_AsyncEventsEnabled)(VARIANT_BOOL* val);
	STDMETHOD(IAgilent34401System_put_AsyncEventsEnabled)(VARIANT_BOOL val);
	STDMETHOD(IAgilent34401System_get_BeeperEnabled)(VARIANT_BOOL* val);
	STDMETHOD(IAgilent34401System_put_BeeperEnabled)(VARIANT_BOOL val);
	STDMETHOD(IAgilent34401System_get_IO)(IFormattedIO488** val);
	STDMETHOD(IAgilent34401System_get_TimeoutMilliseconds)(long* val);
	STDMETHOD(IAgilent34401System_put_TimeoutMilliseconds)(long val);
	STDMETHOD(IAgilent34401System_get_TraceEnabled)(VARIANT_BOOL* val);
	STDMETHOD(IAgilent34401System_put_TraceEnabled)(VARIANT_BOOL val);

	// IAgilent34401Math
	STDMETHOD(IAgilent34401Math_get_Average)(double* val);
	STDMETHOD(IAgilent34401Math_get_Count)(long* val);
	STDMETHOD(IAgilent34401Math_get_dBmRefResistance)(Agilent34401dBmRefResistanceEnum* val);
	STDMETHOD(IAgilent34401Math_put_dBmRefResistance)(Agilent34401dBmRefResistanceEnum val);
	STDMETHOD(IAgilent34401Math_get_dBReference)(double* val);
	STDMETHOD(IAgilent34401Math_put_dBReference)(double val);
	STDMETHOD(IAgilent34401Math_get_Enabled)(VARIANT_BOOL* val);
	STDMETHOD(IAgilent34401Math_put_Enabled)(VARIANT_BOOL val);
	STDMETHOD(IAgilent34401Math_get_Function)(Agilent34401MathFunctionEnum* val);
	STDMETHOD(IAgilent34401Math_put_Function)(Agilent34401MathFunctionEnum val);
	STDMETHOD(IAgilent34401Math_get_LimitLower)(double* val);
	STDMETHOD(IAgilent34401Math_put_LimitLower)(double val);
	STDMETHOD(IAgilent34401Math_get_LimitUpper)(double* val);
	STDMETHOD(IAgilent34401Math_put_LimitUpper)(double val);
	STDMETHOD(IAgilent34401Math_get_Maximum)(double* val);
	STDMETHOD(IAgilent34401Math_get_Minimum)(double* val);
	STDMETHOD(IAgilent34401Math_get_NullOffset)(double* val);
	STDMETHOD(IAgilent34401Math_put_NullOffset)(double val);

	// IAgilent34401Frequency
	STDMETHOD(IAgilent34401Frequency_get_AutoVoltageRange)(VARIANT_BOOL* val);
	STDMETHOD(IAgilent34401Frequency_put_AutoVoltageRange)(VARIANT_BOOL val);
	STDMETHOD(IAgilent34401Frequency_get_VoltageRange)(double* val);
	STDMETHOD(IAgilent34401Frequency_put_VoltageRange)(double val);
	STDMETHOD(IAgilent34401Frequency_get_VoltageRangeMax)(double* val);
	STDMETHOD(IAgilent34401Frequency_get_VoltageRangeMin)(double* val);

	// IAgilent34401MultiPoint
	STDMETHOD(IAgilent34401MultiPoint_Configure)(long TriggerCount, long SampleCount, Agilent34401SampleTriggerEnum SampleTrigger, double SampleInterval);
	STDMETHOD(IAgilent34401MultiPoint_get_Count)(long* val);
	STDMETHOD(IAgilent34401MultiPoint_put_Count)(long val);
	STDMETHOD(IAgilent34401MultiPoint_get_MeasurementComplete)(Agilent34401MeasCompleteDestEnum* val);
	STDMETHOD(IAgilent34401MultiPoint_put_MeasurementComplete)(Agilent34401MeasCompleteDestEnum val);
	STDMETHOD(IAgilent34401MultiPoint_get_SampleCount)(long* val);
	STDMETHOD(IAgilent34401MultiPoint_put_SampleCount)(long val);
	STDMETHOD(IAgilent34401MultiPoint_get_SampleInterval)(double* val);
	STDMETHOD(IAgilent34401MultiPoint_put_SampleInterval)(double val);
	STDMETHOD(IAgilent34401MultiPoint_get_SampleTrigger)(Agilent34401SampleTriggerEnum* val);
	STDMETHOD(IAgilent34401MultiPoint_put_SampleTrigger)(Agilent34401SampleTriggerEnum val);

	// IAgilent34401Measurement
	STDMETHOD(IAgilent34401Measurement_SendSoftwareTrigger)();
	STDMETHOD(IAgilent34401Measurement_ReadMultiPoint)(long MaxTimeMilliseconds, SAFEARRAY** ReadingArray);
	STDMETHOD(IAgilent34401Measurement_Read)(long MaxTimeMilliseconds, double* val);
	STDMETHOD(IAgilent34401Measurement_IsOverRange)(double MeasurementValue, VARIANT_BOOL* val);
	STDMETHOD(IAgilent34401Measurement_Initiate)();
	STDMETHOD(IAgilent34401Measurement_FetchMultiPoint)(long MaxTimeMilliseconds, SAFEARRAY** ReadingArray);
	STDMETHOD(IAgilent34401Measurement_Fetch)(long MaxTimeMilliseconds, double* val);
	STDMETHOD(IAgilent34401Measurement_Abort)();

	// IIviDmmRTD
	STDMETHOD(IIviDmmRTD_Configure)(double Alpha, double Resistance);
	STDMETHOD(IIviDmmRTD_get_Alpha)(double* val);
	STDMETHOD(IIviDmmRTD_put_Alpha)(double val);
	STDMETHOD(IIviDmmRTD_get_Resistance)(double* val);
	STDMETHOD(IIviDmmRTD_put_Resistance)(double val);

	// IIviDmmMeasurement
	STDMETHOD(IIviDmmMeasurement_IsOverRange)(double MeasurementValue, VARIANT_BOOL* val);
	STDMETHOD(IIviDmmMeasurement_SendSoftwareTrigger)();
	STDMETHOD(IIviDmmMeasurement_ReadMultiPoint)(long MaxTimeMilliseconds, SAFEARRAY** val);
	STDMETHOD(IIviDmmMeasurement_Read)(long MaxTimeMilliseconds, double* val);
	STDMETHOD(IIviDmmMeasurement_FetchMultiPoint)(long MaxTimeMilliseconds, SAFEARRAY** val);
	STDMETHOD(IIviDmmMeasurement_Fetch)(long MaxTimeMilliseconds, double* val);
	STDMETHOD(IIviDmmMeasurement_Abort)();
	STDMETHOD(IIviDmmMeasurement_Initiate)();

	// IIviDmmThermistor
	STDMETHOD(IIviDmmThermistor_get_Resistance)(double* val);
	STDMETHOD(IIviDmmThermistor_put_Resistance)(double val);

	// IIviDmmThermocouple
	STDMETHOD(IIviDmmThermocouple_Configure)(IviDmmThermocoupleTypeEnum Type, IviDmmRefJunctionTypeEnum RefJunctionType);
	STDMETHOD(IIviDmmThermocouple_get_FixedRefJunction)(double* val);
	STDMETHOD(IIviDmmThermocouple_put_FixedRefJunction)(double val);
	STDMETHOD(IIviDmmThermocouple_get_RefJunctionType)(IviDmmRefJunctionTypeEnum* val);
	STDMETHOD(IIviDmmThermocouple_put_RefJunctionType)(IviDmmRefJunctionTypeEnum val);
	STDMETHOD(IIviDmmThermocouple_get_Type)(IviDmmThermocoupleTypeEnum* val);
	STDMETHOD(IIviDmmThermocouple_put_Type)(IviDmmThermocoupleTypeEnum val);

	// IIviDmmAC
	STDMETHOD(IIviDmmAC_ConfigureBandwidth)(double MinFreq, double MaxFreq);
	STDMETHOD(IIviDmmAC_get_FrequencyMax)(double* val);
	STDMETHOD(IIviDmmAC_put_FrequencyMax)(double val);
	STDMETHOD(IIviDmmAC_get_FrequencyMin)(double* val);
	STDMETHOD(IIviDmmAC_put_FrequencyMin)(double val);

	// IAgilent34401
	STDMETHOD(IAgilent34401_get_Function)(Agilent34401FunctionEnum* val);
	STDMETHOD(IAgilent34401_put_Function)(Agilent34401FunctionEnum val);
	STDMETHOD(IAgilent34401_get_AC)(IAgilent34401AC** val);
	STDMETHOD(IAgilent34401_get_Trigger)(IAgilent34401Trigger** val);
	STDMETHOD(IAgilent34401_get_System)(IAgilent34401System** val);
	STDMETHOD(IAgilent34401_get_Status)(IAgilent34401Status** val);
	STDMETHOD(IAgilent34401_get_Resistance)(IAgilent34401Resistance** val);
	STDMETHOD(IAgilent34401_get_Measurement)(IAgilent34401Measurement** val);
	STDMETHOD(IAgilent34401_get_Math)(IAgilent34401Math** val);
	STDMETHOD(IAgilent34401_get_Frequency)(IAgilent34401Frequency** val);
	STDMETHOD(IAgilent34401_get_Display)(IAgilent34401Display** val);
	STDMETHOD(IAgilent34401_get_DCVoltageRatio)(IAgilent34401DCVoltageRatio** val);
	STDMETHOD(IAgilent34401_get_DCVoltage)(IAgilent34401DCVoltage** val);
	STDMETHOD(IAgilent34401_get_DCCurrent)(IAgilent34401DCCurrent** val);
	STDMETHOD(IAgilent34401_get_Calibration)(IAgilent34401Calibration** val);
	STDMETHOD(IAgilent34401_get_Advanced)(IAgilent34401Advanced** val);
	STDMETHOD(IAgilent34401_get_ACVoltage)(IAgilent34401ACVoltage** val);
	STDMETHOD(IAgilent34401_get_ACCurrent)(IAgilent34401ACCurrent** val);
	STDMETHOD(IAgilent34401_get_IviDmm)(IIviDmm** val);

	// IIviDmmFrequency
	STDMETHOD(IIviDmmFrequency_get_VoltageRange)(double* val);
	STDMETHOD(IIviDmmFrequency_put_VoltageRange)(double val);

	// IIviDmmAdvanced
	STDMETHOD(IIviDmmAdvanced_get_ActualRange)(double* val);
	STDMETHOD(IIviDmmAdvanced_get_ApertureTime)(double* val);
	STDMETHOD(IIviDmmAdvanced_get_ApertureTimeUnits)(IviDmmApertureTimeUnitsEnum* val);
	STDMETHOD(IIviDmmAdvanced_get_AutoZero)(IviDmmAutoZeroEnum* val);
	STDMETHOD(IIviDmmAdvanced_put_AutoZero)(IviDmmAutoZeroEnum val);
	STDMETHOD(IIviDmmAdvanced_get_PowerlineFrequency)(double* val);
	STDMETHOD(IIviDmmAdvanced_put_PowerlineFrequency)(double val);

	// IIviDriverIdentity
	STDMETHOD(IIviDriverIdentity_get_InstrumentManufacturer)(BSTR* val);
	STDMETHOD(IIviDriverIdentity_get_InstrumentModel)(BSTR* val);
	STDMETHOD(IIviDriverIdentity_get_InstrumentFirmwareRevision)(BSTR* val);
	STDMETHOD(IIviDriverIdentity_get_Identifier)(BSTR* val);
	STDMETHOD(IIviDriverIdentity_get_SupportedInstrumentModels)(BSTR* val);
	STDMETHOD(IIviDriverIdentity_get_SpecificationMajorVersion)(long* val);
	STDMETHOD(IIviDriverIdentity_get_SpecificationMinorVersion)(long* val);
	STDMETHOD(IIviDriverIdentity_get_GroupCapabilities)(BSTR* val);

	// IIviDriverOperation
	STDMETHOD(IIviDriverOperation_GetNextCoercionRecord)(BSTR* val);
	STDMETHOD(IIviDriverOperation_ResetInterchangeCheck)();
	STDMETHOD(IIviDriverOperation_GetNextInterchangeWarning)(BSTR* val);
	STDMETHOD(IIviDriverOperation_ClearInterchangeWarnings)();
	STDMETHOD(IIviDriverOperation_InvalidateAllAttributes)();
	STDMETHOD(IIviDriverOperation_get_LogicalName)(BSTR* val);
	STDMETHOD(IIviDriverOperation_get_IoResourceDescriptor)(BSTR* val);
	STDMETHOD(IIviDriverOperation_get_Cache)(VARIANT_BOOL* val);
	STDMETHOD(IIviDriverOperation_put_Cache)(VARIANT_BOOL val);
	STDMETHOD(IIviDriverOperation_get_InterchangeCheck)(VARIANT_BOOL* val);
	STDMETHOD(IIviDriverOperation_put_InterchangeCheck)(VARIANT_BOOL val);
	STDMETHOD(IIviDriverOperation_get_QueryInstrumentStatus)(VARIANT_BOOL* val);
	STDMETHOD(IIviDriverOperation_put_QueryInstrumentStatus)(VARIANT_BOOL val);
	STDMETHOD(IIviDriverOperation_get_RangeCheck)(VARIANT_BOOL* val);
	STDMETHOD(IIviDriverOperation_put_RangeCheck)(VARIANT_BOOL val);
	STDMETHOD(IIviDriverOperation_get_RecordCoercions)(VARIANT_BOOL* val);
	STDMETHOD(IIviDriverOperation_put_RecordCoercions)(VARIANT_BOOL val);
	STDMETHOD(IIviDriverOperation_get_Simulate)(VARIANT_BOOL* val);
	STDMETHOD(IIviDriverOperation_put_Simulate)(VARIANT_BOOL val);
	STDMETHOD(IIviDriverOperation_get_DriverSetup)(BSTR* val);

	// IAgilent34401AC
	STDMETHOD(IAgilent34401AC_ConfigureBandwidth)(double MinFreq, double MaxFreq);
	STDMETHOD(IAgilent34401AC_get_FrequencyMax)(double* val);
	STDMETHOD(IAgilent34401AC_get_FrequencyMin)(double* val);
	STDMETHOD(IAgilent34401AC_put_FrequencyMin)(double val);

	// IIviDriverUtility
	STDMETHOD(IIviDriverUtility_UnlockObject)();
	STDMETHOD(IIviDriverUtility_LockObject)();
	STDMETHOD(IIviDriverUtility_ErrorQuery)(long* ErrorCode, BSTR* ErrorMessage);
	STDMETHOD(IIviDriverUtility_SelfTest)(long* TestResult, BSTR* TestMessage);
	STDMETHOD(IIviDriverUtility_Disable)();
	STDMETHOD(IIviDriverUtility_ResetWithDefaults)();
	STDMETHOD(IIviDriverUtility_Reset)();

	// IIviDmmMultiPoint
	STDMETHOD(IIviDmmMultiPoint_Configure)(long TriggerCount, long SampleCount, IviDmmSampleTriggerEnum SampleTrigger, double SampleInterval);
	STDMETHOD(IIviDmmMultiPoint_get_MeasurementComplete)(IviDmmMeasCompleteDestEnum* val);
	STDMETHOD(IIviDmmMultiPoint_put_MeasurementComplete)(IviDmmMeasCompleteDestEnum val);
	STDMETHOD(IIviDmmMultiPoint_get_Count)(long* val);
	STDMETHOD(IIviDmmMultiPoint_put_Count)(long val);
	STDMETHOD(IIviDmmMultiPoint_get_SampleCount)(long* val);
	STDMETHOD(IIviDmmMultiPoint_put_SampleCount)(long val);
	STDMETHOD(IIviDmmMultiPoint_get_SampleInterval)(double* val);
	STDMETHOD(IIviDmmMultiPoint_put_SampleInterval)(double val);
	STDMETHOD(IIviDmmMultiPoint_get_SampleTrigger)(IviDmmSampleTriggerEnum* val);
	STDMETHOD(IIviDmmMultiPoint_put_SampleTrigger)(IviDmmSampleTriggerEnum val);

	// IIviDmmTemperature
	STDMETHOD(IIviDmmTemperature_get_TransducerType)(IviDmmTransducerTypeEnum* val);
	STDMETHOD(IIviDmmTemperature_put_TransducerType)(IviDmmTransducerTypeEnum val);
	STDMETHOD(IIviDmmTemperature_get_RTD)(IIviDmmRTD** val);
	STDMETHOD(IIviDmmTemperature_get_Thermocouple)(IIviDmmThermocouple** val);
	STDMETHOD(IIviDmmTemperature_get_Thermistor)(IIviDmmThermistor** val);

	// IIviDmm
	STDMETHOD(IIviDmm_Configure)(IviDmmFunctionEnum Function, double Range, double Resolution);
	STDMETHOD(IIviDmm_get_Function)(IviDmmFunctionEnum* val);
	STDMETHOD(IIviDmm_put_Function)(IviDmmFunctionEnum val);
	STDMETHOD(IIviDmm_get_Range)(double* val);
	STDMETHOD(IIviDmm_put_Range)(double val);
	STDMETHOD(IIviDmm_get_Resolution)(double* val);
	STDMETHOD(IIviDmm_put_Resolution)(double val);
	STDMETHOD(IIviDmm_get_AC)(IIviDmmAC** val);
	STDMETHOD(IIviDmm_get_Advanced)(IIviDmmAdvanced** val);
	STDMETHOD(IIviDmm_get_Frequency)(IIviDmmFrequency** val);
	STDMETHOD(IIviDmm_get_Measurement)(IIviDmmMeasurement** val);
	STDMETHOD(IIviDmm_get_Temperature)(IIviDmmTemperature** val);
	STDMETHOD(IIviDmm_get_Trigger)(IIviDmmTrigger** val);

	// IIviDmmTrigger
	STDMETHOD(IIviDmmTrigger_Configure)(IviDmmTriggerSourceEnum TriggerSource, double TriggerDelay);
	STDMETHOD(IIviDmmTrigger_get_Slope)(IviDmmTriggerSlopeEnum* val);
	STDMETHOD(IIviDmmTrigger_put_Slope)(IviDmmTriggerSlopeEnum val);
	STDMETHOD(IIviDmmTrigger_get_Delay)(double* val);
	STDMETHOD(IIviDmmTrigger_put_Delay)(double val);
	STDMETHOD(IIviDmmTrigger_get_Source)(IviDmmTriggerSourceEnum* val);
	STDMETHOD(IIviDmmTrigger_put_Source)(IviDmmTriggerSourceEnum val);
	STDMETHOD(IIviDmmTrigger_get_MultiPoint)(IIviDmmMultiPoint** val);


	STDMETHOD(IAgilent344012_get_System2)(IAgilent34401System2** val);

	STDMETHOD(IAgilent34401System2_ReadBytes)(SAFEARRAY** val);
	STDMETHOD(IAgilent34401System2_ReadString)(BSTR* val);
	STDMETHOD(IAgilent34401System2_WriteBytes)(SAFEARRAY** Buffer, __int64* val);
	STDMETHOD(IAgilent34401System2_WriteString)(BSTR Data);
	STDMETHOD(IAgilent34401System2_get_IOTimeout)(long* val);
	STDMETHOD(IAgilent34401System2_put_IOTimeout)(long val);
};


NIMBUS_OBJECT_ENTRY_AUTO(Agilent34401)
