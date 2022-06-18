#include "TemperatureController.h"

bool TemperatureController::checkTemperature(uint32_t& temperature)
{
	if (temperature <= 100) {
		if (temperature >= 100) {
			this->temperature = 100;
			return true;
		}
		else if (temperature < 30 && temperature != 0) {
			this->temperature = 30;
			return true;
		}
		else if (temperature == 0) {
			temperature = 0;
			return false;
		}
		else if (temperature >= 30 && temperature <= 100) {
			this->temperature = temperature;
			return true;
		} 
	}
	else {
		this->temperature = 0;
		return false;
	}
}
