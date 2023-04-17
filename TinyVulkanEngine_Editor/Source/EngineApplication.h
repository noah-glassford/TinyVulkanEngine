#pragma once
#include "Window.h"

class EngineApplication
{
public:

	int WIDTH = 800;
	int HEIGHT = 800;

	void Initialize();
	void Update();
	Window getWindow() { return m_Window; }

	static EngineApplication& getInstance();

private:
	EngineApplication() {};
	Window m_Window{ WIDTH, HEIGHT, "EngineApplication" };
	static EngineApplication* _instance; //The core engine class is a singleton because there should never be more than one of it per instance of the application

public:
	EngineApplication(EngineApplication const&) = delete; //deleting functions
	void operator=(EngineApplication const&) = delete; 

};