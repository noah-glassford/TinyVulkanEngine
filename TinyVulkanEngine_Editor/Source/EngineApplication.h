#pragma once
#include "Window.h"

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
	static EngineApplication* _instance; //The core engine class is a singleton because there should never be more than one of it per instance of the application

public:
	EngineApplication(EngineApplication const&) = delete; //deleting functions
	void operator=(EngineApplication const&) = delete; 

};