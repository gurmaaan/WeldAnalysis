

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Fri Oct 31 17:46:53 2014
 */
/* Compiler settings for Agilent34401.nimbus.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef ___Agilent34401_h__
#define ___Agilent34401_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAgilent34401_FWD_DEFINED__
#define __IAgilent34401_FWD_DEFINED__
typedef interface IAgilent34401 IAgilent34401;
#endif 	/* __IAgilent34401_FWD_DEFINED__ */


#ifndef __IAgilent34401AC_FWD_DEFINED__
#define __IAgilent34401AC_FWD_DEFINED__
typedef interface IAgilent34401AC IAgilent34401AC;
#endif 	/* __IAgilent34401AC_FWD_DEFINED__ */


#ifndef __IAgilent34401ACCurrent_FWD_DEFINED__
#define __IAgilent34401ACCurrent_FWD_DEFINED__
typedef interface IAgilent34401ACCurrent IAgilent34401ACCurrent;
#endif 	/* __IAgilent34401ACCurrent_FWD_DEFINED__ */


#ifndef __IAgilent34401ACVoltage_FWD_DEFINED__
#define __IAgilent34401ACVoltage_FWD_DEFINED__
typedef interface IAgilent34401ACVoltage IAgilent34401ACVoltage;
#endif 	/* __IAgilent34401ACVoltage_FWD_DEFINED__ */


#ifndef __IAgilent34401Advanced_FWD_DEFINED__
#define __IAgilent34401Advanced_FWD_DEFINED__
typedef interface IAgilent34401Advanced IAgilent34401Advanced;
#endif 	/* __IAgilent34401Advanced_FWD_DEFINED__ */


#ifndef __IAgilent34401Calibration_FWD_DEFINED__
#define __IAgilent34401Calibration_FWD_DEFINED__
typedef interface IAgilent34401Calibration IAgilent34401Calibration;
#endif 	/* __IAgilent34401Calibration_FWD_DEFINED__ */


#ifndef __IAgilent34401DCCurrent_FWD_DEFINED__
#define __IAgilent34401DCCurrent_FWD_DEFINED__
typedef interface IAgilent34401DCCurrent IAgilent34401DCCurrent;
#endif 	/* __IAgilent34401DCCurrent_FWD_DEFINED__ */


#ifndef __IAgilent34401DCVoltage_FWD_DEFINED__
#define __IAgilent34401DCVoltage_FWD_DEFINED__
typedef interface IAgilent34401DCVoltage IAgilent34401DCVoltage;
#endif 	/* __IAgilent34401DCVoltage_FWD_DEFINED__ */


#ifndef __IAgilent34401DCVoltageRatio_FWD_DEFINED__
#define __IAgilent34401DCVoltageRatio_FWD_DEFINED__
typedef interface IAgilent34401DCVoltageRatio IAgilent34401DCVoltageRatio;
#endif 	/* __IAgilent34401DCVoltageRatio_FWD_DEFINED__ */


#ifndef __IAgilent34401Display_FWD_DEFINED__
#define __IAgilent34401Display_FWD_DEFINED__
typedef interface IAgilent34401Display IAgilent34401Display;
#endif 	/* __IAgilent34401Display_FWD_DEFINED__ */


#ifndef __IAgilent34401Frequency_FWD_DEFINED__
#define __IAgilent34401Frequency_FWD_DEFINED__
typedef interface IAgilent34401Frequency IAgilent34401Frequency;
#endif 	/* __IAgilent34401Frequency_FWD_DEFINED__ */


#ifndef __IAgilent34401Math_FWD_DEFINED__
#define __IAgilent34401Math_FWD_DEFINED__
typedef interface IAgilent34401Math IAgilent34401Math;
#endif 	/* __IAgilent34401Math_FWD_DEFINED__ */


#ifndef __IAgilent34401Measurement_FWD_DEFINED__
#define __IAgilent34401Measurement_FWD_DEFINED__
typedef interface IAgilent34401Measurement IAgilent34401Measurement;
#endif 	/* __IAgilent34401Measurement_FWD_DEFINED__ */


#ifndef __IAgilent34401Resistance_FWD_DEFINED__
#define __IAgilent34401Resistance_FWD_DEFINED__
typedef interface IAgilent34401Resistance IAgilent34401Resistance;
#endif 	/* __IAgilent34401Resistance_FWD_DEFINED__ */


#ifndef __IAgilent34401Status_FWD_DEFINED__
#define __IAgilent34401Status_FWD_DEFINED__
typedef interface IAgilent34401Status IAgilent34401Status;
#endif 	/* __IAgilent34401Status_FWD_DEFINED__ */


#ifndef __IAgilent34401System_FWD_DEFINED__
#define __IAgilent34401System_FWD_DEFINED__
typedef interface IAgilent34401System IAgilent34401System;
#endif 	/* __IAgilent34401System_FWD_DEFINED__ */


#ifndef __IAgilent34401Trigger_FWD_DEFINED__
#define __IAgilent34401Trigger_FWD_DEFINED__
typedef interface IAgilent34401Trigger IAgilent34401Trigger;
#endif 	/* __IAgilent34401Trigger_FWD_DEFINED__ */


#ifndef __IAgilent34401MultiPoint_FWD_DEFINED__
#define __IAgilent34401MultiPoint_FWD_DEFINED__
typedef interface IAgilent34401MultiPoint IAgilent34401MultiPoint;
#endif 	/* __IAgilent34401MultiPoint_FWD_DEFINED__ */


#ifndef __IAgilent34401System2_FWD_DEFINED__
#define __IAgilent34401System2_FWD_DEFINED__
typedef interface IAgilent34401System2 IAgilent34401System2;
#endif 	/* __IAgilent34401System2_FWD_DEFINED__ */


#ifndef __IAgilent344012_FWD_DEFINED__
#define __IAgilent344012_FWD_DEFINED__
typedef interface IAgilent344012 IAgilent344012;
#endif 	/* __IAgilent344012_FWD_DEFINED__ */


#ifndef __Agilent34401_FWD_DEFINED__
#define __Agilent34401_FWD_DEFINED__

#ifdef __cplusplus
typedef class Agilent34401 Agilent34401;
#else
typedef struct Agilent34401 Agilent34401;
#endif /* __cplusplus */

#endif 	/* __Agilent34401_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_Agilent344012Enimbus_0000_0000 */
/* [local] */ 























extern RPC_IF_HANDLE __MIDL_itf_Agilent344012Enimbus_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Agilent344012Enimbus_0000_0000_v0_0_s_ifspec;


#ifndef __Agilent34401Lib_LIBRARY_DEFINED__
#define __Agilent34401Lib_LIBRARY_DEFINED__

/* library Agilent34401Lib */
/* [helpfile][helpcontext][helpstring][version][uuid] */ 

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("4ada9c9c-eb47-31e5-9e00-bc9714938a0f") 
enum Agilent34401ApertureTimeUnitsEnum
    {	Agilent34401ApertureSeconds	= 0,
	Agilent34401AperturePowerLineCycles	= 1
    } 	Agilent34401ApertureTimeUnitsEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("7d64e87a-2714-3e42-ae7f-a67a267cd1a1") 
enum Agilent34401AutoZeroEnum
    {	Agilent34401AutoZeroOff	= 0,
	Agilent34401AutoZeroOn	= 1,
	Agilent34401AutoZeroOnce	= 2
    } 	Agilent34401AutoZeroEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("50c2b1b3-4edf-33a0-8a35-54e2a63c9ff5") 
enum Agilent34401InputTerminalEnum
    {	Agilent34401InputTerminalFront	= 0,
	Agilent34401InputTerminalRear	= 1
    } 	Agilent34401InputTerminalEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("3ed9fb3f-88de-3edc-bcba-fdb72feddeb9") 
enum Agilent34401FunctionEnum
    {	Agilent34401FunctionDCVolts	= 1,
	Agilent34401FunctionACVolts	= 2,
	Agilent34401FunctionDCCurrent	= 3,
	Agilent34401FunctionACCurrent	= 4,
	Agilent34401Function2WireRes	= 5,
	Agilent34401Function4WireRes	= 6,
	Agilent34401FunctionFreq	= 7,
	Agilent34401FunctionPeriod	= 8,
	Agilent34401FunctionDCRatioVolts	= 9,
	Agilent34401FunctionContinuty	= 10,
	Agilent34401FunctionDiode	= 11
    } 	Agilent34401FunctionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("81dcf8c6-7681-35d5-aa3b-c9aaa0297d79") 
enum Agilent34401dBmRefResistanceEnum
    {	Agilent34401dBmRef50_Ohm	= 0,
	Agilent34401dBmRef75_Ohm	= 1,
	Agilent34401dBmRef93_Ohm	= 2,
	Agilent34401dBmRef110_Ohm	= 3,
	Agilent34401dBmRef124_Ohm	= 4,
	Agilent34401dBmRef125_Ohm	= 5,
	Agilent34401dBmRef135_Ohm	= 6,
	Agilent34401dBmRef150_Ohm	= 7,
	Agilent34401dBmRef250_Ohm	= 8,
	Agilent34401dBmRef300_Ohm	= 9,
	Agilent34401dBmRef500_Ohm	= 10,
	Agilent34401dBmRef600_Ohm	= 11,
	Agilent34401dBmRef800_Ohm	= 12,
	Agilent34401dBmRef900_Ohm	= 13,
	Agilent34401dBmRef1000_Ohm	= 14,
	Agilent34401dBmRef1200_Ohm	= 15,
	Agilent34401dBmRef8000_Ohm	= 16
    } 	Agilent34401dBmRefResistanceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("ee61d518-bb4c-3421-ab54-30fc2c9e3feb") 
enum Agilent34401MathFunctionEnum
    {	Agilent34401MathNull	= 0,
	Agilent34401MathdB	= 1,
	Agilent34401MathdBm	= 2,
	Agilent34401MathAverage	= 3,
	Agilent34401MathLimit	= 4
    } 	Agilent34401MathFunctionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("0ce1b554-434f-364c-b3d0-688f92fd2c2f") 
enum Agilent34401StatusRegisterEnum
    {	Agilent34401StatusRegisterStatusByte	= 0,
	Agilent34401StatusRegisterQuestionableData	= 1,
	Agilent34401StatusRegisterStandardEvent	= 2
    } 	Agilent34401StatusRegisterEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("5e9fc79a-d637-315e-a38a-d6db00478a20") 
enum Agilent34401StatusSubRegisterEnum
    {	Agilent34401StatusSubRegisterEvent	= 0,
	Agilent34401StatusSubRegisterEnable	= 1,
	Agilent34401StatusSubRegisterSummary	= 2
    } 	Agilent34401StatusSubRegisterEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("c887ba72-d2b0-323b-9d6d-99ea7bb12b90") 
enum Agilent34401TriggerSourceEnum
    {	Agilent34401TriggerSourceImmediate	= 1,
	Agilent34401TriggerSourceExternal	= 2,
	Agilent34401TriggerSourceSwTrigFunc	= 3
    } 	Agilent34401TriggerSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("9071bb3d-f981-3fce-8a37-5a9c12316c59") 
