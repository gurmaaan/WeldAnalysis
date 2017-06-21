/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#include "StdAfx.h"

#include "Ag34401.h"
#include "Ag34401.nimbus.h"


///////////////////////////////////////////////////////////////////////////////
//
//	IVI-C auto generated methods (called from NTL)
//

CString GetPrefix()
{
	return _T("Ag34401");
}

void InitializeAttributeMap(CIviCAttributeMap* pMap)
{
	pMap->Add(AG34401_ATTR_SPECIFIC_DRIVER_DESCRIPTION,                Ag34401_get_SPECIFIC_DRIVER_DESCRIPTION,                NULL                                                    );
	pMap->Add(AG34401_ATTR_SPECIFIC_DRIVER_PREFIX,                     Ag34401_get_SPECIFIC_DRIVER_PREFIX,                     NULL                                                    );
	pMap->Add(AG34401_ATTR_SPECIFIC_DRIVER_VENDOR,                     Ag34401_get_SPECIFIC_DRIVER_VENDOR,                     NULL                                                    );
	pMap->Add(AG34401_ATTR_SPECIFIC_DRIVER_REVISION,                   Ag34401_get_SPECIFIC_DRIVER_REVISION,                   NULL                                                    );
	pMap->Add(AG34401_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION,   Ag34401_get_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION,   NULL                                                    );
	pMap->Add(AG34401_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION,   Ag34401_get_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION,   NULL                                                    );
	pMap->Add(AG34401_ATTR_RANGE_CHECK,                                Ag34401_get_RANGE_CHECK,                                Ag34401_set_RANGE_CHECK                                 );
	pMap->Add(AG34401_ATTR_QUERY_INSTRUMENT_STATUS,                    Ag34401_get_QUERY_INSTRUMENT_STATUS,                    Ag34401_set_QUERY_INSTRUMENT_STATUS                     );
	pMap->Add(AG34401_ATTR_CACHE,                                      Ag34401_get_CACHE,                                      Ag34401_set_CACHE                                       );
	pMap->Add(AG34401_ATTR_SIMULATE,                                   Ag34401_get_SIMULATE,                                   Ag34401_set_SIMULATE                                    );
	pMap->Add(AG34401_ATTR_RECORD_COERCIONS,                           Ag34401_get_RECORD_COERCIONS,                           Ag34401_set_RECORD_COERCIONS                            );
	pMap->Add(AG34401_ATTR_INTERCHANGE_CHECK,                          Ag34401_get_INTERCHANGE_CHECK,                          Ag34401_set_INTERCHANGE_CHECK                           );
	pMap->Add(AG34401_ATTR_LOGICAL_NAME,                               Ag34401_get_LOGICAL_NAME,                               NULL                                                    );
	pMap->Add(AG34401_ATTR_IO_RESOURCE_DESCRIPTOR,                     Ag34401_get_IO_RESOURCE_DESCRIPTOR,                     NULL                                                    );
	pMap->Add(AG34401_ATTR_DRIVER_SETUP,                               Ag34401_get_DRIVER_SETUP,                               NULL                                                    );
	pMap->Add(AG34401_ATTR_GROUP_CAPABILITIES,                         Ag34401_get_GROUP_CAPABILITIES,                         NULL                                                    );
	pMap->Add(AG34401_ATTR_SUPPORTED_INSTRUMENT_MODELS,                Ag34401_get_SUPPORTED_INSTRUMENT_MODELS,                NULL                                                    );
	pMap->Add(AG34401_ATTR_INSTRUMENT_FIRMWARE_REVISION,               Ag34401_get_INSTRUMENT_FIRMWARE_REVISION,               NULL                                                    );
	pMap->Add(AG34401_ATTR_INSTRUMENT_MANUFACTURER,                    Ag34401_get_INSTRUMENT_MANUFACTURER,                    NULL                                                    );
	pMap->Add(AG34401_ATTR_INSTRUMENT_MODEL,                           Ag34401_get_INSTRUMENT_MODEL,                           NULL                                                    );
	pMap->Add(AG34401_ATTR_FUNCTION,                                   Ag34401_get_FUNCTION,                                   Ag34401_set_FUNCTION                                    );
	pMap->Add(AG34401_ATTR_RANGE,                                      Ag34401_get_RANGE,                                      Ag34401_set_RANGE                                       );
	pMap->Add(AG34401_ATTR_RESOLUTION_ABSOLUTE,                        Ag34401_get_RESOLUTION_ABSOLUTE,                        Ag34401_set_RESOLUTION_ABSOLUTE                         );
	pMap->Add(AG34401_ATTR_AC_MAX_FREQ,                                Ag34401_get_AC_MAX_FREQ,                                Ag34401_set_AC_MAX_FREQ                                 );
	pMap->Add(AG34401_ATTR_AC_MIN_FREQ,                                Ag34401_get_AC_MIN_FREQ,                                Ag34401_set_AC_MIN_FREQ                                 );
	pMap->Add(AG34401_ATTR_AUTO_RANGE_VALUE,                           Ag34401_get_AUTO_RANGE_VALUE,                           NULL                                                    );
	pMap->Add(AG34401_ATTR_APERTURE_TIME,                              Ag34401_get_APERTURE_TIME,                              NULL                                                    );
	pMap->Add(AG34401_ATTR_APERTURE_TIME_UNITS,                        Ag34401_get_APERTURE_TIME_UNITS,                        NULL                                                    );
	pMap->Add(AG34401_ATTR_AUTO_ZERO,                                  Ag34401_get_AUTO_ZERO,                                  Ag34401_set_AUTO_ZERO                                   );
	pMap->Add(AG34401_ATTR_POWERLINE_FREQ,                             Ag34401_get_POWERLINE_FREQ,                             Ag34401_set_POWERLINE_FREQ                              );
	pMap->Add(AG34401_ATTR_FREQ_VOLTAGE_RANGE,                         Ag34401_get_FREQ_VOLTAGE_RANGE,                         Ag34401_set_FREQ_VOLTAGE_RANGE                          );
	pMap->Add(AG34401_ATTR_TRIGGER_COUNT,                              Ag34401_get_TRIGGER_COUNT,                              Ag34401_set_TRIGGER_COUNT                               );
	pMap->Add(AG34401_ATTR_MEAS_COMPLETE_DEST,                         Ag34401_get_MEAS_COMPLETE_DEST,                         Ag34401_set_MEAS_COMPLETE_DEST                          );
	pMap->Add(AG34401_ATTR_SAMPLE_COUNT,                               Ag34401_get_SAMPLE_COUNT,                               Ag34401_set_SAMPLE_COUNT                                );
	pMap->Add(AG34401_ATTR_SAMPLE_INTERVAL,                            Ag34401_get_SAMPLE_INTERVAL,                            Ag34401_set_SAMPLE_INTERVAL                             );
	pMap->Add(AG34401_ATTR_SAMPLE_TRIGGER,                             Ag34401_get_SAMPLE_TRIGGER,                             Ag34401_set_SAMPLE_TRIGGER                              );
	pMap->Add(AG34401_ATTR_TRIGGER_DELAY,                              Ag34401_get_TRIGGER_DELAY,                              Ag34401_set_TRIGGER_DELAY                               );
	pMap->Add(AG34401_ATTR_TRIGGER_SLOPE,                              Ag34401_get_TRIGGER_SLOPE,                              Ag34401_set_TRIGGER_SLOPE                               );
	pMap->Add(AG34401_ATTR_TRIGGER_SOURCE,                             Ag34401_get_TRIGGER_SOURCE,                             Ag34401_set_TRIGGER_SOURCE                              );
	pMap->Add(AG34401_ATTR_TRIGGER_AUTO_DELAY,                         Ag34401_get_TRIGGER_AUTO_DELAY,                         Ag34401_set_TRIGGER_AUTO_DELAY                          );
	pMap->Add(AG34401_ATTR_SYSTEM_IO_TIMEOUT,                          Ag34401_get_SYSTEM_IO_TIMEOUT,                          Ag34401_set_SYSTEM_IO_TIMEOUT                           );
	pMap->Add(AG34401_ATTR_AC_FREQUENCY_MIN,                           NULL,                                                    Ag34401_set_AC_FREQUENCY_MIN                            );
	pMap->Add(AG34401_ATTR_ACCURRENT_AUTO_RANGE,                       Ag34401_get_ACCURRENT_AUTO_RANGE,                       Ag34401_set_ACCURRENT_AUTO_RANGE                        );
	pMap->Add(AG34401_ATTR_ACCURRENT_RANGE,                            Ag34401_get_ACCURRENT_RANGE,                            Ag34401_set_ACCURRENT_RANGE                             );
	pMap->Add(AG34401_ATTR_ACCURRENT_RANGE_MAX,                        Ag34401_get_ACCURRENT_RANGE_MAX,                        NULL                                                    );
	pMap->Add(AG34401_ATTR_ACCURRENT_RANGE_MIN,                        Ag34401_get_ACCURRENT_RANGE_MIN,                        NULL                                                    );
	pMap->Add(AG34401_ATTR_ACCURRENT_RESOLUTION,                       Ag34401_get_ACCURRENT_RESOLUTION,                       Ag34401_set_ACCURRENT_RESOLUTION                        );
	pMap->Add(AG34401_ATTR_ACCURRENT_RESOLUTION_MAX,                   Ag34401_get_ACCURRENT_RESOLUTION_MAX,                   NULL                                                    );
	pMap->Add(AG34401_ATTR_ACCURRENT_RESOLUTION_MIN,                   Ag34401_get_ACCURRENT_RESOLUTION_MIN,                   NULL                                                    );
	pMap->Add(AG34401_ATTR_ACVOLTAGE_AUTO_RANGE,                       Ag34401_get_ACVOLTAGE_AUTO_RANGE,                       Ag34401_set_ACVOLTAGE_AUTO_RANGE                        );
	pMap->Add(AG34401_ATTR_ACVOLTAGE_RANGE,                            Ag34401_get_ACVOLTAGE_RANGE,                            Ag34401_set_ACVOLTAGE_RANGE                             );
	pMap->Add(AG34401_ATTR_ACVOLTAGE_RANGE_MAX,                        Ag34401_get_ACVOLTAGE_RANGE_MAX,                        NULL                                                    );
	pMap->Add(AG34401_ATTR_ACVOLTAGE_RANGE_MIN,                        Ag34401_get_ACVOLTAGE_RANGE_MIN,                        NULL                                                    );
	pMap->Add(AG34401_ATTR_ACVOLTAGE_RESOLUTION,                       Ag34401_get_ACVOLTAGE_RESOLUTION,                       Ag34401_set_ACVOLTAGE_RESOLUTION                        );
	pMap->Add(AG34401_ATTR_ACVOLTAGE_RESOLUTION_MAX,                   Ag34401_get_ACVOLTAGE_RESOLUTION_MAX,                   NULL                                                    );
	pMap->Add(AG34401_ATTR_ACVOLTAGE_RESOLUTION_MIN,                   Ag34401_get_ACVOLTAGE_RESOLUTION_MIN,                   NULL                                                    );
	pMap->Add(AG34401_ATTR_ADVANCED_AUTO_IMPEDANCE,                    Ag34401_get_ADVANCED_AUTO_IMPEDANCE,                    Ag34401_set_ADVANCED_AUTO_IMPEDANCE                     );
	pMap->Add(AG34401_ATTR_ADVANCED_INPUT_TERMINAL,                    Ag34401_get_ADVANCED_INPUT_TERMINAL,                    NULL                                                    );
	pMap->Add(AG34401_ATTR_ADVANCED_STORE_ENABLED,                     Ag34401_get_ADVANCED_STORE_ENABLED,                     Ag34401_set_ADVANCED_STORE_ENABLED                      );
	pMap->Add(AG34401_ATTR_CALIBRATION_COUNT,                          Ag34401_get_CALIBRATION_COUNT,                          NULL                                                    );
	pMap->Add(AG34401_ATTR_CALIBRATION_SECURE_STATE,                   Ag34401_get_CALIBRATION_SECURE_STATE,                   NULL                                                    );
	pMap->Add(AG34401_ATTR_CALIBRATION_STRING,                         Ag34401_get_CALIBRATION_STRING,                         Ag34401_set_CALIBRATION_STRING                          );
	pMap->Add(AG34401_ATTR_CALIBRATION_VALUE,                          Ag34401_get_CALIBRATION_VALUE,                          Ag34401_set_CALIBRATION_VALUE                           );
	pMap->Add(AG34401_ATTR_DCCURRENT_AUTO_RANGE,                       Ag34401_get_DCCURRENT_AUTO_RANGE,                       Ag34401_set_DCCURRENT_AUTO_RANGE                        );
	pMap->Add(AG34401_ATTR_DCCURRENT_RANGE,                            Ag34401_get_DCCURRENT_RANGE,                            Ag34401_set_DCCURRENT_RANGE                             );
	pMap->Add(AG34401_ATTR_DCCURRENT_RANGE_MAX,                        Ag34401_get_DCCURRENT_RANGE_MAX,                        NULL                                                    );
	pMap->Add(AG34401_ATTR_DCCURRENT_RANGE_MIN,                        Ag34401_get_DCCURRENT_RANGE_MIN,                        NULL                                                    );
	pMap->Add(AG34401_ATTR_DCCURRENT_RESOLUTION,                       Ag34401_get_DCCURRENT_RESOLUTION,                       Ag34401_set_DCCURRENT_RESOLUTION                        );
	pMap->Add(AG34401_ATTR_DCCURRENT_RESOLUTION_MAX,                   Ag34401_get_DCCURRENT_RESOLUTION_MAX,                   NULL                                                    );
	pMap->Add(AG34401_ATTR_DCCURRENT_RESOLUTION_MIN,                   Ag34401_get_DCCURRENT_RESOLUTION_MIN,                   NULL                                                    );
	pMap->Add(AG34401_ATTR_DCVOLTAGE_AUTO_RANGE,                       Ag34401_get_DCVOLTAGE_AUTO_RANGE,                       Ag34401_set_DCVOLTAGE_AUTO_RANGE                        );
	pMap->Add(AG34401_ATTR_DCVOLTAGE_RANGE,                            Ag34401_get_DCVOLTAGE_RANGE,                            Ag34401_set_DCVOLTAGE_RANGE                             );
	pMap->Add(AG34401_ATTR_DCVOLTAGE_RANGE_MAX,                        Ag34401_get_DCVOLTAGE_RANGE_MAX,                        NULL                                                    );
	pMap->Add(AG34401_ATTR_DCVOLTAGE_RANGE_MIN,                        Ag34401_get_DCVOLTAGE_RANGE_MIN,                        NULL                                                    );
	pMap->Add(AG34401_ATTR_DCVOLTAGE_RESOLUTION,                       Ag34401_get_DCVOLTAGE_RESOLUTION,                       Ag34401_set_DCVOLTAGE_RESOLUTION                        );
	pMap->Add(AG34401_ATTR_DCVOLTAGE_RESOLUTION_MAX,                   Ag34401_get_DCVOLTAGE_RESOLUTION_MAX,                   NULL                                                    );
	pMap->Add(AG34401_ATTR_DCVOLTAGE_RESOLUTION_MIN,                   Ag34401_get_DCVOLTAGE_RESOLUTION_MIN,                   NULL                                                    );
	pMap->Add(AG34401_ATTR_DCVOLTAGERATIO_INPUT_VOLTAGE_MAX,           Ag34401_get_DCVOLTAGERATIO_INPUT_VOLTAGE_MAX,           NULL                                                    );
	pMap->Add(AG34401_ATTR_DCVOLTAGERATIO_INPUT_VOLTAGE_MIN,           Ag34401_get_DCVOLTAGERATIO_INPUT_VOLTAGE_MIN,           NULL                                                    );
	pMap->Add(AG34401_ATTR_DCVOLTAGERATIO_REFERENCE_VOLTAGE_MAX,       Ag34401_get_DCVOLTAGERATIO_REFERENCE_VOLTAGE_MAX,       NULL                                                    );
	pMap->Add(AG34401_ATTR_DCVOLTAGERATIO_REFERENCE_VOLTAGE_MIN,       Ag34401_get_DCVOLTAGERATIO_REFERENCE_VOLTAGE_MIN,       NULL                                                    );
	pMap->Add(AG34401_ATTR_DISPLAY_ENABLED,                            Ag34401_get_DISPLAY_ENABLED,                            Ag34401_set_DISPLAY_ENABLED                             );
	pMap->Add(AG34401_ATTR_DISPLAY_TEXT,                               Ag34401_get_DISPLAY_TEXT,                               Ag34401_set_DISPLAY_TEXT                                );
	pMap->Add(AG34401_ATTR_FREQUENCY_AUTO_VOLTAGE_RANGE,               Ag34401_get_FREQUENCY_AUTO_VOLTAGE_RANGE,               Ag34401_set_FREQUENCY_AUTO_VOLTAGE_RANGE                );
	pMap->Add(AG34401_ATTR_FREQUENCY_VOLTAGE_RANGE_MAX,                Ag34401_get_FREQUENCY_VOLTAGE_RANGE_MAX,                NULL                                                    );
	pMap->Add(AG34401_ATTR_FREQUENCY_VOLTAGE_RANGE_MIN,                Ag34401_get_FREQUENCY_VOLTAGE_RANGE_MIN,                NULL                                                    );
	pMap->Add(AG34401_ATTR_MATH_AVERAGE,                               Ag34401_get_MATH_AVERAGE,                               NULL                                                    );
	pMap->Add(AG34401_ATTR_MATH_COUNT,                                 Ag34401_get_MATH_COUNT,                                 NULL                                                    );
	pMap->Add(AG34401_ATTR_MATH_D_BM_REF_RESISTANCE,                   Ag34401_get_MATH_D_BM_REF_RESISTANCE,                   Ag34401_set_MATH_D_BM_REF_RESISTANCE                    );
	pMap->Add(AG34401_ATTR_MATH_D_B_REFERENCE,                         Ag34401_get_MATH_D_B_REFERENCE,                         Ag34401_set_MATH_D_B_REFERENCE                          );
	pMap->Add(AG34401_ATTR_MATH_ENABLED,                               Ag34401_get_MATH_ENABLED,                               Ag34401_set_MATH_ENABLED                                );
	pMap->Add(AG34401_ATTR_MATH_FUNCTION,                              Ag34401_get_MATH_FUNCTION,                              Ag34401_set_MATH_FUNCTION                               );
	pMap->Add(AG34401_ATTR_MATH_LIMIT_LOWER,                           Ag34401_get_MATH_LIMIT_LOWER,                           Ag34401_set_MATH_LIMIT_LOWER                            );
	pMap->Add(AG34401_ATTR_MATH_LIMIT_UPPER,                           Ag34401_get_MATH_LIMIT_UPPER,                           Ag34401_set_MATH_LIMIT_UPPER                            );
	pMap->Add(AG34401_ATTR_MATH_MAXIMUM,                               Ag34401_get_MATH_MAXIMUM,                               NULL                                                    );
	pMap->Add(AG34401_ATTR_MATH_MINIMUM,                               Ag34401_get_MATH_MINIMUM,                               NULL                                                    );
	pMap->Add(AG34401_ATTR_MATH_NULL_OFFSET,                           Ag34401_get_MATH_NULL_OFFSET,                           Ag34401_set_MATH_NULL_OFFSET                            );
	pMap->Add(AG34401_ATTR_RESISTANCE_AUTO_RANGE,                      Ag34401_get_RESISTANCE_AUTO_RANGE,                      Ag34401_set_RESISTANCE_AUTO_RANGE                       );
	pMap->Add(AG34401_ATTR_RESISTANCE_RANGE,                           Ag34401_get_RESISTANCE_RANGE,                           Ag34401_set_RESISTANCE_RANGE                            );
	pMap->Add(AG34401_ATTR_RESISTANCE_RANGE_MAX,                       Ag34401_get_RESISTANCE_RANGE_MAX,                       NULL                                                    );
	pMap->Add(AG34401_ATTR_RESISTANCE_RANGE_MIN,                       Ag34401_get_RESISTANCE_RANGE_MIN,                       NULL                                                    );
	pMap->Add(AG34401_ATTR_RESISTANCE_RESOLUTION,                      Ag34401_get_RESISTANCE_RESOLUTION,                      Ag34401_set_RESISTANCE_RESOLUTION                       );
	pMap->Add(AG34401_ATTR_RESISTANCE_RESOLUTION_MAX,                  Ag34401_get_RESISTANCE_RESOLUTION_MAX,                  NULL                                                    );
	pMap->Add(AG34401_ATTR_RESISTANCE_RESOLUTION_MIN,                  Ag34401_get_RESISTANCE_RESOLUTION_MIN,                  NULL                                                    );
	pMap->Add(AG34401_ATTR_STATUS_SERIAL_POLL,                         Ag34401_get_STATUS_SERIAL_POLL,                         NULL                                                    );
	pMap->Add(AG34401_ATTR_SYSTEM_BEEPER_ENABLED,                      Ag34401_get_SYSTEM_BEEPER_ENABLED,                      Ag34401_set_SYSTEM_BEEPER_ENABLED                       );
	pMap->Add(AG34401_ATTR_SYSTEM_TIMEOUT_MILLISECONDS,                Ag34401_get_SYSTEM_TIMEOUT_MILLISECONDS,                Ag34401_set_SYSTEM_TIMEOUT_MILLISECONDS                 );
	pMap->Add(AG34401_ATTR_SYSTEM_TRACE_ENABLED,                       Ag34401_get_SYSTEM_TRACE_ENABLED,                       Ag34401_set_SYSTEM_TRACE_ENABLED                        );
}

