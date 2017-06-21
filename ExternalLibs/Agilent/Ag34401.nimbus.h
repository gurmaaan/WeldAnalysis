/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#pragma once

#include "_Agilent34401.h"
ViStatus _VI_FUNC Ag34401_get_SPECIFIC_DRIVER_DESCRIPTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Ag34401_get_SPECIFIC_DRIVER_PREFIX ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Ag34401_get_SPECIFIC_DRIVER_VENDOR ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Ag34401_get_SPECIFIC_DRIVER_REVISION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Ag34401_get_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_RANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_RANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Ag34401_get_QUERY_INSTRUMENT_STATUS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_QUERY_INSTRUMENT_STATUS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Ag34401_get_CACHE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_CACHE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Ag34401_get_SIMULATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_SIMULATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Ag34401_get_RECORD_COERCIONS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_RECORD_COERCIONS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Ag34401_get_INTERCHANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_INTERCHANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Ag34401_get_LOGICAL_NAME ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Ag34401_get_IO_RESOURCE_DESCRIPTOR ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Ag34401_get_DRIVER_SETUP ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Ag34401_get_GROUP_CAPABILITIES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Ag34401_get_SUPPORTED_INSTRUMENT_MODELS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Ag34401_get_INSTRUMENT_FIRMWARE_REVISION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Ag34401_get_INSTRUMENT_MANUFACTURER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Ag34401_get_INSTRUMENT_MODEL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Ag34401_get_FUNCTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_FUNCTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_RESOLUTION_ABSOLUTE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_RESOLUTION_ABSOLUTE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_AC_MAX_FREQ ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_AC_MAX_FREQ ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_AC_MIN_FREQ ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_AC_MIN_FREQ ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_AUTO_RANGE_VALUE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_APERTURE_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_APERTURE_TIME_UNITS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_AUTO_ZERO ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_AUTO_ZERO ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_POWERLINE_FREQ ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_POWERLINE_FREQ ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_FREQ_VOLTAGE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_FREQ_VOLTAGE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_TRIGGER_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_TRIGGER_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_MEAS_COMPLETE_DEST ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_MEAS_COMPLETE_DEST ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_SAMPLE_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_SAMPLE_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_SAMPLE_INTERVAL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_SAMPLE_INTERVAL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_SAMPLE_TRIGGER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_SAMPLE_TRIGGER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_TRIGGER_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_TRIGGER_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_TRIGGER_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_TRIGGER_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_TRIGGER_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_TRIGGER_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_TRIGGER_AUTO_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_TRIGGER_AUTO_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Ag34401_get_SYSTEM_IO_TIMEOUT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_SYSTEM_IO_TIMEOUT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Ag34401_set_AC_FREQUENCY_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_ACCURRENT_AUTO_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_ACCURRENT_AUTO_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Ag34401_get_ACCURRENT_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_ACCURRENT_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_ACCURRENT_RANGE_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_ACCURRENT_RANGE_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_ACCURRENT_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_ACCURRENT_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_ACCURRENT_RESOLUTION_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_ACCURRENT_RESOLUTION_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_ACVOLTAGE_AUTO_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_ACVOLTAGE_AUTO_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Ag34401_get_ACVOLTAGE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_ACVOLTAGE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_ACVOLTAGE_RANGE_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_ACVOLTAGE_RANGE_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_ACVOLTAGE_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_ACVOLTAGE_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_ACVOLTAGE_RESOLUTION_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_ACVOLTAGE_RESOLUTION_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_ADVANCED_AUTO_IMPEDANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_ADVANCED_AUTO_IMPEDANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Ag34401_get_ADVANCED_INPUT_TERMINAL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_ADVANCED_STORE_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_ADVANCED_STORE_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Ag34401_get_CALIBRATION_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_CALIBRATION_SECURE_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_CALIBRATION_STRING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );
ViStatus _VI_FUNC Ag34401_set_CALIBRATION_STRING ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue );

ViStatus _VI_FUNC Ag34401_get_CALIBRATION_VALUE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_CALIBRATION_VALUE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_DCCURRENT_AUTO_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_DCCURRENT_AUTO_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Ag34401_get_DCCURRENT_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_DCCURRENT_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_DCCURRENT_RANGE_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_DCCURRENT_RANGE_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_DCCURRENT_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_DCCURRENT_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_DCCURRENT_RESOLUTION_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_DCCURRENT_RESOLUTION_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_DCVOLTAGE_AUTO_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_DCVOLTAGE_AUTO_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Ag34401_get_DCVOLTAGE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_DCVOLTAGE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_DCVOLTAGE_RANGE_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_DCVOLTAGE_RANGE_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_DCVOLTAGE_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_DCVOLTAGE_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_DCVOLTAGE_RESOLUTION_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_DCVOLTAGE_RESOLUTION_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_DCVOLTAGERATIO_INPUT_VOLTAGE_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_DCVOLTAGERATIO_INPUT_VOLTAGE_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_DCVOLTAGERATIO_REFERENCE_VOLTAGE_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_DCVOLTAGERATIO_REFERENCE_VOLTAGE_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_DISPLAY_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_DISPLAY_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Ag34401_get_DISPLAY_TEXT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );
ViStatus _VI_FUNC Ag34401_set_DISPLAY_TEXT ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue );

ViStatus _VI_FUNC Ag34401_get_FREQUENCY_AUTO_VOLTAGE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_FREQUENCY_AUTO_VOLTAGE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Ag34401_get_FREQUENCY_VOLTAGE_RANGE_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_FREQUENCY_VOLTAGE_RANGE_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_MATH_AVERAGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_MATH_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_MATH_D_BM_REF_RESISTANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_MATH_D_BM_REF_RESISTANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_MATH_D_B_REFERENCE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_MATH_D_B_REFERENCE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_MATH_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_MATH_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Ag34401_get_MATH_FUNCTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_MATH_FUNCTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_MATH_LIMIT_LOWER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_MATH_LIMIT_LOWER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_MATH_LIMIT_UPPER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_MATH_LIMIT_UPPER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_MATH_MAXIMUM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_MATH_MINIMUM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_MATH_NULL_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_MATH_NULL_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_RESISTANCE_AUTO_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_RESISTANCE_AUTO_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Ag34401_get_RESISTANCE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_RESISTANCE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_RESISTANCE_RANGE_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_RESISTANCE_RANGE_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_RESISTANCE_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_RESISTANCE_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_RESISTANCE_RESOLUTION_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_RESISTANCE_RESOLUTION_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_STATUS_SERIAL_POLL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Ag34401_get_SYSTEM_BEEPER_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_SYSTEM_BEEPER_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Ag34401_get_SYSTEM_TIMEOUT_MILLISECONDS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_SYSTEM_TIMEOUT_MILLISECONDS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Ag34401_get_SYSTEM_TRACE_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Ag34401_set_SYSTEM_TRACE_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );


