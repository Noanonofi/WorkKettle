#ifndef InterfaseKettle_h
#define InterfaseKettle_h
#pragma once
#include <iostream>
#include "TemperatureController.h"
class InterfaseKettle
{
public:
	bool inputTemperatere(uint32_t& temperature);
private:
	uint32_t temperature;
	TemperatureController temperatureController;
};

#endif