void InitializeErrorMap(CIviCErrorMap* pMap)
{
	pMap->Add(E_IVI_CANNOT_RECOVER,	AG34401_ERROR_CANNOT_RECOVER);
	pMap->Add(E_IVI_INSTRUMENT_STATUS,	AG34401_ERROR_INSTRUMENT_STATUS);
	pMap->Add(E_IVI_CANNOT_OPEN_FILE,	AG34401_ERROR_CANNOT_OPEN_FILE);
	pMap->Add(E_IVI_READING_FILE,	AG34401_ERROR_READING_FILE);
	pMap->Add(E_IVI_WRITING_FILE,	AG34401_ERROR_WRITING_FILE);
	pMap->Add(E_IVI_INVALID_PATHNAME,	AG34401_ERROR_INVALID_PATHNAME);
	pMap->Add(E_IVI_INVALID_VALUE,	AG34401_ERROR_INVALID_VALUE);
	pMap->Add(E_IVI_METHOD_NOT_SUPPORTED,	AG34401_ERROR_FUNCTION_NOT_SUPPORTED);
	pMap->Add(E_IVI_PROPERTY_NOT_SUPPORTED,	AG34401_ERROR_ATTRIBUTE_NOT_SUPPORTED);
	pMap->Add(E_IVI_VALUE_NOT_SUPPORTED,	AG34401_ERROR_VALUE_NOT_SUPPORTED);
	pMap->Add(E_IVI_NOT_INITIALIZED,	AG34401_ERROR_NOT_INITIALIZED);
	pMap->Add(E_IVI_UNKNOWN_CHANNEL_NAME,	AG34401_ERROR_UNKNOWN_CHANNEL_NAME);
	pMap->Add(E_IVI_TOO_MANY_OPEN_FILES,	AG34401_ERROR_TOO_MANY_OPEN_FILES);
	pMap->Add(E_IVI_CHANNEL_NAME_REQUIRED,	AG34401_ERROR_CHANNEL_NAME_REQUIRED);
	pMap->Add(E_IVI_MISSING_OPTION_NAME,	AG34401_ERROR_MISSING_OPTION_NAME);
	pMap->Add(E_IVI_MISSING_OPTION_VALUE,	AG34401_ERROR_MISSING_OPTION_VALUE);
	pMap->Add(E_IVI_BAD_OPTION_NAME,	AG34401_ERROR_BAD_OPTION_NAME);
	pMap->Add(E_IVI_BAD_OPTION_VALUE,	AG34401_ERROR_BAD_OPTION_VALUE);
	pMap->Add(E_IVI_OUT_OF_MEMORY,	AG34401_ERROR_OUT_OF_MEMORY);
	pMap->Add(E_IVI_OPERATION_PENDING,	AG34401_ERROR_OPERATION_PENDING);
	pMap->Add(E_IVI_NULL_POINTER,	AG34401_ERROR_NULL_POINTER);
	pMap->Add(E_IVI_UNEXPECTED_RESPONSE,	AG34401_ERROR_UNEXPECTED_RESPONSE);
	pMap->Add(E_IVI_FILE_NOT_FOUND,	AG34401_ERROR_FILE_NOT_FOUND);
	pMap->Add(E_IVI_INVALID_FILE_FORMAT,	AG34401_ERROR_INVALID_FILE_FORMAT);
	pMap->Add(E_IVI_STATUS_NOT_AVAILABLE,	AG34401_ERROR_STATUS_NOT_AVAILABLE);
	pMap->Add(E_IVI_ID_QUERY_FAILED,	AG34401_ERROR_ID_QUERY_FAILED);
	pMap->Add(E_IVI_RESET_FAILED,	AG34401_ERROR_RESET_FAILED);
	pMap->Add(E_IVI_RESOURCE_UNKNOWN,	AG34401_ERROR_RESOURCE_UNKNOWN);
	pMap->Add(E_IVI_ALREADY_INITIALIZED,	AG34401_ERROR_ALREADY_INITIALIZED);
	pMap->Add(E_IVI_CANNOT_CHANGE_SIMULATION_STATE,	AG34401_ERROR_CANNOT_CHANGE_SIMULATION_STATE);
	pMap->Add(E_IVI_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR,	AG34401_ERROR_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR);
	pMap->Add(E_IVI_INVALID_RANGE_IN_SELECTOR,	AG34401_ERROR_INVALID_RANGE_IN_SELECTOR);
	pMap->Add(E_IVI_UNKNOWN_NAME_IN_SELECTOR,	AG34401_ERROR_UNKOWN_NAME_IN_SELECTOR);
	pMap->Add(E_IVI_BADLY_FORMED_SELECTOR,	AG34401_ERROR_BADLY_FORMED_SELECTOR);
	pMap->Add(E_IVI_UNKNOWN_PHYSICAL_IDENTIFIER,	AG34401_ERROR_UNKNOWN_PHYSICAL_IDENTIFIER);
	pMap->Add(E_IVIDMM_MAX_TIME_EXCEEDED,	AG34401_ERROR_MAX_TIME_EXCEEDED);
	pMap->Add(E_IVIDMM_TRIGGER_NOT_SOFTWARE,	AG34401_ERROR_TRIGGER_NOT_SOFTWARE);
	pMap->Add(E_AGILENT34401_PERSONALITY_NOT_ACTIVE,	AG34401_ERROR_PERSONALITY_NOT_ACTIVE);
	pMap->Add(E_AGILENT34401_PERSONALITY_NOT_INSTALLED,	AG34401_ERROR_PERSONALITY_NOT_INSTALLED);
	pMap->Add(E_AGILENT34401_PERSONALITY_NOT_LICENSED,	AG34401_ERROR_PERSONALITY_NOT_LICENSED);
	pMap->Add(E_AGILENT34401_IO_GENERAL,	AG34401_ERROR_IO_GENERAL);
	pMap->Add(E_AGILENT34401_IO_TIMEOUT,	AG34401_ERROR_IO_TIMEOUT);
	pMap->Add(E_AGILENT34401_MODEL_NOT_SUPPORTED,	AG34401_ERROR_MODEL_NOT_SUPPORTED);
	pMap->Add(E_AGILENT34401_WRAPPED_DRIVER_ERROR,	AG34401_ERROR_WRAPPED_DRIVER_ERROR);
	pMap->Add(E_AGILENT34401_NOT_SUPPORTED,	AG34401_ERROR_NOT_SUPPORTED);
	pMap->Add(S_IVI_SUCCESS,	AG34401_SUCCESS);
	pMap->Add(S_IVI_NSUP_ID_QUERY,	AG34401_WARN_NSUP_ID_QUERY);
	pMap->Add(S_IVI_NSUP_RESET,	AG34401_WARN_NSUP_RESET);
	pMap->Add(S_IVI_NSUP_SELF_TEST,	AG34401_WARN_NSUP_SELF_TEST);
	pMap->Add(S_IVI_NSUP_ERROR_QUERY,	AG34401_WARN_NSUP_ERROR_QUERY);
	pMap->Add(S_IVI_NSUP_REV_QUERY,	AG34401_WARN_NSUP_REV_QUERY);
	pMap->Add(S_IVIDMM_OVER_RANGE,	AG34401_WARN_OVER_RANGE);
}

