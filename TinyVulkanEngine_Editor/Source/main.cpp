#include "EngineApplication.h"

#include <cstdlib>
#include <iostream>
#include <stdexcept>

int main()
{
	EngineApplication engineApplication;
	engineApplication.Initialize();

	try
	{
		engineApplication.Update();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n'; 
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}