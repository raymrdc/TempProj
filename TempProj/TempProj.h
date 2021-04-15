#pragma once
#include <stdlib.h>
#include <wtypes.h>

#include "../ComLightLib/unknwn.h"


struct DECLSPEC_NOVTABLE ITempClass : public ComLight::IUnknown
{
	DEFINE_INTERFACE_ID("{cca76e7c-bf33-400d-879b-8bf64190ef43}");

	virtual int COMLIGHTCALL expData();
};