enum Agilent34401SampleTriggerEnum
    {	Agilent34401SampleTriggerImmediate	= 1,
	Agilent34401SampleTriggerExternal	= 2,
	Agilent34401SampleTriggerSwTrigFunc	= 3,
	Agilent34401SampleTriggerInterval	= 4
    } 	Agilent34401SampleTriggerEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("c3e7acc7-7b3b-3453-b2ef-f535e2fcd25c") 
enum Agilent34401MeasCompleteDestEnum
    {	Agilent34401MeasCompleteDestNone	= 1,
	Agilent34401MeasCompleteDestExternal	= 2
    } 	Agilent34401MeasCompleteDestEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("a0e644eb-7d88-3a53-900e-2d8ac65a9137") 
enum Agilent34401TriggerSlopeEnum
    {	Agilent34401TriggerSlopePositive	= 0,
	Agilent34401TriggerSlopeNegative	= 1
    } 	Agilent34401TriggerSlopeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("42dfa9a6-d5c3-3cfb-b415-2751eae8d9da") 
enum Agilent34401ResolutionEnum
    {	Agilent34401ResolutionFast4Digit	= 0,
	Agilent34401ResolutionSlow4Digit	= 1,
	Agilent34401ResolutionFast5Digit	= 2,
	Agilent34401ResolutionSlow5Digit	= 3,
	Agilent34401ResolutionFast6Digit	= 4,
	Agilent34401ResolutionSlow6Digit	= 5,
	Agilent34401Resolution4andHalfDigit	= 6,
	Agilent34401Resolution5andHalfDigit	= 7,
	Agilent34401Resolution6andHalfDigit	= 8
    } 	Agilent34401ResolutionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("e25d01b2-78fb-4c51-bed0-4fbe195350b4") 
enum Agilent34401ErrorCodesEnum
    {	E_AGILENT34401_PERSONALITY_NOT_ACTIVE	= -2147204591,
	E_AGILENT34401_PERSONALITY_NOT_INSTALLED	= -2147204590,
	E_AGILENT34401_PERSONALITY_NOT_LICENSED	= -2147204589,
	E_AGILENT34401_IO_GENERAL	= -2147204588,
	E_AGILENT34401_IO_TIMEOUT	= -2147204587,
	E_AGILENT34401_MODEL_NOT_SUPPORTED	= -2147204586,
	E_AGILENT34401_WRAPPED_DRIVER_ERROR	= -2147204584,
	E_AGILENT34401_MAX_TIME_EXCEEDED	= -2147205119,
	E_AGILENT34401_NOT_SUPPORTED	= -2147205118
    } 	Agilent34401ErrorCodesEnum;


EXTERN_C const IID LIBID_Agilent34401Lib;

#ifndef __IAgilent34401_INTERFACE_DEFINED__
#define __IAgilent34401_INTERFACE_DEFINED__

