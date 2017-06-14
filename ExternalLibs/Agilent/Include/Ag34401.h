/******************************************************************************
 *                                                                         
 * Copyright Keysight Technologies 2003-2014
 *
 *****************************************************************************/

#ifndef __AG34401_HEADER
#define __AG34401_HEADER

#include <ivivisatype.h>

#if defined(__cplusplus) || defined(__cplusplus__)
extern "C" {
#endif

/**************************************************************************** 
 *---------------------------- Attribute Defines ---------------------------* 
 ****************************************************************************/
#ifndef IVI_ATTR_BASE
#define IVI_ATTR_BASE                 1000000
#endif

#ifndef IVI_INHERENT_ATTR_BASE		        
#define IVI_INHERENT_ATTR_BASE        (IVI_ATTR_BASE +  50000)   /* base for inherent capability attributes */
#endif

#ifndef IVI_CLASS_ATTR_BASE           
#define IVI_CLASS_ATTR_BASE           (IVI_ATTR_BASE + 250000)   /* base for IVI-defined class attributes */
#endif

#ifndef IVI_LXISYNC_ATTR_BASE         
#define IVI_LXISYNC_ATTR_BASE         (IVI_ATTR_BASE + 950000)   /* base for IviLxiSync attributes */
#endif

#ifndef IVI_SPECIFIC_ATTR_BASE        
#define IVI_SPECIFIC_ATTR_BASE        (IVI_ATTR_BASE + 150000)   /* base for attributes of specific drivers */
#endif


/*===== IVI Inherent Instrument Attributes ==============================*/    

/*- Driver Identification */

#define AG34401_ATTR_SPECIFIC_DRIVER_DESCRIPTION              (IVI_INHERENT_ATTR_BASE + 514L)  /* ViString, read-only */
#define AG34401_ATTR_SPECIFIC_DRIVER_PREFIX                   (IVI_INHERENT_ATTR_BASE + 302L)  /* ViString, read-only */
#define AG34401_ATTR_SPECIFIC_DRIVER_VENDOR                   (IVI_INHERENT_ATTR_BASE + 513L)  /* ViString, read-only */
#define AG34401_ATTR_SPECIFIC_DRIVER_REVISION                 (IVI_INHERENT_ATTR_BASE + 551L)  /* ViString, read-only */
#define AG34401_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION (IVI_INHERENT_ATTR_BASE + 515L)  /* ViInt32, read-only */
#define AG34401_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION (IVI_INHERENT_ATTR_BASE + 516L)  /* ViInt32, read-only */

/*- User Options */

#define AG34401_ATTR_RANGE_CHECK                            (IVI_INHERENT_ATTR_BASE + 2L)  /* ViBoolean, read-write */
#define AG34401_ATTR_QUERY_INSTRUMENT_STATUS                (IVI_INHERENT_ATTR_BASE + 3L)  /* ViBoolean, read-write */
#define AG34401_ATTR_CACHE                                  (IVI_INHERENT_ATTR_BASE + 4L)  /* ViBoolean, read-write */
#define AG34401_ATTR_SIMULATE                               (IVI_INHERENT_ATTR_BASE + 5L)  /* ViBoolean, read-write */
#define AG34401_ATTR_RECORD_COERCIONS                       (IVI_INHERENT_ATTR_BASE + 6L)  /* ViBoolean, read-write */
#define AG34401_ATTR_INTERCHANGE_CHECK                      (IVI_INHERENT_ATTR_BASE + 21L)  /* ViBoolean, read-write */

/*- Advanced Session Information */

#define AG34401_ATTR_LOGICAL_NAME                           (IVI_INHERENT_ATTR_BASE + 305L)  /* ViString, read-only */
#define AG34401_ATTR_IO_RESOURCE_DESCRIPTOR                 (IVI_INHERENT_ATTR_BASE + 304L)  /* ViString, read-only */
#define AG34401_ATTR_DRIVER_SETUP                           (IVI_INHERENT_ATTR_BASE + 7L)  /* ViString, read-only */

/*- Driver Capabilities */

#define AG34401_ATTR_GROUP_CAPABILITIES                     (IVI_INHERENT_ATTR_BASE + 401L)  /* ViString, read-only */
#define AG34401_ATTR_SUPPORTED_INSTRUMENT_MODELS            (IVI_INHERENT_ATTR_BASE + 327L)  /* ViString, read-only */

/*- Instrument Identification */

#define AG34401_ATTR_INSTRUMENT_FIRMWARE_REVISION           (IVI_INHERENT_ATTR_BASE + 510L)  /* ViString, read-only */
#define AG34401_ATTR_INSTRUMENT_MANUFACTURER                (IVI_INHERENT_ATTR_BASE + 511L)  /* ViString, read-only */
#define AG34401_ATTR_INSTRUMENT_MODEL                       (IVI_INHERENT_ATTR_BASE + 512L)  /* ViString, read-only */


/*===== Instrument-Specific Attributes =====================================*/

/*- Basic Operation */

#define AG34401_ATTR_FUNCTION                               (IVI_CLASS_ATTR_BASE + 1L)  /* ViInt32, read-write */
#define AG34401_ATTR_RANGE                                  (IVI_CLASS_ATTR_BASE + 2L)  /* ViReal64, read-write */
#define AG34401_ATTR_RESOLUTION_ABSOLUTE                    (IVI_CLASS_ATTR_BASE + 8L)  /* ViReal64, read-write */

/*- AC Measurements */

#define AG34401_ATTR_AC_MAX_FREQ                            (IVI_CLASS_ATTR_BASE + 7L)  /* ViReal64, read-write */
#define AG34401_ATTR_AC_MIN_FREQ                            (IVI_CLASS_ATTR_BASE + 6L)  /* ViReal64, read-write */

/*- Configuration Information */

#define AG34401_ATTR_AUTO_RANGE_VALUE                       (IVI_CLASS_ATTR_BASE + 331L)  /* ViReal64, read-only */
#define AG34401_ATTR_APERTURE_TIME                          (IVI_CLASS_ATTR_BASE + 321L)  /* ViReal64, read-only */
#define AG34401_ATTR_APERTURE_TIME_UNITS                    (IVI_CLASS_ATTR_BASE + 322L)  /* ViInt32, read-only */

/*- Measurement Operation Options */

#define AG34401_ATTR_AUTO_ZERO                              (IVI_CLASS_ATTR_BASE + 332L)  /* ViInt32, read-write */
#define AG34401_ATTR_POWERLINE_FREQ                         (IVI_CLASS_ATTR_BASE + 333L)  /* ViReal64, read-write */

/*- Frequency Measurements */

#define AG34401_ATTR_FREQ_VOLTAGE_RANGE                     (IVI_CLASS_ATTR_BASE + 101L)  /* ViReal64, read-write */

/*- Multi-Point Acquisition */

#define AG34401_ATTR_TRIGGER_COUNT                          (IVI_CLASS_ATTR_BASE + 304L)  /* ViInt32, read-write */
#define AG34401_ATTR_MEAS_COMPLETE_DEST                     (IVI_CLASS_ATTR_BASE + 305L)  /* ViInt32, read-write */
#define AG34401_ATTR_SAMPLE_COUNT                           (IVI_CLASS_ATTR_BASE + 301L)  /* ViInt32, read-write */
#define AG34401_ATTR_SAMPLE_INTERVAL                        (IVI_CLASS_ATTR_BASE + 303L)  /* ViReal64, read-write */
#define AG34401_ATTR_SAMPLE_TRIGGER                         (IVI_CLASS_ATTR_BASE + 302L)  /* ViInt32, read-write */

/*- Trigger */

#define AG34401_ATTR_TRIGGER_DELAY                          (IVI_CLASS_ATTR_BASE + 5L)  /* ViReal64, read-write */
#define AG34401_ATTR_TRIGGER_SLOPE                          (IVI_CLASS_ATTR_BASE + 334L)  /* ViInt32, read-write */
#define AG34401_ATTR_TRIGGER_SOURCE                         (IVI_CLASS_ATTR_BASE + 4L)  /* ViInt32, read-write */
#define AG34401_ATTR_TRIGGER_AUTO_DELAY                     (IVI_SPECIFIC_ATTR_BASE + 77L)  /* ViBoolean, read-write */

/*- System */

#define AG34401_ATTR_SYSTEM_IO_TIMEOUT                      (IVI_SPECIFIC_ATTR_BASE + 78L)  /* ViInt32, read-write */

/*- AC */

#define AG34401_ATTR_AC_FREQUENCY_MIN                       (IVI_SPECIFIC_ATTR_BASE + 3L)  /* ViReal64, write-only */

/*- ACCurrent */

#define AG34401_ATTR_ACCURRENT_AUTO_RANGE                   (IVI_SPECIFIC_ATTR_BASE + 4L)  /* ViBoolean, read-write */
#define AG34401_ATTR_ACCURRENT_RANGE                        (IVI_SPECIFIC_ATTR_BASE + 5L)  /* ViReal64, read-write */
#define AG34401_ATTR_ACCURRENT_RANGE_MAX                    (IVI_SPECIFIC_ATTR_BASE + 6L)  /* ViReal64, read-only */
#define AG34401_ATTR_ACCURRENT_RANGE_MIN                    (IVI_SPECIFIC_ATTR_BASE + 7L)  /* ViReal64, read-only */
#define AG34401_ATTR_ACCURRENT_RESOLUTION                   (IVI_SPECIFIC_ATTR_BASE + 8L)  /* ViReal64, read-write */
#define AG34401_ATTR_ACCURRENT_RESOLUTION_MAX               (IVI_SPECIFIC_ATTR_BASE + 9L)  /* ViReal64, read-only */
#define AG34401_ATTR_ACCURRENT_RESOLUTION_MIN               (IVI_SPECIFIC_ATTR_BASE + 10L)  /* ViReal64, read-only */

/*- ACVoltage */

#define AG34401_ATTR_ACVOLTAGE_AUTO_RANGE                   (IVI_SPECIFIC_ATTR_BASE + 11L)  /* ViBoolean, read-write */
#define AG34401_ATTR_ACVOLTAGE_RANGE                        (IVI_SPECIFIC_ATTR_BASE + 12L)  /* ViReal64, read-write */
#define AG34401_ATTR_ACVOLTAGE_RANGE_MAX                    (IVI_SPECIFIC_ATTR_BASE + 13L)  /* ViReal64, read-only */
#define AG34401_ATTR_ACVOLTAGE_RANGE_MIN                    (IVI_SPECIFIC_ATTR_BASE + 14L)  /* ViReal64, read-only */
#define AG34401_ATTR_ACVOLTAGE_RESOLUTION                   (IVI_SPECIFIC_ATTR_BASE + 15L)  /* ViReal64, read-write */
#define AG34401_ATTR_ACVOLTAGE_RESOLUTION_MAX               (IVI_SPECIFIC_ATTR_BASE + 16L)  /* ViReal64, read-only */
#define AG34401_ATTR_ACVOLTAGE_RESOLUTION_MIN               (IVI_SPECIFIC_ATTR_BASE + 17L)  /* ViReal64, read-only */

/*- Advanced */

#define AG34401_ATTR_ADVANCED_AUTO_IMPEDANCE                (IVI_SPECIFIC_ATTR_BASE + 21L)  /* ViBoolean, read-write */
#define AG34401_ATTR_ADVANCED_INPUT_TERMINAL                (IVI_SPECIFIC_ATTR_BASE + 23L)  /* ViInt32, read-only */
#define AG34401_ATTR_ADVANCED_STORE_ENABLED                 (IVI_SPECIFIC_ATTR_BASE + 25L)  /* ViBoolean, read-write */

/*- Calibration */

#define AG34401_ATTR_CALIBRATION_COUNT                      (IVI_SPECIFIC_ATTR_BASE + 26L)  /* ViInt32, read-only */
#define AG34401_ATTR_CALIBRATION_SECURE_STATE               (IVI_SPECIFIC_ATTR_BASE + 27L)  /* ViBoolean, read-only */
#define AG34401_ATTR_CALIBRATION_STRING                     (IVI_SPECIFIC_ATTR_BASE + 28L)  /* ViString, read-write */
#define AG34401_ATTR_CALIBRATION_VALUE                      (IVI_SPECIFIC_ATTR_BASE + 29L)  /* ViReal64, read-write */

/*- DCCurrent */

#define AG34401_ATTR_DCCURRENT_AUTO_RANGE                   (IVI_SPECIFIC_ATTR_BASE + 30L)  /* ViBoolean, read-write */
#define AG34401_ATTR_DCCURRENT_RANGE                        (IVI_SPECIFIC_ATTR_BASE + 31L)  /* ViReal64, read-write */
#define AG34401_ATTR_DCCURRENT_RANGE_MAX                    (IVI_SPECIFIC_ATTR_BASE + 32L)  /* ViReal64, read-only */
#define AG34401_ATTR_DCCURRENT_RANGE_MIN                    (IVI_SPECIFIC_ATTR_BASE + 33L)  /* ViReal64, read-only */
#define AG34401_ATTR_DCCURRENT_RESOLUTION                   (IVI_SPECIFIC_ATTR_BASE + 34L)  /* ViReal64, read-write */
#define AG34401_ATTR_DCCURRENT_RESOLUTION_MAX               (IVI_SPECIFIC_ATTR_BASE + 35L)  /* ViReal64, read-only */
#define AG34401_ATTR_DCCURRENT_RESOLUTION_MIN               (IVI_SPECIFIC_ATTR_BASE + 36L)  /* ViReal64, read-only */

/*- DCVoltage */

#define AG34401_ATTR_DCVOLTAGE_AUTO_RANGE                   (IVI_SPECIFIC_ATTR_BASE + 37L)  /* ViBoolean, read-write */
#define AG34401_ATTR_DCVOLTAGE_RANGE                        (IVI_SPECIFIC_ATTR_BASE + 38L)  /* ViReal64, read-write */
#define AG34401_ATTR_DCVOLTAGE_RANGE_MAX                    (IVI_SPECIFIC_ATTR_BASE + 39L)  /* ViReal64, read-only */
#define AG34401_ATTR_DCVOLTAGE_RANGE_MIN                    (IVI_SPECIFIC_ATTR_BASE + 40L)  /* ViReal64, read-only */
#define AG34401_ATTR_DCVOLTAGE_RESOLUTION                   (IVI_SPECIFIC_ATTR_BASE + 41L)  /* ViReal64, read-write */
#define AG34401_ATTR_DCVOLTAGE_RESOLUTION_MAX               (IVI_SPECIFIC_ATTR_BASE + 42L)  /* ViReal64, read-only */
#define AG34401_ATTR_DCVOLTAGE_RESOLUTION_MIN               (IVI_SPECIFIC_ATTR_BASE + 43L)  /* ViReal64, read-only */

/*- DCVoltageRatio */

#define AG34401_ATTR_DCVOLTAGERATIO_INPUT_VOLTAGE_MAX       (IVI_SPECIFIC_ATTR_BASE + 44L)  /* ViReal64, read-only */
#define AG34401_ATTR_DCVOLTAGERATIO_INPUT_VOLTAGE_MIN       (IVI_SPECIFIC_ATTR_BASE + 45L)  /* ViReal64, read-only */
#define AG34401_ATTR_DCVOLTAGERATIO_REFERENCE_VOLTAGE_MAX   (IVI_SPECIFIC_ATTR_BASE + 46L)  /* ViReal64, read-only */
#define AG34401_ATTR_DCVOLTAGERATIO_REFERENCE_VOLTAGE_MIN   (IVI_SPECIFIC_ATTR_BASE + 47L)  /* ViReal64, read-only */

/*- Display */

#define AG34401_ATTR_DISPLAY_ENABLED                        (IVI_SPECIFIC_ATTR_BASE + 48L)  /* ViBoolean, read-write */
#define AG34401_ATTR_DISPLAY_TEXT                           (IVI_SPECIFIC_ATTR_BASE + 49L)  /* ViString, read-write */

/*- Frequency */

#define AG34401_ATTR_FREQUENCY_AUTO_VOLTAGE_RANGE           (IVI_SPECIFIC_ATTR_BASE + 50L)  /* ViBoolean, read-write */
#define AG34401_ATTR_FREQUENCY_VOLTAGE_RANGE_MAX            (IVI_SPECIFIC_ATTR_BASE + 52L)  /* ViReal64, read-only */
#define AG34401_ATTR_FREQUENCY_VOLTAGE_RANGE_MIN            (IVI_SPECIFIC_ATTR_BASE + 53L)  /* ViReal64, read-only */

/*- Math */

#define AG34401_ATTR_MATH_AVERAGE                           (IVI_SPECIFIC_ATTR_BASE + 54L)  /* ViReal64, read-only */
#define AG34401_ATTR_MATH_COUNT                             (IVI_SPECIFIC_ATTR_BASE + 55L)  /* ViInt32, read-only */
#define AG34401_ATTR_MATH_D_BM_REF_RESISTANCE               (IVI_SPECIFIC_ATTR_BASE + 56L)  /* ViInt32, read-write */
#define AG34401_ATTR_MATH_D_B_REFERENCE                     (IVI_SPECIFIC_ATTR_BASE + 57L)  /* ViReal64, read-write */
#define AG34401_ATTR_MATH_ENABLED                           (IVI_SPECIFIC_ATTR_BASE + 58L)  /* ViBoolean, read-write */
#define AG34401_ATTR_MATH_FUNCTION                          (IVI_SPECIFIC_ATTR_BASE + 59L)  /* ViInt32, read-write */
#define AG34401_ATTR_MATH_LIMIT_LOWER                       (IVI_SPECIFIC_ATTR_BASE + 60L)  /* ViReal64, read-write */
#define AG34401_ATTR_MATH_LIMIT_UPPER                       (IVI_SPECIFIC_ATTR_BASE + 61L)  /* ViReal64, read-write */
#define AG34401_ATTR_MATH_MAXIMUM                           (IVI_SPECIFIC_ATTR_BASE + 62L)  /* ViReal64, read-only */
#define AG34401_ATTR_MATH_MINIMUM                           (IVI_SPECIFIC_ATTR_BASE + 63L)  /* ViReal64, read-only */
#define AG34401_ATTR_MATH_NULL_OFFSET                       (IVI_SPECIFIC_ATTR_BASE + 64L)  /* ViReal64, read-write */

/*- Resistance */

#define AG34401_ATTR_RESISTANCE_AUTO_RANGE                  (IVI_SPECIFIC_ATTR_BASE + 65L)  /* ViBoolean, read-write */
#define AG34401_ATTR_RESISTANCE_RANGE                       (IVI_SPECIFIC_ATTR_BASE + 66L)  /* ViReal64, read-write */
#define AG34401_ATTR_RESISTANCE_RANGE_MAX                   (IVI_SPECIFIC_ATTR_BASE + 67L)  /* ViReal64, read-only */
#define AG34401_ATTR_RESISTANCE_RANGE_MIN                   (IVI_SPECIFIC_ATTR_BASE + 68L)  /* ViReal64, read-only */
#define AG34401_ATTR_RESISTANCE_RESOLUTION                  (IVI_SPECIFIC_ATTR_BASE + 69L)  /* ViReal64, read-write */
#define AG34401_ATTR_RESISTANCE_RESOLUTION_MAX              (IVI_SPECIFIC_ATTR_BASE + 70L)  /* ViReal64, read-only */
#define AG34401_ATTR_RESISTANCE_RESOLUTION_MIN              (IVI_SPECIFIC_ATTR_BASE + 71L)  /* ViReal64, read-only */

/*- Status */

#define AG34401_ATTR_STATUS_SERIAL_POLL                     (IVI_SPECIFIC_ATTR_BASE + 72L)  /* ViInt32, read-only */

/*- System */

#define AG34401_ATTR_SYSTEM_BEEPER_ENABLED                  (IVI_SPECIFIC_ATTR_BASE + 74L)  /* ViBoolean, read-write */
#define AG34401_ATTR_SYSTEM_TIMEOUT_MILLISECONDS            (IVI_SPECIFIC_ATTR_BASE + 75L)  /* ViInt32, read-write */
#define AG34401_ATTR_SYSTEM_TRACE_ENABLED                   (IVI_SPECIFIC_ATTR_BASE + 76L)  /* ViBoolean, read-write */


/**************************************************************************** 
 *------------------------ Attribute Value Defines -------------------------* 
 ****************************************************************************/

/*- Defined values for 
	attribute AG34401_ATTR_FUNCTION
	parameter Function in function Ag34401_ConfigureMeasurement */

#define AG34401_VAL_DC_VOLTS                                1
#define AG34401_VAL_AC_VOLTS                                2
#define AG34401_VAL_DC_CURRENT                              3
#define AG34401_VAL_AC_CURRENT                              4
#define AG34401_VAL_2_WIRE_RES                              5
#define AG34401_VAL_4_WIRE_RES                              101
#define AG34401_VAL_FREQ                                    104
#define AG34401_VAL_PERIOD                                  105

/*- Defined values for 
	attribute AG34401_ATTR_APERTURE_TIME_UNITS
	parameter ApertureTimeUnits in function Ag34401_GetApertureTimeInfo */

#define AG34401_VAL_SECONDS                                 0
#define AG34401_VAL_POWER_LINE_CYCLES                       1

/*- Defined values for 
	attribute AG34401_ATTR_AUTO_ZERO
	parameter AutoZeroMode in function Ag34401_ConfigureAutoZeroMode */

#define AG34401_VAL_AUTO_ZERO_OFF                           0
#define AG34401_VAL_AUTO_ZERO_ON                            1
#define AG34401_VAL_AUTO_ZERO_ONCE                          2

/*- Defined values for */

#define AG34401_VAL_THERMOCOUPLE                            1
#define AG34401_VAL_THERMISTOR                              2
#define AG34401_VAL_2_WIRE_RTD                              3
#define AG34401_VAL_4_WIRE_RTD                              4

/*- Defined values for */

#define AG34401_VAL_TEMP_TC_B                               1
#define AG34401_VAL_TEMP_TC_C                               2
#define AG34401_VAL_TEMP_TC_D                               3
#define AG34401_VAL_TEMP_TC_E                               4
#define AG34401_VAL_TEMP_TC_G                               5
#define AG34401_VAL_TEMP_TC_J                               6
#define AG34401_VAL_TEMP_TC_K                               7
#define AG34401_VAL_TEMP_TC_N                               8
#define AG34401_VAL_TEMP_TC_R                               9
#define AG34401_VAL_TEMP_TC_S                               10
#define AG34401_VAL_TEMP_TC_T                               11
#define AG34401_VAL_TEMP_TC_U                               12
#define AG34401_VAL_TEMP_TC_V                               13

/*- Defined values for */

#define AG34401_VAL_TEMP_REF_JUNC_INTERNAL                  1
#define AG34401_VAL_TEMP_REF_JUNC_FIXED                     2

/*- Defined values for 
	attribute AG34401_ATTR_TRIGGER_SOURCE
	parameter TriggerSource in function Ag34401_ConfigureTrigger */

#define AG34401_VAL_IMMEDIATE                               1
#define AG34401_VAL_EXTERNAL                                2
#define AG34401_VAL_SOFTWARE_TRIG                           3

/*- Defined values for 
	attribute AG34401_ATTR_TRIGGER_SLOPE */

#define AG34401_VAL_POSITIVE                                0
#define AG34401_VAL_NEGATIVE                                1

/*- Defined values for 
	attribute AG34401_ATTR_SAMPLE_TRIGGER
	parameter SampleTrigger in function Ag34401_ConfigureMultiPoint */

#define AG34401_VAL_IMMEDIATE                               1
#define AG34401_VAL_EXTERNAL                                2
#define AG34401_VAL_SOFTWARE_TRIG                           3
#define AG34401_VAL_INTERVAL                                10

/*- Defined values for 
	attribute AG34401_ATTR_MEAS_COMPLETE_DEST
	parameter MeasCompleteDest in function Ag34401_ConfigureMeasCompleteDest */

#define AG34401_VAL_EXTERNAL                                2
#define AG34401_VAL_NONE                                    -1

/*- Defined values for */

#define AG34401_VAL_AUTO_RANGE_ONCE                         -3
#define AG34401_VAL_AUTO_RANGE_OFF                          -2
#define AG34401_VAL_AUTO_RANGE_ON                           -1

/*- Defined values for */

#define AG34401_VAL_AUTO_RANGE_OFF                          -2
#define AG34401_VAL_AUTO_RANGE_ON                           -1

/*- Defined values for */

#define AG34401_VAL_MAX_TIME_IMMEDIATE                      0
#define AG34401_VAL_MAX_TIME_INFINITE                       -1

/*- Defined values for */

#define AG34401_VAL_AUTO_DELAY_OFF                          -2
#define AG34401_VAL_AUTO_DELAY_ON                           -1

/*- Defined values for 
	attribute AG34401_ATTR_ADVANCED_INPUT_TERMINAL */

#define AG34401_VAL_AGILENT34401_INPUT_TERMINAL_FRONT       0
#define AG34401_VAL_AGILENT34401_INPUT_TERMINAL_REAR        1

/*- Defined values for 
	attribute AG34401_ATTR_MATH_D_BM_REF_RESISTANCE */

#define AG34401_VAL_AGILENT34401D_BM_REF50__OHM             0
#define AG34401_VAL_AGILENT34401D_BM_REF75__OHM             1
#define AG34401_VAL_AGILENT34401D_BM_REF93__OHM             2
#define AG34401_VAL_AGILENT34401D_BM_REF110__OHM            3
#define AG34401_VAL_AGILENT34401D_BM_REF124__OHM            4
#define AG34401_VAL_AGILENT34401D_BM_REF125__OHM            5
#define AG34401_VAL_AGILENT34401D_BM_REF135__OHM            6
#define AG34401_VAL_AGILENT34401D_BM_REF150__OHM            7
#define AG34401_VAL_AGILENT34401D_BM_REF250__OHM            8
#define AG34401_VAL_AGILENT34401D_BM_REF300__OHM            9
#define AG34401_VAL_AGILENT34401D_BM_REF500__OHM            10
#define AG34401_VAL_AGILENT34401D_BM_REF600__OHM            11
#define AG34401_VAL_AGILENT34401D_BM_REF800__OHM            12
#define AG34401_VAL_AGILENT34401D_BM_REF900__OHM            13
#define AG34401_VAL_AGILENT34401D_BM_REF1000__OHM           14
#define AG34401_VAL_AGILENT34401D_BM_REF1200__OHM           15
#define AG34401_VAL_AGILENT34401D_BM_REF8000__OHM           16

/*- Defined values for 
	attribute AG34401_ATTR_MATH_FUNCTION */

#define AG34401_VAL_AGILENT34401_MATH_NULL                  0
#define AG34401_VAL_AGILENT34401_MATHD_B                    1
#define AG34401_VAL_AGILENT34401_MATHD_BM                   2
#define AG34401_VAL_AGILENT34401_MATH_AVERAGE               3
#define AG34401_VAL_AGILENT34401_MATH_LIMIT                 4

/*- Defined values for 
	parameter Register in function Ag34401_StatusQueryRegister
	parameter Register in function Ag34401_StatusConfigureRegister
	parameter Register in function Ag34401_StatusGetRegister
	parameter Register in function Ag34401_StatusSetRegister */

#define AG34401_VAL_AGILENT34401_STATUS_REGISTER_STATUS_BYTE       0
#define AG34401_VAL_AGILENT34401_STATUS_REGISTER_QUESTIONABLE_DATA 1
#define AG34401_VAL_AGILENT34401_STATUS_REGISTER_STANDARD_EVENT    2

/*- Defined values for 
	parameter SubRegister in function Ag34401_StatusQueryRegister
	parameter SubRegister in function Ag34401_StatusConfigureRegister
	parameter SubRegister in function Ag34401_StatusGetRegister
	parameter SubRegister in function Ag34401_StatusSetRegister */

#define AG34401_VAL_AGILENT34401_STATUS_SUB_REGISTER_EVENT   0
#define AG34401_VAL_AGILENT34401_STATUS_SUB_REGISTER_ENABLE  1
#define AG34401_VAL_AGILENT34401_STATUS_SUB_REGISTER_SUMMARY 2

/*- Defined values for */

#define AG34401_VAL_AGILENT34401_RESOLUTION_FAST4_DIGIT     0
#define AG34401_VAL_AGILENT34401_RESOLUTION_SLOW4_DIGIT     1
#define AG34401_VAL_AGILENT34401_RESOLUTION_FAST5_DIGIT     2
#define AG34401_VAL_AGILENT34401_RESOLUTION_SLOW5_DIGIT     3
#define AG34401_VAL_AGILENT34401_RESOLUTION_FAST6_DIGIT     4
#define AG34401_VAL_AGILENT34401_RESOLUTION_SLOW6_DIGIT     5
#define AG34401_VAL_AGILENT34401_RESOLUTION4AND_HALF_DIGIT  6
#define AG34401_VAL_AGILENT34401_RESOLUTION5AND_HALF_DIGIT  7
#define AG34401_VAL_AGILENT34401_RESOLUTION6AND_HALF_DIGIT  8


/**************************************************************************** 
 *---------------- Instrument Driver Function Declarations -----------------* 
 ****************************************************************************/

/*- Agilent34401 */

ViStatus _VI_FUNC Ag34401_init ( ViRsrc ResourceName, ViBoolean IdQuery, ViBoolean Reset, ViSession* Vi );
ViStatus _VI_FUNC Ag34401_close ( ViSession Vi );
ViStatus _VI_FUNC Ag34401_InitWithOptions ( ViRsrc ResourceName, ViBoolean IdQuery, ViBoolean Reset, ViConstString OptionsString, ViSession* Vi );

/*- Utility */

ViStatus _VI_FUNC Ag34401_revision_query ( ViSession Vi, ViChar DriverRev[], ViChar InstrRev[] );
ViStatus _VI_FUNC Ag34401_error_message ( ViSession Vi, ViStatus ErrorCode, ViChar ErrorMessage[] );
ViStatus _VI_FUNC Ag34401_GetError ( ViSession Vi, ViStatus* ErrorCode, ViInt32 ErrorDescriptionBufferSize, ViChar ErrorDescription[] );
ViStatus _VI_FUNC Ag34401_ClearError ( ViSession Vi );
ViStatus _VI_FUNC Ag34401_ClearInterchangeWarnings ( ViSession Vi );
ViStatus _VI_FUNC Ag34401_GetNextCoercionRecord ( ViSession Vi, ViInt32 CoercionRecordBufferSize, ViChar CoercionRecord[] );
ViStatus _VI_FUNC Ag34401_GetNextInterchangeWarning ( ViSession Vi, ViInt32 InterchangeWarningBufferSize, ViChar InterchangeWarning[] );
ViStatus _VI_FUNC Ag34401_InvalidateAllAttributes ( ViSession Vi );
ViStatus _VI_FUNC Ag34401_ResetInterchangeCheck ( ViSession Vi );
ViStatus _VI_FUNC Ag34401_Disable ( ViSession Vi );
ViStatus _VI_FUNC Ag34401_error_query ( ViSession Vi, ViInt32* ErrorCode, ViChar ErrorMessage[] );
ViStatus _VI_FUNC Ag34401_LockSession ( ViSession Vi, ViBoolean* CallerHasLock );
ViStatus _VI_FUNC Ag34401_reset ( ViSession Vi );
ViStatus _VI_FUNC Ag34401_ResetWithDefaults ( ViSession Vi );
ViStatus _VI_FUNC Ag34401_self_test ( ViSession Vi, ViInt16* TestResult, ViChar TestMessage[] );
ViStatus _VI_FUNC Ag34401_UnlockSession ( ViSession Vi, ViBoolean* CallerHasLock );

/*- Attribute Accessors */

ViStatus _VI_FUNC Ag34401_GetAttributeViInt32 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32* AttributeValue );
ViStatus _VI_FUNC Ag34401_GetAttributeViInt64 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt64* AttributeValue );
ViStatus _VI_FUNC Ag34401_GetAttributeViReal64 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViReal64* AttributeValue );
ViStatus _VI_FUNC Ag34401_GetAttributeViBoolean ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Ag34401_GetAttributeViSession ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViSession* AttributeValue );
ViStatus _VI_FUNC Ag34401_GetAttributeViString ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );
ViStatus _VI_FUNC Ag34401_SetAttributeViInt32 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32 AttributeValue );
ViStatus _VI_FUNC Ag34401_SetAttributeViInt64 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt64 AttributeValue );
ViStatus _VI_FUNC Ag34401_SetAttributeViReal64 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViReal64 AttributeValue );
ViStatus _VI_FUNC Ag34401_SetAttributeViBoolean ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViBoolean AttributeValue );
ViStatus _VI_FUNC Ag34401_SetAttributeViSession ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViSession AttributeValue );
ViStatus _VI_FUNC Ag34401_SetAttributeViString ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViConstString AttributeValue );

