/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#define DECLARE_NIMBUS_CLASS_AGILENT34401()	\
public:	\
	DECLARE_REGISTRY_RESOURCEID(IDR_COAGILENT34401)	\
	DECLARE_PROTECT_FINAL_CONSTRUCT()	\
	\
	BEGIN_COM_MAP(Agilent34401)	\
		COM_INTERFACE_ENTRY(ISupportErrorInfo)	\
		COM_INTERFACE_ENTRY(IProvideClassInfo)	\
		COM_INTERFACE_ENTRY(IProvideClassInfo2)	\
		COM_INTERFACE_ENTRY2(IIviDriver, IAgilent344012)	\
		COM_INTERFACE_ENTRY(IIviDriverOperation)	\
		COM_INTERFACE_ENTRY(IIviDriverIdentity)	\
		COM_INTERFACE_ENTRY2(IIviComponentIdentity, IIviDriverIdentity)	\
		COM_INTERFACE_ENTRY(IIviDriverUtility)	\
		COM_INTERFACE_ENTRY2(IAgilent34401, IAgilent344012)	\
		COM_INTERFACE_ENTRY(IIviDmmAC)	\
		COM_INTERFACE_ENTRY(IIviDmmAdvanced)	\
		COM_INTERFACE_ENTRY(IIviDmmFrequency)	\
		COM_INTERFACE_ENTRY(IIviDmmMeasurement)	\
		COM_INTERFACE_ENTRY(IIviDmmRTD)	\
		COM_INTERFACE_ENTRY(IIviDmmThermocouple)	\
		COM_INTERFACE_ENTRY(IIviDmmThermistor)	\
		COM_INTERFACE_ENTRY(IIviDmmTemperature)	\
		COM_INTERFACE_ENTRY(IIviDmmMultiPoint)	\
		COM_INTERFACE_ENTRY(IIviDmmTrigger)	\
		COM_INTERFACE_ENTRY(IIviDmm)	\
		COM_INTERFACE_ENTRY(IAgilent34401AC)	\
		COM_INTERFACE_ENTRY(IAgilent34401ACCurrent)	\
		COM_INTERFACE_ENTRY(IAgilent34401ACVoltage)	\
		COM_INTERFACE_ENTRY(IAgilent34401Advanced)	\
		COM_INTERFACE_ENTRY(IAgilent34401Calibration)	\
		COM_INTERFACE_ENTRY(IAgilent34401DCCurrent)	\
		COM_INTERFACE_ENTRY(IAgilent34401DCVoltage)	\
		COM_INTERFACE_ENTRY(IAgilent34401DCVoltageRatio)	\
		COM_INTERFACE_ENTRY(IAgilent34401Display)	\
		COM_INTERFACE_ENTRY(IAgilent34401Frequency)	\
		COM_INTERFACE_ENTRY(IAgilent34401Math)	\
		COM_INTERFACE_ENTRY(IAgilent34401Measurement)	\
		COM_INTERFACE_ENTRY(IAgilent34401MultiPoint)	\
		COM_INTERFACE_ENTRY(IAgilent34401Resistance)	\
		COM_INTERFACE_ENTRY(IAgilent34401Status)	\
		COM_INTERFACE_ENTRY2(IAgilent34401System, IAgilent34401System2)	\
		COM_INTERFACE_ENTRY(IAgilent34401Trigger)	\
		COM_INTERFACE_ENTRY(IAgilent34401System2)	\
		COM_INTERFACE_ENTRY(IAgilent344012)	\
	END_COM_MAP()	\
	\
	HRESULT FinalConstruct();	\
	void FinalRelease();	\
	\
	virtual const CString& GetClassName() const;	\
	static const CString& ClassName();	\
	\
	virtual const CRepCapDescriptor** GetRepCapDescriptors() const;	\
	\
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);	\
	\
	Agilent34401* GetRoot() const;	\
	Agilent34401* GetParent() const;	\
	\
public:	\
	virtual CAgilent34401ErrorReporter& GetErrorReporter() { return *m_pErrorReporter; }	\
	virtual IVisaComSession& GetIoSession() { return m_ioSession; }	\
	virtual IIoSession& GetIo() { return m_ioSession; }	\
	\
protected:	\
	CVisaComSession m_ioSession;	\
	CAgilent34401ErrorReporter* m_pErrorReporter;