/* interface IAgilent34401 */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAgilent34401;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d2ba7d2b-0e36-4543-9369-7934594ca0c7")
    IAgilent34401 : public IIviDriver
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Function( 
            /* [retval][out] */ enum Agilent34401FunctionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Function( 
            /* [in] */ enum Agilent34401FunctionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AC( 
            /* [retval][out] */ IAgilent34401AC **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Trigger( 
            /* [retval][out] */ IAgilent34401Trigger **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_System( 
            /* [retval][out] */ IAgilent34401System **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ IAgilent34401Status **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Resistance( 
            /* [retval][out] */ IAgilent34401Resistance **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Measurement( 
            /* [retval][out] */ IAgilent34401Measurement **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Math( 
            /* [retval][out] */ IAgilent34401Math **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Frequency( 
            /* [retval][out] */ IAgilent34401Frequency **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Display( 
            /* [retval][out] */ IAgilent34401Display **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DCVoltageRatio( 
            /* [retval][out] */ IAgilent34401DCVoltageRatio **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DCVoltage( 
            /* [retval][out] */ IAgilent34401DCVoltage **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DCCurrent( 
            /* [retval][out] */ IAgilent34401DCCurrent **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Calibration( 
            /* [retval][out] */ IAgilent34401Calibration **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Advanced( 
            /* [retval][out] */ IAgilent34401Advanced **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ACVoltage( 
            /* [retval][out] */ IAgilent34401ACVoltage **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ACCurrent( 
            /* [retval][out] */ IAgilent34401ACCurrent **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IviDmm( 
            /* [retval][out] */ /* external definition not present */ IIviDmm **Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgilent34401Vtbl
    {
        BEGIN_INTERFACE
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgilent34401 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj);
        
        /* [id][restricted][funcdescattr] */ unsigned long ( STDMETHODCALLTYPE *AddRef )( 
            IAgilent34401 * This);
        
        /* [id][restricted][funcdescattr] */ unsigned long ( STDMETHODCALLTYPE *Release )( 
            IAgilent34401 * This);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_DriverOperation )( 
            IAgilent34401 * This,
            /* [out][idldescattr] */ IIviDriverOperation **pVal,
            /* [retval][out] */ HRESULT *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IAgilent34401 * This,
            /* [out][idldescattr] */ IIviDriverIdentity **pVal,
            /* [retval][out] */ HRESULT *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Utility )( 
            IAgilent34401 * This,
            /* [out][idldescattr] */ IIviDriverUtility **pVal,
            /* [retval][out] */ HRESULT *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IAgilent34401 * This,
            /* [in][idldescattr] */ BSTR ResourceName,
            /* [in][idldescattr] */ BOOLEAN IdQuery,
            /* [in][idldescattr] */ BOOLEAN Reset,
            /* [in][idldescattr] */ BSTR OptionString);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Initialized )( 
            IAgilent34401 * This,
            /* [out][idldescattr] */ BOOLEAN *pVal,
            /* [retval][out] */ HRESULT *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IAgilent34401 * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Function )( 
            IAgilent34401 * This,
            /* [retval][out] */ enum Agilent34401FunctionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Function )( 
            IAgilent34401 * This,
            /* [in] */ enum Agilent34401FunctionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AC )( 
            IAgilent34401 * This,
            /* [retval][out] */ IAgilent34401AC **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Trigger )( 
            IAgilent34401 * This,
            /* [retval][out] */ IAgilent34401Trigger **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_System )( 
            IAgilent34401 * This,
            /* [retval][out] */ IAgilent34401System **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IAgilent34401 * This,
            /* [retval][out] */ IAgilent34401Status **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resistance )( 
            IAgilent34401 * This,
            /* [retval][out] */ IAgilent34401Resistance **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Measurement )( 
            IAgilent34401 * This,
            /* [retval][out] */ IAgilent34401Measurement **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Math )( 
            IAgilent34401 * This,
            /* [retval][out] */ IAgilent34401Math **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            IAgilent34401 * This,
            /* [retval][out] */ IAgilent34401Frequency **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Display )( 
            IAgilent34401 * This,
            /* [retval][out] */ IAgilent34401Display **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DCVoltageRatio )( 
            IAgilent34401 * This,
            /* [retval][out] */ IAgilent34401DCVoltageRatio **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DCVoltage )( 
            IAgilent34401 * This,
            /* [retval][out] */ IAgilent34401DCVoltage **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DCCurrent )( 
            IAgilent34401 * This,
            /* [retval][out] */ IAgilent34401DCCurrent **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Calibration )( 
            IAgilent34401 * This,
            /* [retval][out] */ IAgilent34401Calibration **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Advanced )( 
            IAgilent34401 * This,
            /* [retval][out] */ IAgilent34401Advanced **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ACVoltage )( 
            IAgilent34401 * This,
            /* [retval][out] */ IAgilent34401ACVoltage **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ACCurrent )( 
            IAgilent34401 * This,
            /* [retval][out] */ IAgilent34401ACCurrent **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IviDmm )( 
            IAgilent34401 * This,
            /* [retval][out] */ /* external definition not present */ IIviDmm **Val);
        
        END_INTERFACE
    } IAgilent34401Vtbl;

    interface IAgilent34401
    {
        CONST_VTBL struct IAgilent34401Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgilent34401_QueryInterface(This,riid,ppvObj)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj) ) 

#define IAgilent34401_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgilent34401_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgilent34401_get_DriverOperation(This,pVal,retval)	\
    ( (This)->lpVtbl -> get_DriverOperation(This,pVal,retval) ) 

#define IAgilent34401_get_Identity(This,pVal,retval)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal,retval) ) 

#define IAgilent34401_get_Utility(This,pVal,retval)	\
    ( (This)->lpVtbl -> get_Utility(This,pVal,retval) ) 

#define IAgilent34401_Initialize(This,ResourceName,IdQuery,Reset,OptionString)	\
    ( (This)->lpVtbl -> Initialize(This,ResourceName,IdQuery,Reset,OptionString) ) 

#define IAgilent34401_get_Initialized(This,pVal,retval)	\
    ( (This)->lpVtbl -> get_Initialized(This,pVal,retval) ) 

#define IAgilent34401_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 


#define IAgilent34401_get_Function(This,Val)	\
    ( (This)->lpVtbl -> get_Function(This,Val) ) 

#define IAgilent34401_put_Function(This,Val)	\
    ( (This)->lpVtbl -> put_Function(This,Val) ) 

#define IAgilent34401_get_AC(This,Val)	\
    ( (This)->lpVtbl -> get_AC(This,Val) ) 

#define IAgilent34401_get_Trigger(This,Val)	\
    ( (This)->lpVtbl -> get_Trigger(This,Val) ) 

#define IAgilent34401_get_System(This,Val)	\
    ( (This)->lpVtbl -> get_System(This,Val) ) 

#define IAgilent34401_get_Status(This,Val)	\
    ( (This)->lpVtbl -> get_Status(This,Val) ) 

#define IAgilent34401_get_Resistance(This,Val)	\
    ( (This)->lpVtbl -> get_Resistance(This,Val) ) 

#define IAgilent34401_get_Measurement(This,Val)	\
    ( (This)->lpVtbl -> get_Measurement(This,Val) ) 

#define IAgilent34401_get_Math(This,Val)	\
    ( (This)->lpVtbl -> get_Math(This,Val) ) 

#define IAgilent34401_get_Frequency(This,Val)	\
    ( (This)->lpVtbl -> get_Frequency(This,Val) ) 

#define IAgilent34401_get_Display(This,Val)	\
    ( (This)->lpVtbl -> get_Display(This,Val) ) 

#define IAgilent34401_get_DCVoltageRatio(This,Val)	\
    ( (This)->lpVtbl -> get_DCVoltageRatio(This,Val) ) 

#define IAgilent34401_get_DCVoltage(This,Val)	\
    ( (This)->lpVtbl -> get_DCVoltage(This,Val) ) 

#define IAgilent34401_get_DCCurrent(This,Val)	\
    ( (This)->lpVtbl -> get_DCCurrent(This,Val) ) 

#define IAgilent34401_get_Calibration(This,Val)	\
    ( (This)->lpVtbl -> get_Calibration(This,Val) ) 

#define IAgilent34401_get_Advanced(This,Val)	\
    ( (This)->lpVtbl -> get_Advanced(This,Val) ) 

#define IAgilent34401_get_ACVoltage(This,Val)	\
    ( (This)->lpVtbl -> get_ACVoltage(This,Val) ) 

#define IAgilent34401_get_ACCurrent(This,Val)	\
    ( (This)->lpVtbl -> get_ACCurrent(This,Val) ) 

#define IAgilent34401_get_IviDmm(This,Val)	\
    ( (This)->lpVtbl -> get_IviDmm(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgilent34401_INTERFACE_DEFINED__ */


#ifndef __IAgilent34401AC_INTERFACE_DEFINED__
#define __IAgilent34401AC_INTERFACE_DEFINED__

/* interface IAgilent34401AC */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAgilent34401AC;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1070bb6d-c3c7-48d3-8018-86c05b4dd995")
    IAgilent34401AC : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureBandwidth( 
            /* [in] */ double MinFreq,
            /* [in] */ double MaxFreq) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FrequencyMax( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FrequencyMin( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FrequencyMin( 
            /* [in] */ double Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgilent34401ACVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgilent34401AC * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgilent34401AC * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgilent34401AC * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureBandwidth )( 
            IAgilent34401AC * This,
            /* [in] */ double MinFreq,
            /* [in] */ double MaxFreq);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrequencyMax )( 
            IAgilent34401AC * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrequencyMin )( 
            IAgilent34401AC * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FrequencyMin )( 
            IAgilent34401AC * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IAgilent34401ACVtbl;

    interface IAgilent34401AC
    {
        CONST_VTBL struct IAgilent34401ACVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgilent34401AC_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgilent34401AC_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgilent34401AC_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgilent34401AC_ConfigureBandwidth(This,MinFreq,MaxFreq)	\
    ( (This)->lpVtbl -> ConfigureBandwidth(This,MinFreq,MaxFreq) ) 

#define IAgilent34401AC_get_FrequencyMax(This,Val)	\
    ( (This)->lpVtbl -> get_FrequencyMax(This,Val) ) 

#define IAgilent34401AC_get_FrequencyMin(This,Val)	\
    ( (This)->lpVtbl -> get_FrequencyMin(This,Val) ) 

#define IAgilent34401AC_put_FrequencyMin(This,Val)	\
    ( (This)->lpVtbl -> put_FrequencyMin(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgilent34401AC_INTERFACE_DEFINED__ */


#ifndef __IAgilent34401ACCurrent_INTERFACE_DEFINED__
#define __IAgilent34401ACCurrent_INTERFACE_DEFINED__

/* interface IAgilent34401ACCurrent */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAgilent34401ACCurrent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6fc5c3ad-02c5-4629-b670-34d722d6386e")
    IAgilent34401ACCurrent : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double Range,
            /* [in] */ double Resolution) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AutoRange( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AutoRange( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Range( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Range( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RangeMax( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RangeMin( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Resolution( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Resolution( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ResolutionMax( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ResolutionMin( 
            /* [retval][out] */ double *Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgilent34401ACCurrentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgilent34401ACCurrent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgilent34401ACCurrent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgilent34401ACCurrent * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IAgilent34401ACCurrent * This,
            /* [in] */ double Range,
            /* [in] */ double Resolution);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoRange )( 
            IAgilent34401ACCurrent * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoRange )( 
            IAgilent34401ACCurrent * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Range )( 
            IAgilent34401ACCurrent * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Range )( 
            IAgilent34401ACCurrent * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RangeMax )( 
            IAgilent34401ACCurrent * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RangeMin )( 
            IAgilent34401ACCurrent * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resolution )( 
            IAgilent34401ACCurrent * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resolution )( 
            IAgilent34401ACCurrent * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResolutionMax )( 
            IAgilent34401ACCurrent * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResolutionMin )( 
            IAgilent34401ACCurrent * This,
            /* [retval][out] */ double *Val);
        
        END_INTERFACE
    } IAgilent34401ACCurrentVtbl;

    interface IAgilent34401ACCurrent
    {
        CONST_VTBL struct IAgilent34401ACCurrentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgilent34401ACCurrent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgilent34401ACCurrent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgilent34401ACCurrent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgilent34401ACCurrent_Configure(This,Range,Resolution)	\
    ( (This)->lpVtbl -> Configure(This,Range,Resolution) ) 

#define IAgilent34401ACCurrent_get_AutoRange(This,Val)	\
    ( (This)->lpVtbl -> get_AutoRange(This,Val) ) 

#define IAgilent34401ACCurrent_put_AutoRange(This,Val)	\
    ( (This)->lpVtbl -> put_AutoRange(This,Val) ) 

#define IAgilent34401ACCurrent_get_Range(This,Val)	\
    ( (This)->lpVtbl -> get_Range(This,Val) ) 

#define IAgilent34401ACCurrent_put_Range(This,Val)	\
    ( (This)->lpVtbl -> put_Range(This,Val) ) 

#define IAgilent34401ACCurrent_get_RangeMax(This,Val)	\
    ( (This)->lpVtbl -> get_RangeMax(This,Val) ) 

#define IAgilent34401ACCurrent_get_RangeMin(This,Val)	\
    ( (This)->lpVtbl -> get_RangeMin(This,Val) ) 

#define IAgilent34401ACCurrent_get_Resolution(This,Val)	\
    ( (This)->lpVtbl -> get_Resolution(This,Val) ) 

#define IAgilent34401ACCurrent_put_Resolution(This,Val)	\
    ( (This)->lpVtbl -> put_Resolution(This,Val) ) 

#define IAgilent34401ACCurrent_get_ResolutionMax(This,Val)	\
    ( (This)->lpVtbl -> get_ResolutionMax(This,Val) ) 

#define IAgilent34401ACCurrent_get_ResolutionMin(This,Val)	\
    ( (This)->lpVtbl -> get_ResolutionMin(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgilent34401ACCurrent_INTERFACE_DEFINED__ */


#ifndef __IAgilent34401ACVoltage_INTERFACE_DEFINED__
#define __IAgilent34401ACVoltage_INTERFACE_DEFINED__

/* interface IAgilent34401ACVoltage */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAgilent34401ACVoltage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("da4c0814-0fb5-418d-8e17-bdb0d1777ea2")
    IAgilent34401ACVoltage : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double Range,
            /* [in] */ double Resolution) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AutoRange( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AutoRange( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Range( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Range( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RangeMax( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RangeMin( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Resolution( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Resolution( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ResolutionMax( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ResolutionMin( 
            /* [retval][out] */ double *Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgilent34401ACVoltageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgilent34401ACVoltage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgilent34401ACVoltage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgilent34401ACVoltage * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IAgilent34401ACVoltage * This,
            /* [in] */ double Range,
            /* [in] */ double Resolution);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoRange )( 
            IAgilent34401ACVoltage * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoRange )( 
            IAgilent34401ACVoltage * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Range )( 
            IAgilent34401ACVoltage * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Range )( 
            IAgilent34401ACVoltage * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RangeMax )( 
            IAgilent34401ACVoltage * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RangeMin )( 
            IAgilent34401ACVoltage * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resolution )( 
            IAgilent34401ACVoltage * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resolution )( 
            IAgilent34401ACVoltage * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResolutionMax )( 
            IAgilent34401ACVoltage * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResolutionMin )( 
            IAgilent34401ACVoltage * This,
            /* [retval][out] */ double *Val);
        
        END_INTERFACE
    } IAgilent34401ACVoltageVtbl;

    interface IAgilent34401ACVoltage
    {
        CONST_VTBL struct IAgilent34401ACVoltageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgilent34401ACVoltage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgilent34401ACVoltage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgilent34401ACVoltage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgilent34401ACVoltage_Configure(This,Range,Resolution)	\
    ( (This)->lpVtbl -> Configure(This,Range,Resolution) ) 

#define IAgilent34401ACVoltage_get_AutoRange(This,Val)	\
    ( (This)->lpVtbl -> get_AutoRange(This,Val) ) 

#define IAgilent34401ACVoltage_put_AutoRange(This,Val)	\
    ( (This)->lpVtbl -> put_AutoRange(This,Val) ) 

#define IAgilent34401ACVoltage_get_Range(This,Val)	\
    ( (This)->lpVtbl -> get_Range(This,Val) ) 

#define IAgilent34401ACVoltage_put_Range(This,Val)	\
    ( (This)->lpVtbl -> put_Range(This,Val) ) 

#define IAgilent34401ACVoltage_get_RangeMax(This,Val)	\
    ( (This)->lpVtbl -> get_RangeMax(This,Val) ) 

#define IAgilent34401ACVoltage_get_RangeMin(This,Val)	\
    ( (This)->lpVtbl -> get_RangeMin(This,Val) ) 

#define IAgilent34401ACVoltage_get_Resolution(This,Val)	\
    ( (This)->lpVtbl -> get_Resolution(This,Val) ) 

#define IAgilent34401ACVoltage_put_Resolution(This,Val)	\
    ( (This)->lpVtbl -> put_Resolution(This,Val) ) 

#define IAgilent34401ACVoltage_get_ResolutionMax(This,Val)	\
    ( (This)->lpVtbl -> get_ResolutionMax(This,Val) ) 

#define IAgilent34401ACVoltage_get_ResolutionMin(This,Val)	\
    ( (This)->lpVtbl -> get_ResolutionMin(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgilent34401ACVoltage_INTERFACE_DEFINED__ */


#ifndef __IAgilent34401Advanced_INTERFACE_DEFINED__
#define __IAgilent34401Advanced_INTERFACE_DEFINED__

/* interface IAgilent34401Advanced */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAgilent34401Advanced;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a7969b00-ca16-448b-b425-b38da50e662c")
    IAgilent34401Advanced : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ActualRange( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ApertureTime( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ApertureTime( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ApertureTimeUnits( 
            /* [retval][out] */ enum Agilent34401ApertureTimeUnitsEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AutoImpedance( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AutoImpedance( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AutoZero( 
            /* [retval][out] */ enum Agilent34401AutoZeroEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AutoZero( 
            /* [in] */ enum Agilent34401AutoZeroEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_InputTerminal( 
            /* [retval][out] */ enum Agilent34401InputTerminalEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_PowerlineFrequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_StoreEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_StoreEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgilent34401AdvancedVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgilent34401Advanced * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgilent34401Advanced * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgilent34401Advanced * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActualRange )( 
            IAgilent34401Advanced * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ApertureTime )( 
            IAgilent34401Advanced * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ApertureTime )( 
            IAgilent34401Advanced * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ApertureTimeUnits )( 
            IAgilent34401Advanced * This,
            /* [retval][out] */ enum Agilent34401ApertureTimeUnitsEnum *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoImpedance )( 
            IAgilent34401Advanced * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoImpedance )( 
            IAgilent34401Advanced * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoZero )( 
            IAgilent34401Advanced * This,
            /* [retval][out] */ enum Agilent34401AutoZeroEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoZero )( 
            IAgilent34401Advanced * This,
            /* [in] */ enum Agilent34401AutoZeroEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InputTerminal )( 
            IAgilent34401Advanced * This,
            /* [retval][out] */ enum Agilent34401InputTerminalEnum *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PowerlineFrequency )( 
            IAgilent34401Advanced * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StoreEnabled )( 
            IAgilent34401Advanced * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StoreEnabled )( 
            IAgilent34401Advanced * This,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } IAgilent34401AdvancedVtbl;

    interface IAgilent34401Advanced
    {
        CONST_VTBL struct IAgilent34401AdvancedVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgilent34401Advanced_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgilent34401Advanced_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgilent34401Advanced_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgilent34401Advanced_get_ActualRange(This,Val)	\
    ( (This)->lpVtbl -> get_ActualRange(This,Val) ) 

#define IAgilent34401Advanced_get_ApertureTime(This,Val)	\
    ( (This)->lpVtbl -> get_ApertureTime(This,Val) ) 

#define IAgilent34401Advanced_put_ApertureTime(This,Val)	\
    ( (This)->lpVtbl -> put_ApertureTime(This,Val) ) 

#define IAgilent34401Advanced_get_ApertureTimeUnits(This,Val)	\
    ( (This)->lpVtbl -> get_ApertureTimeUnits(This,Val) ) 

#define IAgilent34401Advanced_get_AutoImpedance(This,Val)	\
    ( (This)->lpVtbl -> get_AutoImpedance(This,Val) ) 

#define IAgilent34401Advanced_put_AutoImpedance(This,Val)	\
    ( (This)->lpVtbl -> put_AutoImpedance(This,Val) ) 

#define IAgilent34401Advanced_get_AutoZero(This,Val)	\
    ( (This)->lpVtbl -> get_AutoZero(This,Val) ) 

#define IAgilent34401Advanced_put_AutoZero(This,Val)	\
    ( (This)->lpVtbl -> put_AutoZero(This,Val) ) 

#define IAgilent34401Advanced_get_InputTerminal(This,Val)	\
    ( (This)->lpVtbl -> get_InputTerminal(This,Val) ) 

#define IAgilent34401Advanced_get_PowerlineFrequency(This,Val)	\
    ( (This)->lpVtbl -> get_PowerlineFrequency(This,Val) ) 

#define IAgilent34401Advanced_get_StoreEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_StoreEnabled(This,Val) ) 

#define IAgilent34401Advanced_put_StoreEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_StoreEnabled(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgilent34401Advanced_INTERFACE_DEFINED__ */


#ifndef __IAgilent34401Calibration_INTERFACE_DEFINED__
#define __IAgilent34401Calibration_INTERFACE_DEFINED__

/* interface IAgilent34401Calibration */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAgilent34401Calibration;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6ef95344-3ba8-4df4-88b5-f7b161c6d9df")
    IAgilent34401Calibration : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SecureCode( 
            /* [in] */ VARIANT_BOOL SecureState,
            /* [in] */ BSTR Code) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Code( 
            /* [in] */ BSTR Code) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SecureState( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_String( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_String( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ double Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgilent34401CalibrationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgilent34401Calibration * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgilent34401Calibration * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgilent34401Calibration * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SecureCode )( 
            IAgilent34401Calibration * This,
            /* [in] */ VARIANT_BOOL SecureState,
            /* [in] */ BSTR Code);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Code )( 
            IAgilent34401Calibration * This,
            /* [in] */ BSTR Code);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAgilent34401Calibration * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecureState )( 
            IAgilent34401Calibration * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_String )( 
            IAgilent34401Calibration * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_String )( 
            IAgilent34401Calibration * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IAgilent34401Calibration * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            IAgilent34401Calibration * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IAgilent34401CalibrationVtbl;

    interface IAgilent34401Calibration
    {
        CONST_VTBL struct IAgilent34401CalibrationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgilent34401Calibration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgilent34401Calibration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgilent34401Calibration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgilent34401Calibration_SecureCode(This,SecureState,Code)	\
    ( (This)->lpVtbl -> SecureCode(This,SecureState,Code) ) 

#define IAgilent34401Calibration_Code(This,Code)	\
    ( (This)->lpVtbl -> Code(This,Code) ) 

#define IAgilent34401Calibration_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define IAgilent34401Calibration_get_SecureState(This,Val)	\
    ( (This)->lpVtbl -> get_SecureState(This,Val) ) 

#define IAgilent34401Calibration_get_String(This,Val)	\
    ( (This)->lpVtbl -> get_String(This,Val) ) 

#define IAgilent34401Calibration_put_String(This,Val)	\
    ( (This)->lpVtbl -> put_String(This,Val) ) 

#define IAgilent34401Calibration_get_Value(This,Val)	\
    ( (This)->lpVtbl -> get_Value(This,Val) ) 

#define IAgilent34401Calibration_put_Value(This,Val)	\
    ( (This)->lpVtbl -> put_Value(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgilent34401Calibration_INTERFACE_DEFINED__ */


#ifndef __IAgilent34401DCCurrent_INTERFACE_DEFINED__
#define __IAgilent34401DCCurrent_INTERFACE_DEFINED__

/* interface IAgilent34401DCCurrent */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAgilent34401DCCurrent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("09d48f72-d3e9-40a8-917b-9a181ad36eaa")
    IAgilent34401DCCurrent : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double Range,
            /* [in] */ double Resolution) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AutoRange( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AutoRange( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Range( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Range( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RangeMax( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RangeMin( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Resolution( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Resolution( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ResolutionMax( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ResolutionMin( 
            /* [retval][out] */ double *Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgilent34401DCCurrentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgilent34401DCCurrent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgilent34401DCCurrent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgilent34401DCCurrent * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IAgilent34401DCCurrent * This,
            /* [in] */ double Range,
            /* [in] */ double Resolution);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoRange )( 
            IAgilent34401DCCurrent * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoRange )( 
            IAgilent34401DCCurrent * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Range )( 
            IAgilent34401DCCurrent * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Range )( 
            IAgilent34401DCCurrent * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RangeMax )( 
            IAgilent34401DCCurrent * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RangeMin )( 
            IAgilent34401DCCurrent * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resolution )( 
            IAgilent34401DCCurrent * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resolution )( 
            IAgilent34401DCCurrent * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResolutionMax )( 
            IAgilent34401DCCurrent * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResolutionMin )( 
            IAgilent34401DCCurrent * This,
            /* [retval][out] */ double *Val);
        
        END_INTERFACE
    } IAgilent34401DCCurrentVtbl;

    interface IAgilent34401DCCurrent
    {
        CONST_VTBL struct IAgilent34401DCCurrentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgilent34401DCCurrent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgilent34401DCCurrent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgilent34401DCCurrent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgilent34401DCCurrent_Configure(This,Range,Resolution)	\
    ( (This)->lpVtbl -> Configure(This,Range,Resolution) ) 

#define IAgilent34401DCCurrent_get_AutoRange(This,Val)	\
    ( (This)->lpVtbl -> get_AutoRange(This,Val) ) 

#define IAgilent34401DCCurrent_put_AutoRange(This,Val)	\
    ( (This)->lpVtbl -> put_AutoRange(This,Val) ) 

#define IAgilent34401DCCurrent_get_Range(This,Val)	\
    ( (This)->lpVtbl -> get_Range(This,Val) ) 

#define IAgilent34401DCCurrent_put_Range(This,Val)	\
    ( (This)->lpVtbl -> put_Range(This,Val) ) 

#define IAgilent34401DCCurrent_get_RangeMax(This,Val)	\
    ( (This)->lpVtbl -> get_RangeMax(This,Val) ) 

#define IAgilent34401DCCurrent_get_RangeMin(This,Val)	\
    ( (This)->lpVtbl -> get_RangeMin(This,Val) ) 

#define IAgilent34401DCCurrent_get_Resolution(This,Val)	\
    ( (This)->lpVtbl -> get_Resolution(This,Val) ) 

#define IAgilent34401DCCurrent_put_Resolution(This,Val)	\
    ( (This)->lpVtbl -> put_Resolution(This,Val) ) 

#define IAgilent34401DCCurrent_get_ResolutionMax(This,Val)	\
    ( (This)->lpVtbl -> get_ResolutionMax(This,Val) ) 

#define IAgilent34401DCCurrent_get_ResolutionMin(This,Val)	\
    ( (This)->lpVtbl -> get_ResolutionMin(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgilent34401DCCurrent_INTERFACE_DEFINED__ */


#ifndef __IAgilent34401DCVoltage_INTERFACE_DEFINED__
#define __IAgilent34401DCVoltage_INTERFACE_DEFINED__

/* interface IAgilent34401DCVoltage */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAgilent34401DCVoltage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fdced3ff-f290-458b-a1ef-273391c30ac5")
    IAgilent34401DCVoltage : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double Range,
            /* [in] */ double Resolution) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AutoRange( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AutoRange( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Range( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Range( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RangeMax( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RangeMin( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Resolution( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Resolution( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ResolutionMax( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ResolutionMin( 
            /* [retval][out] */ double *Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgilent34401DCVoltageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgilent34401DCVoltage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgilent34401DCVoltage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgilent34401DCVoltage * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IAgilent34401DCVoltage * This,
            /* [in] */ double Range,
            /* [in] */ double Resolution);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoRange )( 
            IAgilent34401DCVoltage * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoRange )( 
            IAgilent34401DCVoltage * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Range )( 
            IAgilent34401DCVoltage * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Range )( 
            IAgilent34401DCVoltage * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RangeMax )( 
            IAgilent34401DCVoltage * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RangeMin )( 
            IAgilent34401DCVoltage * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resolution )( 
            IAgilent34401DCVoltage * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resolution )( 
            IAgilent34401DCVoltage * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResolutionMax )( 
            IAgilent34401DCVoltage * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResolutionMin )( 
            IAgilent34401DCVoltage * This,
            /* [retval][out] */ double *Val);
        
        END_INTERFACE
    } IAgilent34401DCVoltageVtbl;

    interface IAgilent34401DCVoltage
    {
        CONST_VTBL struct IAgilent34401DCVoltageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgilent34401DCVoltage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgilent34401DCVoltage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgilent34401DCVoltage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgilent34401DCVoltage_Configure(This,Range,Resolution)	\
    ( (This)->lpVtbl -> Configure(This,Range,Resolution) ) 

#define IAgilent34401DCVoltage_get_AutoRange(This,Val)	\
    ( (This)->lpVtbl -> get_AutoRange(This,Val) ) 

#define IAgilent34401DCVoltage_put_AutoRange(This,Val)	\
    ( (This)->lpVtbl -> put_AutoRange(This,Val) ) 

#define IAgilent34401DCVoltage_get_Range(This,Val)	\
    ( (This)->lpVtbl -> get_Range(This,Val) ) 

#define IAgilent34401DCVoltage_put_Range(This,Val)	\
    ( (This)->lpVtbl -> put_Range(This,Val) ) 

#define IAgilent34401DCVoltage_get_RangeMax(This,Val)	\
    ( (This)->lpVtbl -> get_RangeMax(This,Val) ) 

#define IAgilent34401DCVoltage_get_RangeMin(This,Val)	\
    ( (This)->lpVtbl -> get_RangeMin(This,Val) ) 

#define IAgilent34401DCVoltage_get_Resolution(This,Val)	\
    ( (This)->lpVtbl -> get_Resolution(This,Val) ) 

#define IAgilent34401DCVoltage_put_Resolution(This,Val)	\
    ( (This)->lpVtbl -> put_Resolution(This,Val) ) 

#define IAgilent34401DCVoltage_get_ResolutionMax(This,Val)	\
    ( (This)->lpVtbl -> get_ResolutionMax(This,Val) ) 

#define IAgilent34401DCVoltage_get_ResolutionMin(This,Val)	\
    ( (This)->lpVtbl -> get_ResolutionMin(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgilent34401DCVoltage_INTERFACE_DEFINED__ */


#ifndef __IAgilent34401DCVoltageRatio_INTERFACE_DEFINED__
#define __IAgilent34401DCVoltageRatio_INTERFACE_DEFINED__

/* interface IAgilent34401DCVoltageRatio */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAgilent34401DCVoltageRatio;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("691b0960-791d-4dcb-9f63-9ee42f933d1e")
    IAgilent34401DCVoltageRatio : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_InputVoltageMax( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_InputVoltageMin( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceVoltageMax( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceVoltageMin( 
            /* [retval][out] */ double *Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgilent34401DCVoltageRatioVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgilent34401DCVoltageRatio * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgilent34401DCVoltageRatio * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgilent34401DCVoltageRatio * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InputVoltageMax )( 
            IAgilent34401DCVoltageRatio * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InputVoltageMin )( 
            IAgilent34401DCVoltageRatio * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceVoltageMax )( 
            IAgilent34401DCVoltageRatio * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceVoltageMin )( 
            IAgilent34401DCVoltageRatio * This,
            /* [retval][out] */ double *Val);
        
        END_INTERFACE
    } IAgilent34401DCVoltageRatioVtbl;

    interface IAgilent34401DCVoltageRatio
    {
        CONST_VTBL struct IAgilent34401DCVoltageRatioVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgilent34401DCVoltageRatio_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgilent34401DCVoltageRatio_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgilent34401DCVoltageRatio_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgilent34401DCVoltageRatio_get_InputVoltageMax(This,Val)	\
    ( (This)->lpVtbl -> get_InputVoltageMax(This,Val) ) 

#define IAgilent34401DCVoltageRatio_get_InputVoltageMin(This,Val)	\
    ( (This)->lpVtbl -> get_InputVoltageMin(This,Val) ) 

#define IAgilent34401DCVoltageRatio_get_ReferenceVoltageMax(This,Val)	\
    ( (This)->lpVtbl -> get_ReferenceVoltageMax(This,Val) ) 

#define IAgilent34401DCVoltageRatio_get_ReferenceVoltageMin(This,Val)	\
    ( (This)->lpVtbl -> get_ReferenceVoltageMin(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgilent34401DCVoltageRatio_INTERFACE_DEFINED__ */


#ifndef __IAgilent34401Display_INTERFACE_DEFINED__
#define __IAgilent34401Display_INTERFACE_DEFINED__

/* interface IAgilent34401Display */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAgilent34401Display;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5f2a9806-c70b-4981-8c87-e74f68b20847")
    IAgilent34401Display : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Text( 
            /* [in] */ BSTR Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgilent34401DisplayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgilent34401Display * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgilent34401Display * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgilent34401Display * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAgilent34401Display * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IAgilent34401Display * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IAgilent34401Display * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IAgilent34401Display * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Text )( 
            IAgilent34401Display * This,
            /* [in] */ BSTR Val);
        
        END_INTERFACE
    } IAgilent34401DisplayVtbl;

    interface IAgilent34401Display
    {
        CONST_VTBL struct IAgilent34401DisplayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgilent34401Display_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgilent34401Display_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgilent34401Display_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgilent34401Display_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAgilent34401Display_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IAgilent34401Display_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IAgilent34401Display_get_Text(This,Val)	\
    ( (This)->lpVtbl -> get_Text(This,Val) ) 

#define IAgilent34401Display_put_Text(This,Val)	\
    ( (This)->lpVtbl -> put_Text(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgilent34401Display_INTERFACE_DEFINED__ */


#ifndef __IAgilent34401Frequency_INTERFACE_DEFINED__
#define __IAgilent34401Frequency_INTERFACE_DEFINED__

/* interface IAgilent34401Frequency */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAgilent34401Frequency;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c7f33e8a-b360-4e5c-a8aa-6849c5ba32a5")
    IAgilent34401Frequency : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AutoVoltageRange( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AutoVoltageRange( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VoltageRange( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_VoltageRange( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VoltageRangeMax( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VoltageRangeMin( 
            /* [retval][out] */ double *Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgilent34401FrequencyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgilent34401Frequency * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgilent34401Frequency * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgilent34401Frequency * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoVoltageRange )( 
            IAgilent34401Frequency * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoVoltageRange )( 
            IAgilent34401Frequency * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VoltageRange )( 
            IAgilent34401Frequency * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VoltageRange )( 
            IAgilent34401Frequency * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VoltageRangeMax )( 
            IAgilent34401Frequency * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VoltageRangeMin )( 
            IAgilent34401Frequency * This,
            /* [retval][out] */ double *Val);
        
        END_INTERFACE
    } IAgilent34401FrequencyVtbl;

    interface IAgilent34401Frequency
    {
        CONST_VTBL struct IAgilent34401FrequencyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgilent34401Frequency_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgilent34401Frequency_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgilent34401Frequency_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgilent34401Frequency_get_AutoVoltageRange(This,Val)	\
    ( (This)->lpVtbl -> get_AutoVoltageRange(This,Val) ) 

#define IAgilent34401Frequency_put_AutoVoltageRange(This,Val)	\
    ( (This)->lpVtbl -> put_AutoVoltageRange(This,Val) ) 

#define IAgilent34401Frequency_get_VoltageRange(This,Val)	\
    ( (This)->lpVtbl -> get_VoltageRange(This,Val) ) 

#define IAgilent34401Frequency_put_VoltageRange(This,Val)	\
    ( (This)->lpVtbl -> put_VoltageRange(This,Val) ) 

#define IAgilent34401Frequency_get_VoltageRangeMax(This,Val)	\
    ( (This)->lpVtbl -> get_VoltageRangeMax(This,Val) ) 

#define IAgilent34401Frequency_get_VoltageRangeMin(This,Val)	\
    ( (This)->lpVtbl -> get_VoltageRangeMin(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgilent34401Frequency_INTERFACE_DEFINED__ */


#ifndef __IAgilent34401Math_INTERFACE_DEFINED__
#define __IAgilent34401Math_INTERFACE_DEFINED__

/* interface IAgilent34401Math */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAgilent34401Math;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a8238fe0-5c7b-453c-8a70-b2a9da965cde")
    IAgilent34401Math : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Average( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_dBmRefResistance( 
            /* [retval][out] */ enum Agilent34401dBmRefResistanceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_dBmRefResistance( 
            /* [in] */ enum Agilent34401dBmRefResistanceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_dBReference( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_dBReference( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Function( 
            /* [retval][out] */ enum Agilent34401MathFunctionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Function( 
            /* [in] */ enum Agilent34401MathFunctionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LimitLower( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_LimitLower( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LimitUpper( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_LimitUpper( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Maximum( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Minimum( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NullOffset( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_NullOffset( 
            /* [in] */ double Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgilent34401MathVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgilent34401Math * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgilent34401Math * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgilent34401Math * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Average )( 
            IAgilent34401Math * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAgilent34401Math * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_dBmRefResistance )( 
            IAgilent34401Math * This,
            /* [retval][out] */ enum Agilent34401dBmRefResistanceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_dBmRefResistance )( 
            IAgilent34401Math * This,
            /* [in] */ enum Agilent34401dBmRefResistanceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_dBReference )( 
            IAgilent34401Math * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_dBReference )( 
            IAgilent34401Math * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IAgilent34401Math * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IAgilent34401Math * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Function )( 
            IAgilent34401Math * This,
            /* [retval][out] */ enum Agilent34401MathFunctionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Function )( 
            IAgilent34401Math * This,
            /* [in] */ enum Agilent34401MathFunctionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LimitLower )( 
            IAgilent34401Math * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LimitLower )( 
            IAgilent34401Math * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LimitUpper )( 
            IAgilent34401Math * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LimitUpper )( 
            IAgilent34401Math * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Maximum )( 
            IAgilent34401Math * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Minimum )( 
            IAgilent34401Math * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NullOffset )( 
            IAgilent34401Math * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NullOffset )( 
            IAgilent34401Math * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IAgilent34401MathVtbl;

    interface IAgilent34401Math
    {
        CONST_VTBL struct IAgilent34401MathVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgilent34401Math_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgilent34401Math_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgilent34401Math_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgilent34401Math_get_Average(This,Val)	\
    ( (This)->lpVtbl -> get_Average(This,Val) ) 

#define IAgilent34401Math_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define IAgilent34401Math_get_dBmRefResistance(This,Val)	\
    ( (This)->lpVtbl -> get_dBmRefResistance(This,Val) ) 

#define IAgilent34401Math_put_dBmRefResistance(This,Val)	\
    ( (This)->lpVtbl -> put_dBmRefResistance(This,Val) ) 

#define IAgilent34401Math_get_dBReference(This,Val)	\
    ( (This)->lpVtbl -> get_dBReference(This,Val) ) 

#define IAgilent34401Math_put_dBReference(This,Val)	\
    ( (This)->lpVtbl -> put_dBReference(This,Val) ) 

#define IAgilent34401Math_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IAgilent34401Math_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IAgilent34401Math_get_Function(This,Val)	\
    ( (This)->lpVtbl -> get_Function(This,Val) ) 

#define IAgilent34401Math_put_Function(This,Val)	\
    ( (This)->lpVtbl -> put_Function(This,Val) ) 

#define IAgilent34401Math_get_LimitLower(This,Val)	\
    ( (This)->lpVtbl -> get_LimitLower(This,Val) ) 

#define IAgilent34401Math_put_LimitLower(This,Val)	\
    ( (This)->lpVtbl -> put_LimitLower(This,Val) ) 

#define IAgilent34401Math_get_LimitUpper(This,Val)	\
    ( (This)->lpVtbl -> get_LimitUpper(This,Val) ) 

#define IAgilent34401Math_put_LimitUpper(This,Val)	\
    ( (This)->lpVtbl -> put_LimitUpper(This,Val) ) 

#define IAgilent34401Math_get_Maximum(This,Val)	\
    ( (This)->lpVtbl -> get_Maximum(This,Val) ) 

#define IAgilent34401Math_get_Minimum(This,Val)	\
    ( (This)->lpVtbl -> get_Minimum(This,Val) ) 

#define IAgilent34401Math_get_NullOffset(This,Val)	\
    ( (This)->lpVtbl -> get_NullOffset(This,Val) ) 

#define IAgilent34401Math_put_NullOffset(This,Val)	\
    ( (This)->lpVtbl -> put_NullOffset(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgilent34401Math_INTERFACE_DEFINED__ */


#ifndef __IAgilent34401Measurement_INTERFACE_DEFINED__
#define __IAgilent34401Measurement_INTERFACE_DEFINED__

/* interface IAgilent34401Measurement */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAgilent34401Measurement;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2a1587a1-de68-4467-b0c1-83a085db6def")
    IAgilent34401Measurement : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SendSoftwareTrigger( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadMultiPoint( 
            /* [in] */ long MaxTimeMilliseconds,
            /* [out][in] */ SAFEARRAY * *ReadingArray) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Read( 
            /* [in] */ long MaxTimeMilliseconds,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE IsOverRange( 
            /* [in] */ double MeasurementValue,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Initiate( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE FetchMultiPoint( 
            /* [in] */ long MaxTimeMilliseconds,
            /* [out][in] */ SAFEARRAY * *ReadingArray) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Fetch( 
            /* [in] */ long MaxTimeMilliseconds,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Abort( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgilent34401MeasurementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgilent34401Measurement * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgilent34401Measurement * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgilent34401Measurement * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SendSoftwareTrigger )( 
            IAgilent34401Measurement * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadMultiPoint )( 
            IAgilent34401Measurement * This,
            /* [in] */ long MaxTimeMilliseconds,
            /* [out][in] */ SAFEARRAY * *ReadingArray);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            IAgilent34401Measurement * This,
            /* [in] */ long MaxTimeMilliseconds,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *IsOverRange )( 
            IAgilent34401Measurement * This,
            /* [in] */ double MeasurementValue,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Initiate )( 
            IAgilent34401Measurement * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *FetchMultiPoint )( 
            IAgilent34401Measurement * This,
            /* [in] */ long MaxTimeMilliseconds,
            /* [out][in] */ SAFEARRAY * *ReadingArray);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Fetch )( 
            IAgilent34401Measurement * This,
            /* [in] */ long MaxTimeMilliseconds,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Abort )( 
            IAgilent34401Measurement * This);
        
        END_INTERFACE
    } IAgilent34401MeasurementVtbl;

    interface IAgilent34401Measurement
    {
        CONST_VTBL struct IAgilent34401MeasurementVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgilent34401Measurement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgilent34401Measurement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgilent34401Measurement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgilent34401Measurement_SendSoftwareTrigger(This)	\
    ( (This)->lpVtbl -> SendSoftwareTrigger(This) ) 

#define IAgilent34401Measurement_ReadMultiPoint(This,MaxTimeMilliseconds,ReadingArray)	\
    ( (This)->lpVtbl -> ReadMultiPoint(This,MaxTimeMilliseconds,ReadingArray) ) 

#define IAgilent34401Measurement_Read(This,MaxTimeMilliseconds,Val)	\
    ( (This)->lpVtbl -> Read(This,MaxTimeMilliseconds,Val) ) 

#define IAgilent34401Measurement_IsOverRange(This,MeasurementValue,Val)	\
    ( (This)->lpVtbl -> IsOverRange(This,MeasurementValue,Val) ) 

#define IAgilent34401Measurement_Initiate(This)	\
    ( (This)->lpVtbl -> Initiate(This) ) 

#define IAgilent34401Measurement_FetchMultiPoint(This,MaxTimeMilliseconds,ReadingArray)	\
    ( (This)->lpVtbl -> FetchMultiPoint(This,MaxTimeMilliseconds,ReadingArray) ) 

#define IAgilent34401Measurement_Fetch(This,MaxTimeMilliseconds,Val)	\
    ( (This)->lpVtbl -> Fetch(This,MaxTimeMilliseconds,Val) ) 

#define IAgilent34401Measurement_Abort(This)	\
    ( (This)->lpVtbl -> Abort(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgilent34401Measurement_INTERFACE_DEFINED__ */


#ifndef __IAgilent34401Resistance_INTERFACE_DEFINED__
#define __IAgilent34401Resistance_INTERFACE_DEFINED__

/* interface IAgilent34401Resistance */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAgilent34401Resistance;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("594dc894-7b4b-4b57-900d-d3dcb6be67c2")
    IAgilent34401Resistance : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double Range,
            /* [in] */ double Resolution) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AutoRange( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AutoRange( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Range( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Range( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RangeMax( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RangeMin( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Resolution( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Resolution( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ResolutionMax( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ResolutionMin( 
            /* [retval][out] */ double *Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgilent34401ResistanceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgilent34401Resistance * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgilent34401Resistance * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgilent34401Resistance * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IAgilent34401Resistance * This,
            /* [in] */ double Range,
            /* [in] */ double Resolution);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoRange )( 
            IAgilent34401Resistance * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoRange )( 
            IAgilent34401Resistance * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Range )( 
            IAgilent34401Resistance * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Range )( 
            IAgilent34401Resistance * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RangeMax )( 
            IAgilent34401Resistance * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RangeMin )( 
            IAgilent34401Resistance * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resolution )( 
            IAgilent34401Resistance * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resolution )( 
            IAgilent34401Resistance * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResolutionMax )( 
            IAgilent34401Resistance * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResolutionMin )( 
            IAgilent34401Resistance * This,
            /* [retval][out] */ double *Val);
        
        END_INTERFACE
    } IAgilent34401ResistanceVtbl;

    interface IAgilent34401Resistance
    {
        CONST_VTBL struct IAgilent34401ResistanceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgilent34401Resistance_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgilent34401Resistance_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgilent34401Resistance_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgilent34401Resistance_Configure(This,Range,Resolution)	\
    ( (This)->lpVtbl -> Configure(This,Range,Resolution) ) 

#define IAgilent34401Resistance_get_AutoRange(This,Val)	\
    ( (This)->lpVtbl -> get_AutoRange(This,Val) ) 

#define IAgilent34401Resistance_put_AutoRange(This,Val)	\
    ( (This)->lpVtbl -> put_AutoRange(This,Val) ) 

#define IAgilent34401Resistance_get_Range(This,Val)	\
    ( (This)->lpVtbl -> get_Range(This,Val) ) 

#define IAgilent34401Resistance_put_Range(This,Val)	\
    ( (This)->lpVtbl -> put_Range(This,Val) ) 

#define IAgilent34401Resistance_get_RangeMax(This,Val)	\
    ( (This)->lpVtbl -> get_RangeMax(This,Val) ) 

#define IAgilent34401Resistance_get_RangeMin(This,Val)	\
    ( (This)->lpVtbl -> get_RangeMin(This,Val) ) 

#define IAgilent34401Resistance_get_Resolution(This,Val)	\
    ( (This)->lpVtbl -> get_Resolution(This,Val) ) 

#define IAgilent34401Resistance_put_Resolution(This,Val)	\
    ( (This)->lpVtbl -> put_Resolution(This,Val) ) 

#define IAgilent34401Resistance_get_ResolutionMax(This,Val)	\
    ( (This)->lpVtbl -> get_ResolutionMax(This,Val) ) 

#define IAgilent34401Resistance_get_ResolutionMin(This,Val)	\
    ( (This)->lpVtbl -> get_ResolutionMin(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgilent34401Resistance_INTERFACE_DEFINED__ */


#ifndef __IAgilent34401Status_INTERFACE_DEFINED__
#define __IAgilent34401Status_INTERFACE_DEFINED__

/* interface IAgilent34401Status */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAgilent34401Status;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9df5ecb7-f2c0-41a1-be7e-968e23b181af")
    IAgilent34401Status : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE QueryRegister( 
            /* [in] */ enum Agilent34401StatusRegisterEnum Register,
            /* [in] */ enum Agilent34401StatusSubRegisterEnum SubRegister,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Preset( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureRegister( 
            /* [in] */ enum Agilent34401StatusRegisterEnum Register,
            /* [in] */ enum Agilent34401StatusSubRegisterEnum SubRegister,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Register( 
            /* [in] */ enum Agilent34401StatusRegisterEnum Register,
            /* [in] */ enum Agilent34401StatusSubRegisterEnum SubRegister,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Register( 
            /* [in] */ enum Agilent34401StatusRegisterEnum Register,
            /* [in] */ enum Agilent34401StatusSubRegisterEnum SubRegister,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SerialPoll( 
            /* [retval][out] */ long *Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgilent34401StatusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgilent34401Status * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgilent34401Status * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgilent34401Status * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *QueryRegister )( 
            IAgilent34401Status * This,
            /* [in] */ enum Agilent34401StatusRegisterEnum Register,
            /* [in] */ enum Agilent34401StatusSubRegisterEnum SubRegister,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Preset )( 
            IAgilent34401Status * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureRegister )( 
            IAgilent34401Status * This,
            /* [in] */ enum Agilent34401StatusRegisterEnum Register,
            /* [in] */ enum Agilent34401StatusSubRegisterEnum SubRegister,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAgilent34401Status * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Register )( 
            IAgilent34401Status * This,
            /* [in] */ enum Agilent34401StatusRegisterEnum Register,
            /* [in] */ enum Agilent34401StatusSubRegisterEnum SubRegister,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Register )( 
            IAgilent34401Status * This,
            /* [in] */ enum Agilent34401StatusRegisterEnum Register,
            /* [in] */ enum Agilent34401StatusSubRegisterEnum SubRegister,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SerialPoll )( 
            IAgilent34401Status * This,
            /* [retval][out] */ long *Val);
        
        END_INTERFACE
    } IAgilent34401StatusVtbl;

    interface IAgilent34401Status
    {
        CONST_VTBL struct IAgilent34401StatusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgilent34401Status_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgilent34401Status_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgilent34401Status_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgilent34401Status_QueryRegister(This,Register,SubRegister,Val)	\
    ( (This)->lpVtbl -> QueryRegister(This,Register,SubRegister,Val) ) 

#define IAgilent34401Status_Preset(This)	\
    ( (This)->lpVtbl -> Preset(This) ) 

#define IAgilent34401Status_ConfigureRegister(This,Register,SubRegister,Val)	\
    ( (This)->lpVtbl -> ConfigureRegister(This,Register,SubRegister,Val) ) 

#define IAgilent34401Status_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAgilent34401Status_get_Register(This,Register,SubRegister,Val)	\
    ( (This)->lpVtbl -> get_Register(This,Register,SubRegister,Val) ) 

#define IAgilent34401Status_put_Register(This,Register,SubRegister,Val)	\
    ( (This)->lpVtbl -> put_Register(This,Register,SubRegister,Val) ) 

#define IAgilent34401Status_get_SerialPoll(This,Val)	\
    ( (This)->lpVtbl -> get_SerialPoll(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgilent34401Status_INTERFACE_DEFINED__ */


#ifndef __IAgilent34401System_INTERFACE_DEFINED__
#define __IAgilent34401System_INTERFACE_DEFINED__

/* interface IAgilent34401System */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAgilent34401System;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("53ad251b-bf5e-4a5e-9bd9-effe717d713b")
    IAgilent34401System : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE WaitForOperationComplete( 
            /* [in] */ long MaxTimeMilliseconds) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE EnableLocalControls( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE DisableLocalControls( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Beep( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AsyncEventsEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AsyncEventsEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_BeeperEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_BeeperEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IO( 
            /* [retval][out] */ /* external definition not present */ IFormattedIO488 **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TimeoutMilliseconds( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TimeoutMilliseconds( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TraceEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TraceEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgilent34401SystemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgilent34401System * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgilent34401System * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgilent34401System * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *WaitForOperationComplete )( 
            IAgilent34401System * This,
            /* [in] */ long MaxTimeMilliseconds);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *EnableLocalControls )( 
            IAgilent34401System * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *DisableLocalControls )( 
            IAgilent34401System * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Beep )( 
            IAgilent34401System * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AsyncEventsEnabled )( 
            IAgilent34401System * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AsyncEventsEnabled )( 
            IAgilent34401System * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BeeperEnabled )( 
            IAgilent34401System * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BeeperEnabled )( 
            IAgilent34401System * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IO )( 
            IAgilent34401System * This,
            /* [retval][out] */ /* external definition not present */ IFormattedIO488 **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimeoutMilliseconds )( 
            IAgilent34401System * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TimeoutMilliseconds )( 
            IAgilent34401System * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TraceEnabled )( 
            IAgilent34401System * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TraceEnabled )( 
            IAgilent34401System * This,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } IAgilent34401SystemVtbl;

    interface IAgilent34401System
    {
        CONST_VTBL struct IAgilent34401SystemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgilent34401System_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgilent34401System_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgilent34401System_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgilent34401System_WaitForOperationComplete(This,MaxTimeMilliseconds)	\
    ( (This)->lpVtbl -> WaitForOperationComplete(This,MaxTimeMilliseconds) ) 

#define IAgilent34401System_EnableLocalControls(This)	\
    ( (This)->lpVtbl -> EnableLocalControls(This) ) 

#define IAgilent34401System_DisableLocalControls(This)	\
    ( (This)->lpVtbl -> DisableLocalControls(This) ) 

#define IAgilent34401System_Beep(This)	\
    ( (This)->lpVtbl -> Beep(This) ) 

#define IAgilent34401System_get_AsyncEventsEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_AsyncEventsEnabled(This,Val) ) 

#define IAgilent34401System_put_AsyncEventsEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_AsyncEventsEnabled(This,Val) ) 

#define IAgilent34401System_get_BeeperEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_BeeperEnabled(This,Val) ) 

#define IAgilent34401System_put_BeeperEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_BeeperEnabled(This,Val) ) 

#define IAgilent34401System_get_IO(This,Val)	\
    ( (This)->lpVtbl -> get_IO(This,Val) ) 

#define IAgilent34401System_get_TimeoutMilliseconds(This,Val)	\
    ( (This)->lpVtbl -> get_TimeoutMilliseconds(This,Val) ) 

#define IAgilent34401System_put_TimeoutMilliseconds(This,Val)	\
    ( (This)->lpVtbl -> put_TimeoutMilliseconds(This,Val) ) 

#define IAgilent34401System_get_TraceEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_TraceEnabled(This,Val) ) 

#define IAgilent34401System_put_TraceEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_TraceEnabled(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgilent34401System_INTERFACE_DEFINED__ */


#ifndef __IAgilent34401Trigger_INTERFACE_DEFINED__
#define __IAgilent34401Trigger_INTERFACE_DEFINED__

/* interface IAgilent34401Trigger */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAgilent34401Trigger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0c577683-55a2-44fa-8abf-ad1be8e4eef9")
    IAgilent34401Trigger : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ enum Agilent34401TriggerSourceEnum TriggerSource,
            /* [in] */ double TriggerDelay) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AutoDelay( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AutoDelay( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Delay( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Delay( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MultiPoint( 
            /* [retval][out] */ IAgilent34401MultiPoint **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Slope( 
            /* [retval][out] */ enum Agilent34401TriggerSlopeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ enum Agilent34401TriggerSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ enum Agilent34401TriggerSourceEnum Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgilent34401TriggerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgilent34401Trigger * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgilent34401Trigger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgilent34401Trigger * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IAgilent34401Trigger * This,
            /* [in] */ enum Agilent34401TriggerSourceEnum TriggerSource,
            /* [in] */ double TriggerDelay);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoDelay )( 
            IAgilent34401Trigger * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoDelay )( 
            IAgilent34401Trigger * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delay )( 
            IAgilent34401Trigger * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Delay )( 
            IAgilent34401Trigger * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MultiPoint )( 
            IAgilent34401Trigger * This,
            /* [retval][out] */ IAgilent34401MultiPoint **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Slope )( 
            IAgilent34401Trigger * This,
            /* [retval][out] */ enum Agilent34401TriggerSlopeEnum *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IAgilent34401Trigger * This,
            /* [retval][out] */ enum Agilent34401TriggerSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IAgilent34401Trigger * This,
            /* [in] */ enum Agilent34401TriggerSourceEnum Val);
        
        END_INTERFACE
    } IAgilent34401TriggerVtbl;

    interface IAgilent34401Trigger
    {
        CONST_VTBL struct IAgilent34401TriggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgilent34401Trigger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgilent34401Trigger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgilent34401Trigger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgilent34401Trigger_Configure(This,TriggerSource,TriggerDelay)	\
    ( (This)->lpVtbl -> Configure(This,TriggerSource,TriggerDelay) ) 

#define IAgilent34401Trigger_get_AutoDelay(This,Val)	\
    ( (This)->lpVtbl -> get_AutoDelay(This,Val) ) 

#define IAgilent34401Trigger_put_AutoDelay(This,Val)	\
    ( (This)->lpVtbl -> put_AutoDelay(This,Val) ) 

#define IAgilent34401Trigger_get_Delay(This,Val)	\
    ( (This)->lpVtbl -> get_Delay(This,Val) ) 

#define IAgilent34401Trigger_put_Delay(This,Val)	\
    ( (This)->lpVtbl -> put_Delay(This,Val) ) 

#define IAgilent34401Trigger_get_MultiPoint(This,Val)	\
    ( (This)->lpVtbl -> get_MultiPoint(This,Val) ) 

#define IAgilent34401Trigger_get_Slope(This,Val)	\
    ( (This)->lpVtbl -> get_Slope(This,Val) ) 

#define IAgilent34401Trigger_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#define IAgilent34401Trigger_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgilent34401Trigger_INTERFACE_DEFINED__ */


#ifndef __IAgilent34401MultiPoint_INTERFACE_DEFINED__
#define __IAgilent34401MultiPoint_INTERFACE_DEFINED__

/* interface IAgilent34401MultiPoint */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAgilent34401MultiPoint;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9326a975-24f0-4eb0-8330-fda1a4b29268")
    IAgilent34401MultiPoint : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ long TriggerCount,
            /* [in] */ long SampleCount,
            /* [in] */ enum Agilent34401SampleTriggerEnum SampleTrigger,
            /* [in] */ double SampleInterval) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Count( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MeasurementComplete( 
            /* [retval][out] */ enum Agilent34401MeasCompleteDestEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_MeasurementComplete( 
            /* [in] */ enum Agilent34401MeasCompleteDestEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SampleCount( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SampleCount( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SampleInterval( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SampleInterval( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SampleTrigger( 
            /* [retval][out] */ enum Agilent34401SampleTriggerEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SampleTrigger( 
            /* [in] */ enum Agilent34401SampleTriggerEnum Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgilent34401MultiPointVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgilent34401MultiPoint * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgilent34401MultiPoint * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgilent34401MultiPoint * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IAgilent34401MultiPoint * This,
            /* [in] */ long TriggerCount,
            /* [in] */ long SampleCount,
            /* [in] */ enum Agilent34401SampleTriggerEnum SampleTrigger,
            /* [in] */ double SampleInterval);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAgilent34401MultiPoint * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Count )( 
            IAgilent34401MultiPoint * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MeasurementComplete )( 
            IAgilent34401MultiPoint * This,
            /* [retval][out] */ enum Agilent34401MeasCompleteDestEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MeasurementComplete )( 
            IAgilent34401MultiPoint * This,
            /* [in] */ enum Agilent34401MeasCompleteDestEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SampleCount )( 
            IAgilent34401MultiPoint * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SampleCount )( 
            IAgilent34401MultiPoint * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SampleInterval )( 
            IAgilent34401MultiPoint * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SampleInterval )( 
            IAgilent34401MultiPoint * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SampleTrigger )( 
            IAgilent34401MultiPoint * This,
            /* [retval][out] */ enum Agilent34401SampleTriggerEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SampleTrigger )( 
            IAgilent34401MultiPoint * This,
            /* [in] */ enum Agilent34401SampleTriggerEnum Val);
        
        END_INTERFACE
    } IAgilent34401MultiPointVtbl;

    interface IAgilent34401MultiPoint
    {
        CONST_VTBL struct IAgilent34401MultiPointVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgilent34401MultiPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgilent34401MultiPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgilent34401MultiPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgilent34401MultiPoint_Configure(This,TriggerCount,SampleCount,SampleTrigger,SampleInterval)	\
    ( (This)->lpVtbl -> Configure(This,TriggerCount,SampleCount,SampleTrigger,SampleInterval) ) 

#define IAgilent34401MultiPoint_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define IAgilent34401MultiPoint_put_Count(This,Val)	\
    ( (This)->lpVtbl -> put_Count(This,Val) ) 

#define IAgilent34401MultiPoint_get_MeasurementComplete(This,Val)	\
    ( (This)->lpVtbl -> get_MeasurementComplete(This,Val) ) 

#define IAgilent34401MultiPoint_put_MeasurementComplete(This,Val)	\
    ( (This)->lpVtbl -> put_MeasurementComplete(This,Val) ) 

#define IAgilent34401MultiPoint_get_SampleCount(This,Val)	\
    ( (This)->lpVtbl -> get_SampleCount(This,Val) ) 

#define IAgilent34401MultiPoint_put_SampleCount(This,Val)	\
    ( (This)->lpVtbl -> put_SampleCount(This,Val) ) 

#define IAgilent34401MultiPoint_get_SampleInterval(This,Val)	\
    ( (This)->lpVtbl -> get_SampleInterval(This,Val) ) 

#define IAgilent34401MultiPoint_put_SampleInterval(This,Val)	\
    ( (This)->lpVtbl -> put_SampleInterval(This,Val) ) 

#define IAgilent34401MultiPoint_get_SampleTrigger(This,Val)	\
    ( (This)->lpVtbl -> get_SampleTrigger(This,Val) ) 

#define IAgilent34401MultiPoint_put_SampleTrigger(This,Val)	\
    ( (This)->lpVtbl -> put_SampleTrigger(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgilent34401MultiPoint_INTERFACE_DEFINED__ */


#ifndef __IAgilent34401System2_INTERFACE_DEFINED__
#define __IAgilent34401System2_INTERFACE_DEFINED__

/* interface IAgilent34401System2 */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAgilent34401System2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("45325fb7-a12e-49a0-b355-6c2f3ab0eac1")
    IAgilent34401System2 : public IAgilent34401System
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadBytes( 
            /* [retval][out] */ SAFEARRAY * *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadString( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE WriteBytes( 
            /* [in] */ SAFEARRAY * *Buffer,
            /* [retval][out] */ __int64 *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE WriteString( 
            /* [in] */ BSTR Data) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IOTimeout( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_IOTimeout( 
            /* [in] */ long Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgilent34401System2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgilent34401System2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgilent34401System2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgilent34401System2 * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *WaitForOperationComplete )( 
            IAgilent34401System2 * This,
            /* [in] */ long MaxTimeMilliseconds);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *EnableLocalControls )( 
            IAgilent34401System2 * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *DisableLocalControls )( 
            IAgilent34401System2 * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Beep )( 
            IAgilent34401System2 * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AsyncEventsEnabled )( 
            IAgilent34401System2 * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AsyncEventsEnabled )( 
            IAgilent34401System2 * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BeeperEnabled )( 
            IAgilent34401System2 * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BeeperEnabled )( 
            IAgilent34401System2 * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IO )( 
            IAgilent34401System2 * This,
            /* [retval][out] */ /* external definition not present */ IFormattedIO488 **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimeoutMilliseconds )( 
            IAgilent34401System2 * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TimeoutMilliseconds )( 
            IAgilent34401System2 * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TraceEnabled )( 
            IAgilent34401System2 * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TraceEnabled )( 
            IAgilent34401System2 * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadBytes )( 
            IAgilent34401System2 * This,
            /* [retval][out] */ SAFEARRAY * *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadString )( 
            IAgilent34401System2 * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *WriteBytes )( 
            IAgilent34401System2 * This,
            /* [in] */ SAFEARRAY * *Buffer,
            /* [retval][out] */ __int64 *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *WriteString )( 
            IAgilent34401System2 * This,
            /* [in] */ BSTR Data);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IOTimeout )( 
            IAgilent34401System2 * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IOTimeout )( 
            IAgilent34401System2 * This,
            /* [in] */ long Val);
        
        END_INTERFACE
    } IAgilent34401System2Vtbl;

    interface IAgilent34401System2
    {
        CONST_VTBL struct IAgilent34401System2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgilent34401System2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgilent34401System2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgilent34401System2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgilent34401System2_WaitForOperationComplete(This,MaxTimeMilliseconds)	\
    ( (This)->lpVtbl -> WaitForOperationComplete(This,MaxTimeMilliseconds) ) 

#define IAgilent34401System2_EnableLocalControls(This)	\
    ( (This)->lpVtbl -> EnableLocalControls(This) ) 

#define IAgilent34401System2_DisableLocalControls(This)	\
    ( (This)->lpVtbl -> DisableLocalControls(This) ) 

#define IAgilent34401System2_Beep(This)	\
    ( (This)->lpVtbl -> Beep(This) ) 

#define IAgilent34401System2_get_AsyncEventsEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_AsyncEventsEnabled(This,Val) ) 

#define IAgilent34401System2_put_AsyncEventsEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_AsyncEventsEnabled(This,Val) ) 

#define IAgilent34401System2_get_BeeperEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_BeeperEnabled(This,Val) ) 

#define IAgilent34401System2_put_BeeperEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_BeeperEnabled(This,Val) ) 

#define IAgilent34401System2_get_IO(This,Val)	\
    ( (This)->lpVtbl -> get_IO(This,Val) ) 

#define IAgilent34401System2_get_TimeoutMilliseconds(This,Val)	\
    ( (This)->lpVtbl -> get_TimeoutMilliseconds(This,Val) ) 

#define IAgilent34401System2_put_TimeoutMilliseconds(This,Val)	\
    ( (This)->lpVtbl -> put_TimeoutMilliseconds(This,Val) ) 

#define IAgilent34401System2_get_TraceEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_TraceEnabled(This,Val) ) 

#define IAgilent34401System2_put_TraceEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_TraceEnabled(This,Val) ) 


#define IAgilent34401System2_ReadBytes(This,Val)	\
    ( (This)->lpVtbl -> ReadBytes(This,Val) ) 

#define IAgilent34401System2_ReadString(This,Val)	\
    ( (This)->lpVtbl -> ReadString(This,Val) ) 

#define IAgilent34401System2_WriteBytes(This,Buffer,Val)	\
    ( (This)->lpVtbl -> WriteBytes(This,Buffer,Val) ) 

#define IAgilent34401System2_WriteString(This,Data)	\
    ( (This)->lpVtbl -> WriteString(This,Data) ) 

#define IAgilent34401System2_get_IOTimeout(This,Val)	\
    ( (This)->lpVtbl -> get_IOTimeout(This,Val) ) 

#define IAgilent34401System2_put_IOTimeout(This,Val)	\
    ( (This)->lpVtbl -> put_IOTimeout(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgilent34401System2_INTERFACE_DEFINED__ */


#ifndef __IAgilent344012_INTERFACE_DEFINED__
#define __IAgilent344012_INTERFACE_DEFINED__

/* interface IAgilent344012 */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAgilent344012;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("93838db9-af2b-4ed6-b3a3-9b9d71689fe2")
    IAgilent344012 : public IAgilent34401
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_System2( 
            /* [retval][out] */ IAgilent34401System2 **Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgilent344012Vtbl
    {
        BEGIN_INTERFACE
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgilent344012 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj);
        
        /* [id][restricted][funcdescattr] */ unsigned long ( STDMETHODCALLTYPE *AddRef )( 
            IAgilent344012 * This);
        
        /* [id][restricted][funcdescattr] */ unsigned long ( STDMETHODCALLTYPE *Release )( 
            IAgilent344012 * This);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_DriverOperation )( 
            IAgilent344012 * This,
            /* [out][idldescattr] */ IIviDriverOperation **pVal,
            /* [retval][out] */ HRESULT *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IAgilent344012 * This,
            /* [out][idldescattr] */ IIviDriverIdentity **pVal,
            /* [retval][out] */ HRESULT *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Utility )( 
            IAgilent344012 * This,
            /* [out][idldescattr] */ IIviDriverUtility **pVal,
            /* [retval][out] */ HRESULT *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IAgilent344012 * This,
            /* [in][idldescattr] */ BSTR ResourceName,
            /* [in][idldescattr] */ BOOLEAN IdQuery,
            /* [in][idldescattr] */ BOOLEAN Reset,
            /* [in][idldescattr] */ BSTR OptionString);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Initialized )( 
            IAgilent344012 * This,
            /* [out][idldescattr] */ BOOLEAN *pVal,
            /* [retval][out] */ HRESULT *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IAgilent344012 * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Function )( 
            IAgilent344012 * This,
            /* [retval][out] */ enum Agilent34401FunctionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Function )( 
            IAgilent344012 * This,
            /* [in] */ enum Agilent34401FunctionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AC )( 
            IAgilent344012 * This,
            /* [retval][out] */ IAgilent34401AC **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Trigger )( 
            IAgilent344012 * This,
            /* [retval][out] */ IAgilent34401Trigger **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_System )( 
            IAgilent344012 * This,
            /* [retval][out] */ IAgilent34401System **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IAgilent344012 * This,
            /* [retval][out] */ IAgilent34401Status **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resistance )( 
            IAgilent344012 * This,
            /* [retval][out] */ IAgilent34401Resistance **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Measurement )( 
            IAgilent344012 * This,
            /* [retval][out] */ IAgilent34401Measurement **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Math )( 
            IAgilent344012 * This,
            /* [retval][out] */ IAgilent34401Math **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            IAgilent344012 * This,
            /* [retval][out] */ IAgilent34401Frequency **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Display )( 
            IAgilent344012 * This,
            /* [retval][out] */ IAgilent34401Display **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DCVoltageRatio )( 
            IAgilent344012 * This,
            /* [retval][out] */ IAgilent34401DCVoltageRatio **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DCVoltage )( 
            IAgilent344012 * This,
            /* [retval][out] */ IAgilent34401DCVoltage **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DCCurrent )( 
            IAgilent344012 * This,
            /* [retval][out] */ IAgilent34401DCCurrent **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Calibration )( 
            IAgilent344012 * This,
            /* [retval][out] */ IAgilent34401Calibration **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Advanced )( 
            IAgilent344012 * This,
            /* [retval][out] */ IAgilent34401Advanced **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ACVoltage )( 
            IAgilent344012 * This,
            /* [retval][out] */ IAgilent34401ACVoltage **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ACCurrent )( 
            IAgilent344012 * This,
            /* [retval][out] */ IAgilent34401ACCurrent **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IviDmm )( 
            IAgilent344012 * This,
            /* [retval][out] */ /* external definition not present */ IIviDmm **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_System2 )( 
            IAgilent344012 * This,
            /* [retval][out] */ IAgilent34401System2 **Val);
        
        END_INTERFACE
    } IAgilent344012Vtbl;

    interface IAgilent344012
    {
        CONST_VTBL struct IAgilent344012Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgilent344012_QueryInterface(This,riid,ppvObj)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj) ) 

#define IAgilent344012_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgilent344012_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgilent344012_get_DriverOperation(This,pVal,retval)	\
    ( (This)->lpVtbl -> get_DriverOperation(This,pVal,retval) ) 

#define IAgilent344012_get_Identity(This,pVal,retval)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal,retval) ) 

#define IAgilent344012_get_Utility(This,pVal,retval)	\
    ( (This)->lpVtbl -> get_Utility(This,pVal,retval) ) 

#define IAgilent344012_Initialize(This,ResourceName,IdQuery,Reset,OptionString)	\
    ( (This)->lpVtbl -> Initialize(This,ResourceName,IdQuery,Reset,OptionString) ) 

#define IAgilent344012_get_Initialized(This,pVal,retval)	\
    ( (This)->lpVtbl -> get_Initialized(This,pVal,retval) ) 

#define IAgilent344012_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 


#define IAgilent344012_get_Function(This,Val)	\
    ( (This)->lpVtbl -> get_Function(This,Val) ) 

#define IAgilent344012_put_Function(This,Val)	\
    ( (This)->lpVtbl -> put_Function(This,Val) ) 

#define IAgilent344012_get_AC(This,Val)	\
    ( (This)->lpVtbl -> get_AC(This,Val) ) 

#define IAgilent344012_get_Trigger(This,Val)	\
    ( (This)->lpVtbl -> get_Trigger(This,Val) ) 

#define IAgilent344012_get_System(This,Val)	\
    ( (This)->lpVtbl -> get_System(This,Val) ) 

#define IAgilent344012_get_Status(This,Val)	\
    ( (This)->lpVtbl -> get_Status(This,Val) ) 

#define IAgilent344012_get_Resistance(This,Val)	\
    ( (This)->lpVtbl -> get_Resistance(This,Val) ) 

#define IAgilent344012_get_Measurement(This,Val)	\
    ( (This)->lpVtbl -> get_Measurement(This,Val) ) 

#define IAgilent344012_get_Math(This,Val)	\
    ( (This)->lpVtbl -> get_Math(This,Val) ) 

#define IAgilent344012_get_Frequency(This,Val)	\
    ( (This)->lpVtbl -> get_Frequency(This,Val) ) 

#define IAgilent344012_get_Display(This,Val)	\
    ( (This)->lpVtbl -> get_Display(This,Val) ) 

#define IAgilent344012_get_DCVoltageRatio(This,Val)	\
    ( (This)->lpVtbl -> get_DCVoltageRatio(This,Val) ) 

#define IAgilent344012_get_DCVoltage(This,Val)	\
    ( (This)->lpVtbl -> get_DCVoltage(This,Val) ) 

#define IAgilent344012_get_DCCurrent(This,Val)	\
    ( (This)->lpVtbl -> get_DCCurrent(This,Val) ) 

#define IAgilent344012_get_Calibration(This,Val)	\
    ( (This)->lpVtbl -> get_Calibration(This,Val) ) 

#define IAgilent344012_get_Advanced(This,Val)	\
    ( (This)->lpVtbl -> get_Advanced(This,Val) ) 

#define IAgilent344012_get_ACVoltage(This,Val)	\
    ( (This)->lpVtbl -> get_ACVoltage(This,Val) ) 

#define IAgilent344012_get_ACCurrent(This,Val)	\
    ( (This)->lpVtbl -> get_ACCurrent(This,Val) ) 

#define IAgilent344012_get_IviDmm(This,Val)	\
    ( (This)->lpVtbl -> get_IviDmm(This,Val) ) 


#define IAgilent344012_get_System2(This,Val)	\
    ( (This)->lpVtbl -> get_System2(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgilent344012_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Agilent34401;

#ifdef __cplusplus

class DECLSPEC_UUID("fe9a1e9a-4294-4470-86a2-08cbd637890b")
Agilent34401;
#endif
#endif /* __Agilent34401Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


