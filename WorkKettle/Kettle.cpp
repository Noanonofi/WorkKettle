#include "Kettle.h"

void Kettle::start(uint32_t& temperature)
{
	if (inrerfaseKettle.inputTemperatere(temperature)) {
		std::cout << "Kettle WORK!!";
	}
	else {
		std::cout << "Kettle NO WORK!!";
	}
}
