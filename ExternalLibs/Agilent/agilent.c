void untitled()
{
	ViStatus status;
	ViSession session;
	ViInt32 ErrorCode;
	ViChar ErrorMessage[255];
	// Edit resource and options as needed.  resource is ignored if option Simulate=true
	char resource[] =  "ASRL5::INSTR";
	char options[]  = "";
	ViBoolean idQuery = VI_FALSE;
	ViBoolean reset   = VI_TRUE;
	ViBoolean AttributeValue;
	ViBoolean AttributeValue1;
	ViReal64 Reading;
	ViInt32 AttributeValue2;
	// To use the method below, please link "Ag34401.lib" in Additional Dependencies and include "Ag34401.h"
	status = Ag34401_InitWithOptions(resource, idQuery, reset, options, &session);
	if(status)
	{
		// Initialization failed
		Ag34401_GetError(session, &ErrorCode, 255, ErrorMessage);
		return;
	}
	
	status = Ag34401_GetAttributeViBoolean( session, "", AG34401_ATTR_DCVOLTAGE_AUTO_RANGE, &AttributeValue);
	status = Ag34401_GetAttributeViBoolean( session, "", AG34401_ATTR_DISPLAY_ENABLED, &AttributeValue1);
	status = Ag34401_Read( session, 500, &Reading);
	status = Ag34401_GetAttributeViInt32( session, "", AG34401_ATTR_STATUS_SERIAL_POLL, &AttributeValue2);
	status = Ag34401_close( session);
}