/*- Configuration */

ViStatus _VI_FUNC Ag34401_ConfigureMeasurement ( ViSession Vi, ViInt32 Function, ViReal64 Range, ViReal64 Resolution );

/*- Specific Measurements */

ViStatus _VI_FUNC Ag34401_ConfigureFrequencyVoltageRange ( ViSession Vi, ViReal64 FrequencyVoltageRange );
ViStatus _VI_FUNC Ag34401_ConfigureACBandwidth ( ViSession Vi, ViReal64 MinFreq, ViReal64 MaxFreq );

/*- Trigger */

ViStatus _VI_FUNC Ag34401_ConfigureTrigger ( ViSession Vi, ViInt32 TriggerSource, ViReal64 TriggerDelay );

/*- Configuration Information */

ViStatus _VI_FUNC Ag34401_GetApertureTimeInfo ( ViSession Vi, ViReal64* ApertureTime, ViInt32* ApertureTimeUnits );
ViStatus _VI_FUNC Ag34401_GetAutoRangeValue ( ViSession Vi, ViReal64* AutoRangeValue );

/*- Measurement Operation Options */

ViStatus _VI_FUNC Ag34401_ConfigureAutoZeroMode ( ViSession Vi, ViInt32 AutoZeroMode );

/*- MultiPoint */