void InitializeErrorMessageMap(CIviCErrorMessageMap* pMap)
{
	pMap->Add(AG34401_ERROR_CANNOT_RECOVER, _T("Failure cannot recover."));
	pMap->Add(AG34401_ERROR_INSTRUMENT_STATUS, _T("Instrument error detected.  Use ErrorQuery() to determine the error(s)."));
	pMap->Add(AG34401_ERROR_CANNOT_OPEN_FILE, _T("Cannot open file."));
	pMap->Add(AG34401_ERROR_READING_FILE, _T("Error reading file."));
	pMap->Add(AG34401_ERROR_WRITING_FILE, _T("Error writing file."));
	pMap->Add(AG34401_ERROR_INVALID_PATHNAME, _T("The pathname is invalid."));
	pMap->Add(AG34401_ERROR_INVALID_VALUE, _T("Invalid value (%1) for method %2, parameter %3."));
	pMap->Add(AG34401_ERROR_FUNCTION_NOT_SUPPORTED, _T("Does not support this class-compliant feature: method %1"));
	pMap->Add(AG34401_ERROR_ATTRIBUTE_NOT_SUPPORTED, _T("Does not support this class-compliant feature: property %1."));
	pMap->Add(AG34401_ERROR_VALUE_NOT_SUPPORTED, _T("Does not support this class-compliant feature:  (enumeration) value %1 passed as the value for parameter %2 in method %3."));
	pMap->Add(AG34401_ERROR_NOT_INITIALIZED, _T("A connection to the instrument has not been established."));
	pMap->Add(AG34401_ERROR_UNKNOWN_CHANNEL_NAME, _T("Unknown channel name."));
	pMap->Add(AG34401_ERROR_TOO_MANY_OPEN_FILES, _T("Too many files are open."));
	pMap->Add(AG34401_ERROR_CHANNEL_NAME_REQUIRED, _T("A channel name is required."));
	pMap->Add(AG34401_ERROR_MISSING_OPTION_NAME, _T("The option string is missing an option name."));
	pMap->Add(AG34401_ERROR_MISSING_OPTION_VALUE, _T("The option string is missing an option value."));
	pMap->Add(AG34401_ERROR_BAD_OPTION_NAME, _T("The %1 name in the option string is unknown."));
	pMap->Add(AG34401_ERROR_BAD_OPTION_VALUE, _T("The %1 value in the option string is unknown."));
	pMap->Add(AG34401_ERROR_OUT_OF_MEMORY, _T("Could not allocate necessary memory."));
	pMap->Add(AG34401_ERROR_OPERATION_PENDING, _T("Operation in progress."));
	pMap->Add(AG34401_ERROR_NULL_POINTER, _T("Null pointer passed for method %1, parameter %2."));
	pMap->Add(AG34401_ERROR_UNEXPECTED_RESPONSE, _T("Unexpected response from instrument."));
	pMap->Add(AG34401_ERROR_FILE_NOT_FOUND, _T("File not found."));
	pMap->Add(AG34401_ERROR_INVALID_FILE_FORMAT, _T("Invalid file format."));
	pMap->Add(AG34401_ERROR_STATUS_NOT_AVAILABLE, _T("The instrument status is not available."));
	pMap->Add(AG34401_ERROR_ID_QUERY_FAILED, _T("Instrument ID query failed."));
	pMap->Add(AG34401_ERROR_RESET_FAILED, _T("Instrument reset failed."));
	pMap->Add(AG34401_ERROR_RESOURCE_UNKNOWN, _T("Unknown resource."));
	pMap->Add(AG34401_ERROR_ALREADY_INITIALIZED, _T("The driver is already initialized."));
	pMap->Add(AG34401_ERROR_CANNOT_CHANGE_SIMULATION_STATE, _T("The simulation state cannot be changed."));
	pMap->Add(AG34401_ERROR_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR, _T("The number of levels in the selector is not valid for the %1 repeated capability."));
	pMap->Add(AG34401_ERROR_INVALID_RANGE_IN_SELECTOR, _T("The range %1 is not valid for the repeated capability %2."));
	pMap->Add(AG34401_ERROR_UNKOWN_NAME_IN_SELECTOR, _T("Unknown name in selector."));
	pMap->Add(AG34401_ERROR_BADLY_FORMED_SELECTOR, _T("The repeated capability selector is badly-formed."));
	pMap->Add(AG34401_ERROR_UNKNOWN_PHYSICAL_IDENTIFIER, _T("Unknown physical repeated capability selector."));
	pMap->Add(AG34401_ERROR_MAX_TIME_EXCEEDED, _T("Max time exceeded."));
	pMap->Add(AG34401_ERROR_TRIGGER_NOT_SOFTWARE, _T("The trigger source is not set to software trigger."));
	pMap->Add(AG34401_ERROR_PERSONALITY_NOT_ACTIVE, _T("Personality is not active."));
	pMap->Add(AG34401_ERROR_PERSONALITY_NOT_INSTALLED, _T("Personality is not installed."));
	pMap->Add(AG34401_ERROR_PERSONALITY_NOT_LICENSED, _T("Personality is not licensed."));
	pMap->Add(AG34401_ERROR_IO_GENERAL, _T("IO error: %1."));
	pMap->Add(AG34401_ERROR_IO_TIMEOUT, _T("IO timeout error: %1."));
	pMap->Add(AG34401_ERROR_MODEL_NOT_SUPPORTED, _T("Instrument model does not support this feature: %1."));
	pMap->Add(AG34401_ERROR_WRAPPED_DRIVER_ERROR, _T("Error in call to wrapped driver: ViStatus = %1."));
	pMap->Add(AG34401_ERROR_NOT_SUPPORTED, _T("Does not support this feature: %1"));
	pMap->Add(AG34401_ERROR_INVALID_ATTRIBUTE, _T("Attribute ID not recognized."));
	pMap->Add(AG34401_ERROR_TYPES_DO_NOT_MATCH, _T("Wrong attribute accessor invoked for attribute type."));
	pMap->Add(AG34401_ERROR_IVI_ATTR_NOT_WRITABLE, _T("Attribute is read-only."));
	pMap->Add(AG34401_ERROR_IVI_ATTR_NOT_READABLE, _T("Attribute is write-only."));
	pMap->Add(AG34401_ERROR_INVALID_SESSION_HANDLE, _T("Invalid session handle."));
	pMap->Add(AG34401_SUCCESS, _T("Success."));
	pMap->Add(AG34401_WARN_NSUP_ID_QUERY, _T("ID Query is not supported by this instrument."));
	pMap->Add(AG34401_WARN_NSUP_RESET, _T("Reset is not supported by this instrument."));
	pMap->Add(AG34401_WARN_NSUP_SELF_TEST, _T("Self test is not supported by this instrument."));
	pMap->Add(AG34401_WARN_NSUP_ERROR_QUERY, _T("Error query is not supported by this instrument."));
	pMap->Add(AG34401_WARN_NSUP_REV_QUERY, _T("Firmware revision query is not supported by this instrument."));
	pMap->Add(AG34401_WARN_OVER_RANGE, _T("Over Range"));
}

