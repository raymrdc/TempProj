#include "pch.h"

#include "TempProj.h"
using namespace ComLight;
#include "../ComLightLib/server/ObjectRoot.hpp"
#include <array>


class TempClass : public ComLight::ObjectRoot<ITempClass>
{
	int COMLIGHTCALL expData() override
	{
		//testing only
		return 0;
	}

};