ViStatus _VI_FUNC Ag34401_ConfigureMeasCompleteDest ( ViSession Vi, ViInt32 MeasCompleteDest );
ViStatus _VI_FUNC Ag34401_ConfigureMultiPoint ( ViSession Vi, ViInt32 TriggerCount, ViInt32 SampleCount, ViInt32 SampleTrigger, ViReal64 SampleInterval );

/*- Measurement */

ViStatus _VI_FUNC Ag34401_Read ( ViSession Vi, ViInt32 MaxTimeMilliseconds, ViReal64* Reading );
ViStatus _VI_FUNC Ag34401_ReadMultiPoint ( ViSession Vi, ViInt32 MaxTimeMilliseconds, ViInt32 ArraySize, ViReal64 ReadingArray[], ViInt32* ActualPts );

/*- Low Level Measurement */

ViStatus _VI_FUNC Ag34401_Abort ( ViSession Vi );
ViStatus _VI_FUNC Ag34401_Fetch ( ViSession Vi, ViInt32 MaxTimeMilliseconds, ViReal64* Reading );
ViStatus _VI_FUNC Ag34401_FetchMultiPoint ( ViSession Vi, ViInt32 MaxTimeMilliseconds, ViInt32 ArraySize, ViReal64 ReadingArray[], ViInt32* ActualPts );
ViStatus _VI_FUNC Ag34401_Initiate ( ViSession Vi );
ViStatus _VI_FUNC Ag34401_IsOverRange ( ViSession Vi, ViReal64 MeasurementValue, ViBoolean* IsOverRange );
ViStatus _VI_FUNC Ag34401_SendSoftwareTrigger ( ViSession Vi );

