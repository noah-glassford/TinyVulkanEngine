#include "EngineApplication.h"

void EngineApplication::Initialize()
{
	//function for later, window initializes itself in it's constructor
}

void EngineApplication::Update() //Deepest tick of the engine, invoke all major system updates here
{
	while (!m_Window.shouldClose())
	{
		glfwPollEvents();
	}
}
