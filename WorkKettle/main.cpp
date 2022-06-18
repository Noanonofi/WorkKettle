#include <iostream>
#include "Kettle.h"

int main()
{
	Kettle kettle;

	uint32_t temperature{};
	std::cout << "Enter temperature: ";
	std::cin >> temperature;

	kettle.start(temperature);
}