/*- System */

ViStatus _VI_FUNC Ag34401_viRead ( ViSession Vi, ViInt64 BufferSize, ViChar Buffer[], ViInt64* ReturnCount );
ViStatus _VI_FUNC Ag34401_SystemReadString ( ViSession Vi, ViInt32 ValBufferSize, ViChar Val[] );
ViStatus _VI_FUNC Ag34401_viWrite ( ViSession Vi, ViInt64 Count, ViChar Buffer[], ViInt64* ReturnCount );
ViStatus _VI_FUNC Ag34401_SystemWriteString ( ViSession Vi, ViConstString Data );

/*- ACCurrent */

ViStatus _VI_FUNC Ag34401_ACCurrentConfigure ( ViSession Vi, ViReal64 Range, ViReal64 Resolution );

/*- ACVoltage */

ViStatus _VI_FUNC Ag34401_ACVoltageConfigure ( ViSession Vi, ViReal64 Range, ViReal64 Resolution );

/*- Calibration */

ViStatus _VI_FUNC Ag34401_CalibrationSecureCode ( ViSession Vi, ViBoolean SecureState, ViConstString Code );
ViStatus _VI_FUNC Ag34401_CalibrationCode ( ViSession Vi, ViConstString Code );

/*- DCCurrent */

ViStatus _VI_FUNC Ag34401_DCCurrentConfigure ( ViSession Vi, ViReal64 Range, ViReal64 Resolution );

