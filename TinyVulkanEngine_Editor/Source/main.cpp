#include "EngineApplication.h"

#include <cstdlib>
#include <iostream>
#include <stdexcept>

int main()
{
	EngineApplication::getInstance().Initialize();
	try
	{
		EngineApplication::getInstance().Update();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n'; 
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}