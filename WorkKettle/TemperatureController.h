#ifndef TemperatureController_h
#define TemperatureController_h
#pragma once

#include <iostream>

class TemperatureController
{
public:
	bool checkTemperature(uint32_t& temperature);
private:
	unsigned int temperature;
};

#endif