/*- DCVoltage */

ViStatus _VI_FUNC Ag34401_DCVoltageConfigure ( ViSession Vi, ViReal64 Range, ViReal64 Resolution );

/*- Display */

ViStatus _VI_FUNC Ag34401_DisplayClear ( ViSession Vi );

/*- Resistance */

ViStatus _VI_FUNC Ag34401_ResistanceConfigure ( ViSession Vi, ViReal64 Range, ViReal64 Resolution );

/*- Status */

ViStatus _VI_FUNC Ag34401_StatusQueryRegister ( ViSession Vi, ViInt32 Register, ViInt32 SubRegister, ViInt32* RetVal );
ViStatus _VI_FUNC Ag34401_StatusPreset ( ViSession Vi );
ViStatus _VI_FUNC Ag34401_StatusConfigureRegister ( ViSession Vi, ViInt32 Register, ViInt32 SubRegister, ViInt32 Val );
ViStatus _VI_FUNC Ag34401_StatusClear ( ViSession Vi );
ViStatus _VI_FUNC Ag34401_StatusGetRegister ( ViSession Vi, ViInt32 Register, ViInt32 SubRegister, ViInt32* RetVal );
ViStatus _VI_FUNC Ag34401_StatusSetRegister ( ViSession Vi, ViInt32 Register, ViInt32 SubRegister, ViInt32 Val );

