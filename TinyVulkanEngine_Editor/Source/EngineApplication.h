#pragma once
#include "Window.h"
#include "GraphicsHandler.h"
class EngineApplication
{
public:

	const static int WIDTH = 800;
	const static int HEIGHT = 800;

	static void Initialize();
	static void Update();
	Window getWindow() { return m_Window; }

	static EngineApplication& getInstance();

private:
	EngineApplication() {};
	static Window m_Window;
	static EngineApplication* _instance;
	static GraphicsHandler m_graphicsHandler;
	//The core engine class is a singleton because there should never be more than one of it per instance of the application
	//If this object ever exists more than once you have managed to screw up one of the 10 lines of code in main

public:
	EngineApplication(EngineApplication const&) = delete; //deleting functions
	void operator=(EngineApplication const&) = delete; 

};