///////////////////////////////////////////////////////////////////////////////
//
//	IVI-C auto generated implementation of functions and attributes
//

ViStatus _VI_FUNC Ag34401_init ( ViRsrc ResourceName, ViBoolean IdQuery, ViBoolean Reset, ViSession* Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_init(ResourceName, IdQuery, Reset, Vi);

	return status;
}

ViStatus _VI_FUNC Ag34401_close ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_close(Vi);

	return status;
}

ViStatus _VI_FUNC Ag34401_InitWithOptions ( ViRsrc ResourceName, ViBoolean IdQuery, ViBoolean Reset, ViConstString OptionsString, ViSession* Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_InitWithOptions(ResourceName, IdQuery, Reset, OptionsString, Vi);

	return status;
}

ViStatus _VI_FUNC Ag34401_revision_query ( ViSession Vi, ViChar DriverRev[], ViChar InstrRev[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_revision_query(Vi, DriverRev, InstrRev);

	return status;
}

ViStatus _VI_FUNC Ag34401_error_message ( ViSession Vi, ViStatus ErrorCode, ViChar ErrorMessage[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_error_message(Vi, ErrorCode, ErrorMessage);

	return status;
}

ViStatus _VI_FUNC Ag34401_GetError ( ViSession Vi, ViStatus* ErrorCode, ViInt32 ErrorDescriptionBufferSize, ViChar ErrorDescription[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetError(Vi, ErrorCode, ErrorDescriptionBufferSize, ErrorDescription);

	return status;
}

ViStatus _VI_FUNC Ag34401_ClearError ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_ClearError(Vi);

	return status;
}

ViStatus _VI_FUNC Ag34401_ClearInterchangeWarnings ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_ClearInterchangeWarnings(Vi);

	return status;
}

ViStatus _VI_FUNC Ag34401_GetNextCoercionRecord ( ViSession Vi, ViInt32 CoercionRecordBufferSize, ViChar CoercionRecord[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetNextCoercionRecord(Vi, CoercionRecordBufferSize, CoercionRecord);

	return status;
}

ViStatus _VI_FUNC Ag34401_GetNextInterchangeWarning ( ViSession Vi, ViInt32 InterchangeWarningBufferSize, ViChar InterchangeWarning[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetNextInterchangeWarning(Vi, InterchangeWarningBufferSize, InterchangeWarning);

	return status;
}

ViStatus _VI_FUNC Ag34401_InvalidateAllAttributes ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_InvalidateAllAttributes(Vi);

	return status;
}

ViStatus _VI_FUNC Ag34401_ResetInterchangeCheck ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_ResetInterchangeCheck(Vi);

	return status;
}

ViStatus _VI_FUNC Ag34401_Disable ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_Disable(Vi);

	return status;
}