/*- System */

ViStatus _VI_FUNC Ag34401_SystemWaitForOperationComplete ( ViSession Vi, ViInt32 MaxTimeMilliseconds );
ViStatus _VI_FUNC Ag34401_SystemEnableLocalControls ( ViSession Vi );
ViStatus _VI_FUNC Ag34401_SystemDisableLocalControls ( ViSession Vi );
ViStatus _VI_FUNC Ag34401_SystemBeep ( ViSession Vi );
ViStatus _VI_FUNC Ag34401_SystemRead ( ViSession Vi, ViInt32 Size, ViInt32 ValueBufferSize, ViChar Value[], ViInt32* ActualSize );
ViStatus _VI_FUNC Ag34401_SystemWrite ( ViSession Vi, ViConstString CommandString );


/**************************************************************************** 
 *----------------- Instrument Error And Completion Codes ------------------* 
 ****************************************************************************/
#ifndef _IVIC_ERROR_BASE_DEFINES_
#define _IVIC_ERROR_BASE_DEFINES_

#define IVIC_WARN_BASE                           (0x3FFA0000L)
#define IVIC_CROSS_CLASS_WARN_BASE               (IVIC_WARN_BASE + 0x1000)
#define IVIC_CLASS_WARN_BASE                     (IVIC_WARN_BASE + 0x2000)
#define IVIC_SPECIFIC_WARN_BASE                  (IVIC_WARN_BASE + 0x4000)

