#include "EngineApplication.h"



void EngineApplication::Initialize()
{
	//function for later, window initializes itself in it's constructor
//	m_graphicsHandler.InitializeGraphics();
}

void EngineApplication::Update() //Deepest tick of the engine, invoke all major system updates here
{
	while (!m_vulkanManager.m_Window.shouldClose())
	{
		glfwPollEvents();
	}
}

EngineApplication& EngineApplication::getInstance()
{
	static EngineApplication _instance;
	return _instance;
}