ViStatus _VI_FUNC Ag34401_error_query ( ViSession Vi, ViInt32* ErrorCode, ViChar ErrorMessage[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_error_query(Vi, ErrorCode, ErrorMessage);

	return status;
}

ViStatus _VI_FUNC Ag34401_LockSession ( ViSession Vi, ViBoolean* CallerHasLock )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_LockSession(Vi, CallerHasLock);

	return status;
}

ViStatus _VI_FUNC Ag34401_reset ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_reset(Vi);

	return status;
}

ViStatus _VI_FUNC Ag34401_ResetWithDefaults ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_ResetWithDefaults(Vi);

	return status;
}

ViStatus _VI_FUNC Ag34401_self_test ( ViSession Vi, ViInt16* TestResult, ViChar TestMessage[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_self_test(Vi, TestResult, TestMessage);

	return status;
}

ViStatus _VI_FUNC Ag34401_UnlockSession ( ViSession Vi, ViBoolean* CallerHasLock )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_UnlockSession(Vi, CallerHasLock);

	return status;
}

ViStatus _VI_FUNC Ag34401_GetAttributeViInt32 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetAttributeViInt32(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_GetAttributeViInt64 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt64* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetAttributeViInt64(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_GetAttributeViReal64 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViReal64* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetAttributeViReal64(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_GetAttributeViBoolean ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViBoolean* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetAttributeViBoolean(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_GetAttributeViSession ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViSession* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetAttributeViSession(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_GetAttributeViString ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetAttributeViString(Vi, RepCapIdentifier, AttributeID, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_SetAttributeViInt32 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_SetAttributeViInt32(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_SetAttributeViInt64 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_SetAttributeViInt64(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_SetAttributeViReal64 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_SetAttributeViReal64(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_SetAttributeViBoolean ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_SetAttributeViBoolean(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_SetAttributeViSession ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViSession AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_SetAttributeViSession(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_SetAttributeViString ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViConstString AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_SetAttributeViString(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_ConfigureMeasurement ( ViSession Vi, ViInt32 Function, ViReal64 Range, ViReal64 Resolution )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmm> spRoot;
	status = GetDriverInterface(Vi, &spRoot);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Function(Function);
		CParam<ViReal64> _Range(Range);
		CParam<ViReal64> _Resolution(Resolution);
		HRESULT hr = spRoot->Configure((IviDmmFunctionEnum)(long)_Function, _Range, _Resolution);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_ConfigureACBandwidth ( ViSession Vi, ViReal64 MinFreq, ViReal64 MaxFreq )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmAC> spAC;
	status = GetDriverInterface(Vi, &spAC);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _MinFreq(MinFreq);
		CParam<ViReal64> _MaxFreq(MaxFreq);
		HRESULT hr = spAC->ConfigureBandwidth(_MinFreq, _MaxFreq);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_ConfigureTrigger ( ViSession Vi, ViInt32 TriggerSource, ViReal64 TriggerDelay )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _TriggerSource(TriggerSource);
		CParam<ViReal64> _TriggerDelay(TriggerDelay);
		HRESULT hr = spTrigger->Configure((IviDmmTriggerSourceEnum)(long)_TriggerSource, _TriggerDelay);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_ConfigureMultiPoint ( ViSession Vi, ViInt32 TriggerCount, ViInt32 SampleCount, ViInt32 SampleTrigger, ViReal64 SampleInterval )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmMultiPoint> spMultiPoint;
	status = GetDriverInterface(Vi, &spMultiPoint);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _TriggerCount(TriggerCount);
		CParam<ViInt32> _SampleCount(SampleCount);
		CParam<ViInt32> _SampleTrigger(SampleTrigger);
		CParam<ViReal64> _SampleInterval(SampleInterval);
		HRESULT hr = spMultiPoint->Configure(_TriggerCount, _SampleCount, (IviDmmSampleTriggerEnum)(long)_SampleTrigger, _SampleInterval);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_Read ( ViSession Vi, ViInt32 MaxTimeMilliseconds, ViReal64* Reading )
{
	if (Reading == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter Reading is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmMeasurement> spMeasurement;
	status = GetDriverInterface(Vi, &spMeasurement);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _MaxTimeMilliseconds(MaxTimeMilliseconds);
		CParam<ViReal64> _val;
		HRESULT hr = spMeasurement->Read(_MaxTimeMilliseconds, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Reading = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_ReadMultiPoint ( ViSession Vi, ViInt32 MaxTimeMilliseconds, ViInt32 ArraySize, ViReal64 ReadingArray[], ViInt32* ActualPts )
{
	if (ActualPts == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter ActualPts is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmMeasurement> spMeasurement;
	status = GetDriverInterface(Vi, &spMeasurement);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _MaxTimeMilliseconds(MaxTimeMilliseconds);
		CParam<ViReal64[]> _val;
		HRESULT hr = spMeasurement->ReadMultiPoint(_MaxTimeMilliseconds, _val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(ArraySize, ReadingArray, ActualPts);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_Abort ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmMeasurement> spMeasurement;
	status = GetDriverInterface(Vi, &spMeasurement);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spMeasurement->Abort();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_Fetch ( ViSession Vi, ViInt32 MaxTimeMilliseconds, ViReal64* Reading )
{
	if (Reading == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter Reading is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmMeasurement> spMeasurement;
	status = GetDriverInterface(Vi, &spMeasurement);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _MaxTimeMilliseconds(MaxTimeMilliseconds);
		CParam<ViReal64> _val;
		HRESULT hr = spMeasurement->Fetch(_MaxTimeMilliseconds, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Reading = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_FetchMultiPoint ( ViSession Vi, ViInt32 MaxTimeMilliseconds, ViInt32 ArraySize, ViReal64 ReadingArray[], ViInt32* ActualPts )
{
	if (ActualPts == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter ActualPts is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmMeasurement> spMeasurement;
	status = GetDriverInterface(Vi, &spMeasurement);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _MaxTimeMilliseconds(MaxTimeMilliseconds);
		CParam<ViReal64[]> _val;
		HRESULT hr = spMeasurement->FetchMultiPoint(_MaxTimeMilliseconds, _val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(ArraySize, ReadingArray, ActualPts);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_Initiate ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmMeasurement> spMeasurement;
	status = GetDriverInterface(Vi, &spMeasurement);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spMeasurement->Initiate();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_IsOverRange ( ViSession Vi, ViReal64 MeasurementValue, ViBoolean* IsOverRange )
{
	if (IsOverRange == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter IsOverRange is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmMeasurement> spMeasurement;
	status = GetDriverInterface(Vi, &spMeasurement);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _MeasurementValue(MeasurementValue);
		CParam<ViBoolean> _val;
		HRESULT hr = spMeasurement->IsOverRange(_MeasurementValue, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*IsOverRange = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_SendSoftwareTrigger ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmMeasurement> spMeasurement;
	status = GetDriverInterface(Vi, &spMeasurement);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spMeasurement->SendSoftwareTrigger();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_viRead ( ViSession Vi, ViInt64 BufferSize, ViChar Buffer[], ViInt64* ReturnCount )
{
	if (ReturnCount == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter ReturnCount is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401System2> spSystem2;
	status = GetDriverInterface(Vi, &spSystem2);
	if (status == VI_SUCCESS)
	{
		CParam<ViByte[]> _val;
		HRESULT hr = spSystem2->ReadBytes(_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(BufferSize, Buffer, ReturnCount);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_SystemReadString ( ViSession Vi, ViInt32 ValBufferSize, ViChar Val[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401System2> spSystem2;
	status = GetDriverInterface(Vi, &spSystem2);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spSystem2->ReadString(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(Val, ValBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_viWrite ( ViSession Vi, ViInt64 Count, ViChar Buffer[], ViInt64* ReturnCount )
{
	if (ReturnCount == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter ReturnCount is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401System2> spSystem2;
	status = GetDriverInterface(Vi, &spSystem2);
	if (status == VI_SUCCESS)
	{
		CParam<ViByte[]> _Buffer(Buffer, Count);
		CParam<ViInt64> _val;
		HRESULT hr = spSystem2->WriteBytes(_Buffer, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*ReturnCount = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_SystemWriteString ( ViSession Vi, ViConstString Data )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401System2> spSystem2;
	status = GetDriverInterface(Vi, &spSystem2);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Data(Data);
		HRESULT hr = spSystem2->WriteString(_Data);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_ACCurrentConfigure ( ViSession Vi, ViReal64 Range, ViReal64 Resolution )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401ACCurrent> spACCurrent;
	status = GetDriverInterface(Vi, &spACCurrent);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Range(Range);
		CParam<ViReal64> _Resolution(Resolution);
		HRESULT hr = spACCurrent->Configure(_Range, _Resolution);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_ACVoltageConfigure ( ViSession Vi, ViReal64 Range, ViReal64 Resolution )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401ACVoltage> spACVoltage;
	status = GetDriverInterface(Vi, &spACVoltage);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Range(Range);
		CParam<ViReal64> _Resolution(Resolution);
		HRESULT hr = spACVoltage->Configure(_Range, _Resolution);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_CalibrationSecureCode ( ViSession Vi, ViBoolean SecureState, ViConstString Code )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Calibration> spCalibration;
	status = GetDriverInterface(Vi, &spCalibration);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _SecureState(SecureState);
		CParam<ViConstString> _Code(Code);
		HRESULT hr = spCalibration->SecureCode(_SecureState, _Code);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_CalibrationCode ( ViSession Vi, ViConstString Code )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Calibration> spCalibration;
	status = GetDriverInterface(Vi, &spCalibration);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Code(Code);
		HRESULT hr = spCalibration->Code(_Code);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_DCCurrentConfigure ( ViSession Vi, ViReal64 Range, ViReal64 Resolution )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCCurrent> spDCCurrent;
	status = GetDriverInterface(Vi, &spDCCurrent);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Range(Range);
		CParam<ViReal64> _Resolution(Resolution);
		HRESULT hr = spDCCurrent->Configure(_Range, _Resolution);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_DCVoltageConfigure ( ViSession Vi, ViReal64 Range, ViReal64 Resolution )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCVoltage> spDCVoltage;
	status = GetDriverInterface(Vi, &spDCVoltage);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Range(Range);
		CParam<ViReal64> _Resolution(Resolution);
		HRESULT hr = spDCVoltage->Configure(_Range, _Resolution);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_DisplayClear ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Display> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spDisplay->Clear();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_ResistanceConfigure ( ViSession Vi, ViReal64 Range, ViReal64 Resolution )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Resistance> spResistance;
	status = GetDriverInterface(Vi, &spResistance);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Range(Range);
		CParam<ViReal64> _Resolution(Resolution);
		HRESULT hr = spResistance->Configure(_Range, _Resolution);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_StatusQueryRegister ( ViSession Vi, ViInt32 Register, ViInt32 SubRegister, ViInt32* RetVal )
{
	if (RetVal == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter RetVal is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Status> spStatus;
	status = GetDriverInterface(Vi, &spStatus);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Register(Register);
		CParam<ViInt32> _SubRegister(SubRegister);
		CParam<ViInt32> _val;
		HRESULT hr = spStatus->QueryRegister((Agilent34401StatusRegisterEnum)(long)_Register, (Agilent34401StatusSubRegisterEnum)(long)_SubRegister, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*RetVal = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_StatusPreset ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Status> spStatus;
	status = GetDriverInterface(Vi, &spStatus);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spStatus->Preset();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_StatusConfigureRegister ( ViSession Vi, ViInt32 Register, ViInt32 SubRegister, ViInt32 Val )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Status> spStatus;
	status = GetDriverInterface(Vi, &spStatus);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Register(Register);
		CParam<ViInt32> _SubRegister(SubRegister);
		CParam<ViInt32> _Val(Val);
		HRESULT hr = spStatus->ConfigureRegister((Agilent34401StatusRegisterEnum)(long)_Register, (Agilent34401StatusSubRegisterEnum)(long)_SubRegister, _Val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_StatusClear ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Status> spStatus;
	status = GetDriverInterface(Vi, &spStatus);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spStatus->Clear();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_StatusGetRegister ( ViSession Vi, ViInt32 Register, ViInt32 SubRegister, ViInt32* RetVal )
{
	if (RetVal == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter RetVal is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Status> spStatus;
	status = GetDriverInterface(Vi, &spStatus);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Register(Register);
		CParam<ViInt32> _SubRegister(SubRegister);
		CParam<ViInt32> _val;
		HRESULT hr = spStatus->get_Register((Agilent34401StatusRegisterEnum)(long)_Register, (Agilent34401StatusSubRegisterEnum)(long)_SubRegister, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*RetVal = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_StatusSetRegister ( ViSession Vi, ViInt32 Register, ViInt32 SubRegister, ViInt32 Val )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Status> spStatus;
	status = GetDriverInterface(Vi, &spStatus);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Register(Register);
		CParam<ViInt32> _SubRegister(SubRegister);
		CParam<ViInt32> _val(Val);
		HRESULT hr = spStatus->put_Register((Agilent34401StatusRegisterEnum)(long)_Register, (Agilent34401StatusSubRegisterEnum)(long)_SubRegister, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_SystemWaitForOperationComplete ( ViSession Vi, ViInt32 MaxTimeMilliseconds )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401System> spSystem;
	status = GetDriverInterface(Vi, &spSystem);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _MaxTimeMilliseconds(MaxTimeMilliseconds);
		HRESULT hr = spSystem->WaitForOperationComplete(_MaxTimeMilliseconds);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_SystemEnableLocalControls ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401System> spSystem;
	status = GetDriverInterface(Vi, &spSystem);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spSystem->EnableLocalControls();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_SystemDisableLocalControls ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401System> spSystem;
	status = GetDriverInterface(Vi, &spSystem);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spSystem->DisableLocalControls();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_SystemBeep ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401System> spSystem;
	status = GetDriverInterface(Vi, &spSystem);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spSystem->Beep();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_SPECIFIC_DRIVER_DESCRIPTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SPECIFIC_DRIVER_DESCRIPTION(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_get_SPECIFIC_DRIVER_PREFIX ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SPECIFIC_DRIVER_PREFIX(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_get_SPECIFIC_DRIVER_VENDOR ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SPECIFIC_DRIVER_VENDOR(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_get_SPECIFIC_DRIVER_REVISION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SPECIFIC_DRIVER_REVISION(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_get_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_get_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_get_RANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_RANGE_CHECK(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_set_RANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_set_RANGE_CHECK(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_get_QUERY_INSTRUMENT_STATUS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_QUERY_INSTRUMENT_STATUS(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_set_QUERY_INSTRUMENT_STATUS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_set_QUERY_INSTRUMENT_STATUS(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_get_CACHE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_CACHE(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_set_CACHE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_set_CACHE(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_get_SIMULATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SIMULATE(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_set_SIMULATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_set_SIMULATE(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_get_RECORD_COERCIONS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_RECORD_COERCIONS(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_set_RECORD_COERCIONS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_set_RECORD_COERCIONS(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_get_INTERCHANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_INTERCHANGE_CHECK(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_set_INTERCHANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_set_INTERCHANGE_CHECK(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_get_LOGICAL_NAME ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_LOGICAL_NAME(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_get_IO_RESOURCE_DESCRIPTOR ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_IO_RESOURCE_DESCRIPTOR(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_get_DRIVER_SETUP ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_DRIVER_SETUP(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_get_GROUP_CAPABILITIES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_GROUP_CAPABILITIES(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_get_SUPPORTED_INSTRUMENT_MODELS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SUPPORTED_INSTRUMENT_MODELS(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_get_INSTRUMENT_FIRMWARE_REVISION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_INSTRUMENT_FIRMWARE_REVISION(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_get_INSTRUMENT_MANUFACTURER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_INSTRUMENT_MANUFACTURER(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_get_INSTRUMENT_MODEL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_INSTRUMENT_MODEL(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Ag34401_get_FUNCTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmm> spRoot;
	status = GetDriverInterface(Vi, &spRoot);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spRoot->get_Function((IviDmmFunctionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_FUNCTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmm> spRoot;
	status = GetDriverInterface(Vi, &spRoot);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spRoot->put_Function((IviDmmFunctionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmm> spRoot;
	status = GetDriverInterface(Vi, &spRoot);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spRoot->get_Range(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmm> spRoot;
	status = GetDriverInterface(Vi, &spRoot);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spRoot->put_Range(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_RESOLUTION_ABSOLUTE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmm> spRoot;
	status = GetDriverInterface(Vi, &spRoot);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spRoot->get_Resolution(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_RESOLUTION_ABSOLUTE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmm> spRoot;
	status = GetDriverInterface(Vi, &spRoot);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spRoot->put_Resolution(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_AC_MAX_FREQ ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmAC> spAC;
	status = GetDriverInterface(Vi, &spAC);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spAC->get_FrequencyMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_AC_MAX_FREQ ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmAC> spAC;
	status = GetDriverInterface(Vi, &spAC);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spAC->put_FrequencyMax(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_AC_MIN_FREQ ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmAC> spAC;
	status = GetDriverInterface(Vi, &spAC);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spAC->get_FrequencyMin(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_AC_MIN_FREQ ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmAC> spAC;
	status = GetDriverInterface(Vi, &spAC);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spAC->put_FrequencyMin(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_AUTO_RANGE_VALUE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmAdvanced> spAdvanced;
	status = GetDriverInterface(Vi, &spAdvanced);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spAdvanced->get_ActualRange(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_APERTURE_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmAdvanced> spAdvanced;
	status = GetDriverInterface(Vi, &spAdvanced);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spAdvanced->get_ApertureTime(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_APERTURE_TIME_UNITS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmAdvanced> spAdvanced;
	status = GetDriverInterface(Vi, &spAdvanced);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spAdvanced->get_ApertureTimeUnits((IviDmmApertureTimeUnitsEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_AUTO_ZERO ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmAdvanced> spAdvanced;
	status = GetDriverInterface(Vi, &spAdvanced);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spAdvanced->get_AutoZero((IviDmmAutoZeroEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_AUTO_ZERO ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmAdvanced> spAdvanced;
	status = GetDriverInterface(Vi, &spAdvanced);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spAdvanced->put_AutoZero((IviDmmAutoZeroEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_POWERLINE_FREQ ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmAdvanced> spAdvanced;
	status = GetDriverInterface(Vi, &spAdvanced);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spAdvanced->get_PowerlineFrequency(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_POWERLINE_FREQ ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmAdvanced> spAdvanced;
	status = GetDriverInterface(Vi, &spAdvanced);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spAdvanced->put_PowerlineFrequency(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_FREQ_VOLTAGE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmFrequency> spFrequency;
	status = GetDriverInterface(Vi, &spFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spFrequency->get_VoltageRange(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_FREQ_VOLTAGE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmFrequency> spFrequency;
	status = GetDriverInterface(Vi, &spFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spFrequency->put_VoltageRange(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_TRIGGER_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmMultiPoint> spMultiPoint;
	status = GetDriverInterface(Vi, &spMultiPoint);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMultiPoint->get_Count(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_TRIGGER_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmMultiPoint> spMultiPoint;
	status = GetDriverInterface(Vi, &spMultiPoint);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMultiPoint->put_Count(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_MEAS_COMPLETE_DEST ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmMultiPoint> spMultiPoint;
	status = GetDriverInterface(Vi, &spMultiPoint);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMultiPoint->get_MeasurementComplete((IviDmmMeasCompleteDestEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_MEAS_COMPLETE_DEST ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmMultiPoint> spMultiPoint;
	status = GetDriverInterface(Vi, &spMultiPoint);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMultiPoint->put_MeasurementComplete((IviDmmMeasCompleteDestEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_SAMPLE_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmMultiPoint> spMultiPoint;
	status = GetDriverInterface(Vi, &spMultiPoint);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMultiPoint->get_SampleCount(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_SAMPLE_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmMultiPoint> spMultiPoint;
	status = GetDriverInterface(Vi, &spMultiPoint);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMultiPoint->put_SampleCount(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_SAMPLE_INTERVAL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmMultiPoint> spMultiPoint;
	status = GetDriverInterface(Vi, &spMultiPoint);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spMultiPoint->get_SampleInterval(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_SAMPLE_INTERVAL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmMultiPoint> spMultiPoint;
	status = GetDriverInterface(Vi, &spMultiPoint);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spMultiPoint->put_SampleInterval(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_SAMPLE_TRIGGER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmMultiPoint> spMultiPoint;
	status = GetDriverInterface(Vi, &spMultiPoint);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMultiPoint->get_SampleTrigger((IviDmmSampleTriggerEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_SAMPLE_TRIGGER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmMultiPoint> spMultiPoint;
	status = GetDriverInterface(Vi, &spMultiPoint);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMultiPoint->put_SampleTrigger((IviDmmSampleTriggerEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_TRIGGER_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTrigger->get_Delay(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_TRIGGER_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTrigger->put_Delay(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_TRIGGER_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTrigger->get_Slope((IviDmmTriggerSlopeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_TRIGGER_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTrigger->put_Slope((IviDmmTriggerSlopeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_TRIGGER_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTrigger->get_Source((IviDmmTriggerSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_TRIGGER_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviDmmTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTrigger->put_Source((IviDmmTriggerSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_TRIGGER_AUTO_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Trigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spTrigger->get_AutoDelay(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_TRIGGER_AUTO_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Trigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spTrigger->put_AutoDelay(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_SYSTEM_IO_TIMEOUT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401System2> spSystem2;
	status = GetDriverInterface(Vi, &spSystem2);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spSystem2->get_IOTimeout(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_SYSTEM_IO_TIMEOUT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401System2> spSystem2;
	status = GetDriverInterface(Vi, &spSystem2);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spSystem2->put_IOTimeout(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_AC_FREQUENCY_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401AC> spAC;
	status = GetDriverInterface(Vi, &spAC);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spAC->put_FrequencyMin(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_ACCURRENT_AUTO_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401ACCurrent> spACCurrent;
	status = GetDriverInterface(Vi, &spACCurrent);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spACCurrent->get_AutoRange(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_ACCURRENT_AUTO_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401ACCurrent> spACCurrent;
	status = GetDriverInterface(Vi, &spACCurrent);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spACCurrent->put_AutoRange(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_ACCURRENT_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401ACCurrent> spACCurrent;
	status = GetDriverInterface(Vi, &spACCurrent);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spACCurrent->get_Range(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_ACCURRENT_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401ACCurrent> spACCurrent;
	status = GetDriverInterface(Vi, &spACCurrent);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spACCurrent->put_Range(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_ACCURRENT_RANGE_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401ACCurrent> spACCurrent;
	status = GetDriverInterface(Vi, &spACCurrent);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spACCurrent->get_RangeMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_ACCURRENT_RANGE_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401ACCurrent> spACCurrent;
	status = GetDriverInterface(Vi, &spACCurrent);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spACCurrent->get_RangeMin(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_ACCURRENT_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401ACCurrent> spACCurrent;
	status = GetDriverInterface(Vi, &spACCurrent);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spACCurrent->get_Resolution(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_ACCURRENT_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401ACCurrent> spACCurrent;
	status = GetDriverInterface(Vi, &spACCurrent);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spACCurrent->put_Resolution(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_ACCURRENT_RESOLUTION_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401ACCurrent> spACCurrent;
	status = GetDriverInterface(Vi, &spACCurrent);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spACCurrent->get_ResolutionMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_ACCURRENT_RESOLUTION_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401ACCurrent> spACCurrent;
	status = GetDriverInterface(Vi, &spACCurrent);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spACCurrent->get_ResolutionMin(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_ACVOLTAGE_AUTO_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401ACVoltage> spACVoltage;
	status = GetDriverInterface(Vi, &spACVoltage);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spACVoltage->get_AutoRange(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_ACVOLTAGE_AUTO_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401ACVoltage> spACVoltage;
	status = GetDriverInterface(Vi, &spACVoltage);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spACVoltage->put_AutoRange(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_ACVOLTAGE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401ACVoltage> spACVoltage;
	status = GetDriverInterface(Vi, &spACVoltage);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spACVoltage->get_Range(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_ACVOLTAGE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401ACVoltage> spACVoltage;
	status = GetDriverInterface(Vi, &spACVoltage);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spACVoltage->put_Range(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_ACVOLTAGE_RANGE_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401ACVoltage> spACVoltage;
	status = GetDriverInterface(Vi, &spACVoltage);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spACVoltage->get_RangeMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_ACVOLTAGE_RANGE_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401ACVoltage> spACVoltage;
	status = GetDriverInterface(Vi, &spACVoltage);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spACVoltage->get_RangeMin(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_ACVOLTAGE_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401ACVoltage> spACVoltage;
	status = GetDriverInterface(Vi, &spACVoltage);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spACVoltage->get_Resolution(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_ACVOLTAGE_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401ACVoltage> spACVoltage;
	status = GetDriverInterface(Vi, &spACVoltage);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spACVoltage->put_Resolution(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_ACVOLTAGE_RESOLUTION_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401ACVoltage> spACVoltage;
	status = GetDriverInterface(Vi, &spACVoltage);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spACVoltage->get_ResolutionMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_ACVOLTAGE_RESOLUTION_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401ACVoltage> spACVoltage;
	status = GetDriverInterface(Vi, &spACVoltage);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spACVoltage->get_ResolutionMin(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_ADVANCED_AUTO_IMPEDANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Advanced> spAdvanced;
	status = GetDriverInterface(Vi, &spAdvanced);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spAdvanced->get_AutoImpedance(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_ADVANCED_AUTO_IMPEDANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Advanced> spAdvanced;
	status = GetDriverInterface(Vi, &spAdvanced);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spAdvanced->put_AutoImpedance(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_ADVANCED_INPUT_TERMINAL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Advanced> spAdvanced;
	status = GetDriverInterface(Vi, &spAdvanced);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spAdvanced->get_InputTerminal((Agilent34401InputTerminalEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_ADVANCED_STORE_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Advanced> spAdvanced;
	status = GetDriverInterface(Vi, &spAdvanced);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spAdvanced->get_StoreEnabled(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_ADVANCED_STORE_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Advanced> spAdvanced;
	status = GetDriverInterface(Vi, &spAdvanced);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spAdvanced->put_StoreEnabled(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_CALIBRATION_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Calibration> spCalibration;
	status = GetDriverInterface(Vi, &spCalibration);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spCalibration->get_Count(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_CALIBRATION_SECURE_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Calibration> spCalibration;
	status = GetDriverInterface(Vi, &spCalibration);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spCalibration->get_SecureState(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_CALIBRATION_STRING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Calibration> spCalibration;
	status = GetDriverInterface(Vi, &spCalibration);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spCalibration->get_String(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_CALIBRATION_STRING ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Calibration> spCalibration;
	status = GetDriverInterface(Vi, &spCalibration);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _val(AttributeValue);
		HRESULT hr = spCalibration->put_String(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_CALIBRATION_VALUE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Calibration> spCalibration;
	status = GetDriverInterface(Vi, &spCalibration);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCalibration->get_Value(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_CALIBRATION_VALUE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Calibration> spCalibration;
	status = GetDriverInterface(Vi, &spCalibration);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spCalibration->put_Value(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_DCCURRENT_AUTO_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCCurrent> spDCCurrent;
	status = GetDriverInterface(Vi, &spDCCurrent);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spDCCurrent->get_AutoRange(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_DCCURRENT_AUTO_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCCurrent> spDCCurrent;
	status = GetDriverInterface(Vi, &spDCCurrent);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spDCCurrent->put_AutoRange(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_DCCURRENT_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCCurrent> spDCCurrent;
	status = GetDriverInterface(Vi, &spDCCurrent);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spDCCurrent->get_Range(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_DCCURRENT_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCCurrent> spDCCurrent;
	status = GetDriverInterface(Vi, &spDCCurrent);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spDCCurrent->put_Range(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_DCCURRENT_RANGE_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCCurrent> spDCCurrent;
	status = GetDriverInterface(Vi, &spDCCurrent);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spDCCurrent->get_RangeMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_DCCURRENT_RANGE_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCCurrent> spDCCurrent;
	status = GetDriverInterface(Vi, &spDCCurrent);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spDCCurrent->get_RangeMin(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_DCCURRENT_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCCurrent> spDCCurrent;
	status = GetDriverInterface(Vi, &spDCCurrent);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spDCCurrent->get_Resolution(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_DCCURRENT_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCCurrent> spDCCurrent;
	status = GetDriverInterface(Vi, &spDCCurrent);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spDCCurrent->put_Resolution(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_DCCURRENT_RESOLUTION_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCCurrent> spDCCurrent;
	status = GetDriverInterface(Vi, &spDCCurrent);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spDCCurrent->get_ResolutionMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_DCCURRENT_RESOLUTION_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCCurrent> spDCCurrent;
	status = GetDriverInterface(Vi, &spDCCurrent);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spDCCurrent->get_ResolutionMin(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_DCVOLTAGE_AUTO_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCVoltage> spDCVoltage;
	status = GetDriverInterface(Vi, &spDCVoltage);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spDCVoltage->get_AutoRange(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_DCVOLTAGE_AUTO_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCVoltage> spDCVoltage;
	status = GetDriverInterface(Vi, &spDCVoltage);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spDCVoltage->put_AutoRange(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_DCVOLTAGE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCVoltage> spDCVoltage;
	status = GetDriverInterface(Vi, &spDCVoltage);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spDCVoltage->get_Range(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_DCVOLTAGE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCVoltage> spDCVoltage;
	status = GetDriverInterface(Vi, &spDCVoltage);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spDCVoltage->put_Range(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_DCVOLTAGE_RANGE_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCVoltage> spDCVoltage;
	status = GetDriverInterface(Vi, &spDCVoltage);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spDCVoltage->get_RangeMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_DCVOLTAGE_RANGE_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCVoltage> spDCVoltage;
	status = GetDriverInterface(Vi, &spDCVoltage);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spDCVoltage->get_RangeMin(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_DCVOLTAGE_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCVoltage> spDCVoltage;
	status = GetDriverInterface(Vi, &spDCVoltage);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spDCVoltage->get_Resolution(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_DCVOLTAGE_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCVoltage> spDCVoltage;
	status = GetDriverInterface(Vi, &spDCVoltage);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spDCVoltage->put_Resolution(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_DCVOLTAGE_RESOLUTION_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCVoltage> spDCVoltage;
	status = GetDriverInterface(Vi, &spDCVoltage);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spDCVoltage->get_ResolutionMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_DCVOLTAGE_RESOLUTION_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCVoltage> spDCVoltage;
	status = GetDriverInterface(Vi, &spDCVoltage);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spDCVoltage->get_ResolutionMin(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_DCVOLTAGERATIO_INPUT_VOLTAGE_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCVoltageRatio> spDCVoltageRatio;
	status = GetDriverInterface(Vi, &spDCVoltageRatio);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spDCVoltageRatio->get_InputVoltageMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_DCVOLTAGERATIO_INPUT_VOLTAGE_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCVoltageRatio> spDCVoltageRatio;
	status = GetDriverInterface(Vi, &spDCVoltageRatio);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spDCVoltageRatio->get_InputVoltageMin(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_DCVOLTAGERATIO_REFERENCE_VOLTAGE_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCVoltageRatio> spDCVoltageRatio;
	status = GetDriverInterface(Vi, &spDCVoltageRatio);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spDCVoltageRatio->get_ReferenceVoltageMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_DCVOLTAGERATIO_REFERENCE_VOLTAGE_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401DCVoltageRatio> spDCVoltageRatio;
	status = GetDriverInterface(Vi, &spDCVoltageRatio);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spDCVoltageRatio->get_ReferenceVoltageMin(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_DISPLAY_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Display> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spDisplay->get_Enabled(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_DISPLAY_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Display> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spDisplay->put_Enabled(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_DISPLAY_TEXT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Display> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spDisplay->get_Text(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_DISPLAY_TEXT ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Display> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _val(AttributeValue);
		HRESULT hr = spDisplay->put_Text(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_FREQUENCY_AUTO_VOLTAGE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Frequency> spFrequency;
	status = GetDriverInterface(Vi, &spFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spFrequency->get_AutoVoltageRange(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_FREQUENCY_AUTO_VOLTAGE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Frequency> spFrequency;
	status = GetDriverInterface(Vi, &spFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spFrequency->put_AutoVoltageRange(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_FREQUENCY_VOLTAGE_RANGE_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Frequency> spFrequency;
	status = GetDriverInterface(Vi, &spFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spFrequency->get_VoltageRangeMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_FREQUENCY_VOLTAGE_RANGE_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Frequency> spFrequency;
	status = GetDriverInterface(Vi, &spFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spFrequency->get_VoltageRangeMin(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_MATH_AVERAGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Math> spMath;
	status = GetDriverInterface(Vi, &spMath);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spMath->get_Average(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_MATH_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Math> spMath;
	status = GetDriverInterface(Vi, &spMath);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMath->get_Count(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_MATH_D_BM_REF_RESISTANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Math> spMath;
	status = GetDriverInterface(Vi, &spMath);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMath->get_dBmRefResistance((Agilent34401dBmRefResistanceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_MATH_D_BM_REF_RESISTANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Math> spMath;
	status = GetDriverInterface(Vi, &spMath);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMath->put_dBmRefResistance((Agilent34401dBmRefResistanceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_MATH_D_B_REFERENCE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Math> spMath;
	status = GetDriverInterface(Vi, &spMath);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spMath->get_dBReference(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_MATH_D_B_REFERENCE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Math> spMath;
	status = GetDriverInterface(Vi, &spMath);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spMath->put_dBReference(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_MATH_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Math> spMath;
	status = GetDriverInterface(Vi, &spMath);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spMath->get_Enabled(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_MATH_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Math> spMath;
	status = GetDriverInterface(Vi, &spMath);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spMath->put_Enabled(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_MATH_FUNCTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Math> spMath;
	status = GetDriverInterface(Vi, &spMath);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMath->get_Function((Agilent34401MathFunctionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_MATH_FUNCTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Math> spMath;
	status = GetDriverInterface(Vi, &spMath);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMath->put_Function((Agilent34401MathFunctionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_MATH_LIMIT_LOWER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Math> spMath;
	status = GetDriverInterface(Vi, &spMath);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spMath->get_LimitLower(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_MATH_LIMIT_LOWER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Math> spMath;
	status = GetDriverInterface(Vi, &spMath);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spMath->put_LimitLower(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_MATH_LIMIT_UPPER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Math> spMath;
	status = GetDriverInterface(Vi, &spMath);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spMath->get_LimitUpper(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_MATH_LIMIT_UPPER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Math> spMath;
	status = GetDriverInterface(Vi, &spMath);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spMath->put_LimitUpper(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_MATH_MAXIMUM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Math> spMath;
	status = GetDriverInterface(Vi, &spMath);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spMath->get_Maximum(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_MATH_MINIMUM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Math> spMath;
	status = GetDriverInterface(Vi, &spMath);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spMath->get_Minimum(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_MATH_NULL_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Math> spMath;
	status = GetDriverInterface(Vi, &spMath);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spMath->get_NullOffset(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_MATH_NULL_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Math> spMath;
	status = GetDriverInterface(Vi, &spMath);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spMath->put_NullOffset(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_RESISTANCE_AUTO_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Resistance> spResistance;
	status = GetDriverInterface(Vi, &spResistance);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spResistance->get_AutoRange(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_RESISTANCE_AUTO_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Resistance> spResistance;
	status = GetDriverInterface(Vi, &spResistance);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spResistance->put_AutoRange(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_RESISTANCE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Resistance> spResistance;
	status = GetDriverInterface(Vi, &spResistance);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spResistance->get_Range(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_RESISTANCE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Resistance> spResistance;
	status = GetDriverInterface(Vi, &spResistance);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spResistance->put_Range(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_RESISTANCE_RANGE_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Resistance> spResistance;
	status = GetDriverInterface(Vi, &spResistance);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spResistance->get_RangeMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_RESISTANCE_RANGE_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Resistance> spResistance;
	status = GetDriverInterface(Vi, &spResistance);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spResistance->get_RangeMin(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_RESISTANCE_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Resistance> spResistance;
	status = GetDriverInterface(Vi, &spResistance);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spResistance->get_Resolution(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_RESISTANCE_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Resistance> spResistance;
	status = GetDriverInterface(Vi, &spResistance);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spResistance->put_Resolution(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_RESISTANCE_RESOLUTION_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Resistance> spResistance;
	status = GetDriverInterface(Vi, &spResistance);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spResistance->get_ResolutionMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_RESISTANCE_RESOLUTION_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Resistance> spResistance;
	status = GetDriverInterface(Vi, &spResistance);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spResistance->get_ResolutionMin(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_STATUS_SERIAL_POLL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401Status> spStatus;
	status = GetDriverInterface(Vi, &spStatus);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spStatus->get_SerialPoll(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_SYSTEM_BEEPER_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401System> spSystem;
	status = GetDriverInterface(Vi, &spSystem);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spSystem->get_BeeperEnabled(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_SYSTEM_BEEPER_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401System> spSystem;
	status = GetDriverInterface(Vi, &spSystem);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spSystem->put_BeeperEnabled(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_SYSTEM_TIMEOUT_MILLISECONDS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401System> spSystem;
	status = GetDriverInterface(Vi, &spSystem);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spSystem->get_TimeoutMilliseconds(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_SYSTEM_TIMEOUT_MILLISECONDS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401System> spSystem;
	status = GetDriverInterface(Vi, &spSystem);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spSystem->put_TimeoutMilliseconds(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_get_SYSTEM_TRACE_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, AG34401_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401System> spSystem;
	status = GetDriverInterface(Vi, &spSystem);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spSystem->get_TraceEnabled(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Ag34401_set_SYSTEM_TRACE_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IAgilent34401System> spSystem;
	status = GetDriverInterface(Vi, &spSystem);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spSystem->put_TraceEnabled(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}


