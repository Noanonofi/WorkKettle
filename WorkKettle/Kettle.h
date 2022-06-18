#ifndef Kettle_h
#define Kettle_h
#pragma once

#include "InterfaseKettle.h"

class Kettle
{
public:
	void start(uint32_t& temperature);
private:
	InterfaseKettle inrerfaseKettle;
};

#endif

