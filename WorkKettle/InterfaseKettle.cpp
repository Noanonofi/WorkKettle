#include "InterfaseKettle.h"

bool InterfaseKettle::inputTemperatere(uint32_t& temperature)
{
	if (temperatureController.checkTemperature(temperature)) {
		return true;
	}
	else {
		return false;
	}
}