#define IVIC_ERROR_BASE                          (0xBFFA0000L)
#define IVIC_CROSS_CLASS_ERROR_BASE              (IVIC_ERROR_BASE + 0x1000)
#define IVIC_CLASS_ERROR_BASE                    (IVIC_ERROR_BASE + 0x2000)
#define IVIC_SPECIFIC_ERROR_BASE                 (IVIC_ERROR_BASE + 0x4000)
#define IVIC_LXISYNC_ERROR_BASE                  (IVIC_ERROR_BASE + 0x2000)

#endif


#define AG34401_ERROR_CANNOT_RECOVER                        (IVIC_ERROR_BASE + 0x0000)
#define AG34401_ERROR_INSTRUMENT_STATUS                     (IVIC_ERROR_BASE + 0x0001)
#define AG34401_ERROR_CANNOT_OPEN_FILE                      (IVIC_ERROR_BASE + 0x0002)
#define AG34401_ERROR_READING_FILE                          (IVIC_ERROR_BASE + 0x0003)
#define AG34401_ERROR_WRITING_FILE                          (IVIC_ERROR_BASE + 0x0004)
#define AG34401_ERROR_INVALID_PATHNAME                      (IVIC_ERROR_BASE + 0x000B)
#define AG34401_ERROR_INVALID_VALUE                         (IVIC_ERROR_BASE + 0x0010)
#define AG34401_ERROR_FUNCTION_NOT_SUPPORTED                (IVIC_ERROR_BASE + 0x0011)
#define AG34401_ERROR_ATTRIBUTE_NOT_SUPPORTED               (IVIC_ERROR_BASE + 0x0012)
#define AG34401_ERROR_VALUE_NOT_SUPPORTED                   (IVIC_ERROR_BASE + 0x0013)
#define AG34401_ERROR_NOT_INITIALIZED                       (IVIC_ERROR_BASE + 0x001D)
#define AG34401_ERROR_UNKNOWN_CHANNEL_NAME                  (IVIC_ERROR_BASE + 0x0020)
#define AG34401_ERROR_TOO_MANY_OPEN_FILES                   (IVIC_ERROR_BASE + 0x0023)
#define AG34401_ERROR_CHANNEL_NAME_REQUIRED                 (IVIC_ERROR_BASE + 0x0044)
#define AG34401_ERROR_MISSING_OPTION_NAME                   (IVIC_ERROR_BASE + 0x0049)
#define AG34401_ERROR_MISSING_OPTION_VALUE                  (IVIC_ERROR_BASE + 0x004A)
#define AG34401_ERROR_BAD_OPTION_NAME                       (IVIC_ERROR_BASE + 0x004B)
#define AG34401_ERROR_BAD_OPTION_VALUE                      (IVIC_ERROR_BASE + 0x004C)
#define AG34401_ERROR_OUT_OF_MEMORY                         (IVIC_ERROR_BASE + 0x0056)
#define AG34401_ERROR_OPERATION_PENDING                     (IVIC_ERROR_BASE + 0x0057)
#define AG34401_ERROR_NULL_POINTER                          (IVIC_ERROR_BASE + 0x0058)
#define AG34401_ERROR_UNEXPECTED_RESPONSE                   (IVIC_ERROR_BASE + 0x0059)
#define AG34401_ERROR_FILE_NOT_FOUND                        (IVIC_ERROR_BASE + 0x005B)
#define AG34401_ERROR_INVALID_FILE_FORMAT                   (IVIC_ERROR_BASE + 0x005C)
#define AG34401_ERROR_STATUS_NOT_AVAILABLE                  (IVIC_ERROR_BASE + 0x005D)
#define AG34401_ERROR_ID_QUERY_FAILED                       (IVIC_ERROR_BASE + 0x005E)
#define AG34401_ERROR_RESET_FAILED                          (IVIC_ERROR_BASE + 0x005F)
#define AG34401_ERROR_RESOURCE_UNKNOWN                      (IVIC_ERROR_BASE + 0x0060)
#define AG34401_ERROR_ALREADY_INITIALIZED                   (IVIC_ERROR_BASE + 0x0061)
#define AG34401_ERROR_CANNOT_CHANGE_SIMULATION_STATE        (IVIC_ERROR_BASE + 0x0062)
#define AG34401_ERROR_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR  (IVIC_ERROR_BASE + 0x0063)
#define AG34401_ERROR_INVALID_RANGE_IN_SELECTOR             (IVIC_ERROR_BASE + 0x0064)
#define AG34401_ERROR_UNKOWN_NAME_IN_SELECTOR               (IVIC_ERROR_BASE + 0x0065)
#define AG34401_ERROR_BADLY_FORMED_SELECTOR                 (IVIC_ERROR_BASE + 0x0066)
#define AG34401_ERROR_UNKNOWN_PHYSICAL_IDENTIFIER           (IVIC_ERROR_BASE + 0x0067)
#define AG34401_ERROR_INVALID_ATTRIBUTE                     (IVIC_ERROR_BASE + 0x000C)
#define AG34401_ERROR_TYPES_DO_NOT_MATCH                    (IVIC_ERROR_BASE + 0x0015)
#define AG34401_ERROR_IVI_ATTR_NOT_WRITABLE                 (IVIC_ERROR_BASE + 0x000D)
#define AG34401_ERROR_IVI_ATTR_NOT_READABLE                 (IVIC_ERROR_BASE + 0x000E)
#define AG34401_ERROR_INVALID_SESSION_HANDLE                (IVIC_ERROR_BASE + 0x1190)



#define AG34401_SUCCESS                                     0
#define AG34401_WARN_NSUP_ID_QUERY                          (IVIC_WARN_BASE + 0x0065)
#define AG34401_WARN_NSUP_RESET                             (IVIC_WARN_BASE + 0x0066)
#define AG34401_WARN_NSUP_SELF_TEST                         (IVIC_WARN_BASE + 0x0067)
#define AG34401_WARN_NSUP_ERROR_QUERY                       (IVIC_WARN_BASE + 0x0068)
#define AG34401_WARN_NSUP_REV_QUERY                         (IVIC_WARN_BASE + 0x0069)



#define AG34401_ERROR_MAX_TIME_EXCEEDED                     (IVIC_CLASS_ERROR_BASE + 0x0003)
#define AG34401_ERROR_TRIGGER_NOT_SOFTWARE                  (IVIC_CROSS_CLASS_ERROR_BASE + 0x0001)
#define AG34401_ERROR_PERSONALITY_NOT_ACTIVE                (IVIC_SPECIFIC_ERROR_BASE + 0x0211)
#define AG34401_ERROR_PERSONALITY_NOT_INSTALLED             (IVIC_SPECIFIC_ERROR_BASE + 0x0212)
#define AG34401_ERROR_PERSONALITY_NOT_LICENSED              (IVIC_SPECIFIC_ERROR_BASE + 0x0213)
#define AG34401_ERROR_IO_GENERAL                            (IVIC_SPECIFIC_ERROR_BASE + 0x0214)
#define AG34401_ERROR_IO_TIMEOUT                            (IVIC_SPECIFIC_ERROR_BASE + 0x0215)
#define AG34401_ERROR_MODEL_NOT_SUPPORTED                   (IVIC_SPECIFIC_ERROR_BASE + 0x0216)
#define AG34401_ERROR_WRAPPED_DRIVER_ERROR                  (IVIC_SPECIFIC_ERROR_BASE + 0x0218)
#define AG34401_ERROR_NOT_SUPPORTED                         (IVIC_SPECIFIC_ERROR_BASE + 0x0002)



#define AG34401_WARN_OVER_RANGE                             (IVIC_CLASS_WARN_BASE + 0x0001)


/**************************************************************************** 
 *---------------------------- End Include File ----------------------------* 
 ****************************************************************************/
#if defined(__cplusplus) || defined(__cplusplus__)
}
#endif
#endif // __AG34401_HEADER
