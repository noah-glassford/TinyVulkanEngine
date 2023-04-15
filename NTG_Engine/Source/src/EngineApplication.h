#pragma once
#include "Window.h"

class EngineApplication
{
public:

	int WIDTH = 800;
	int HEIGHT = 800;


	void Initialize();
	void Update();


private:
	Window m_Window{ WIDTH, HEIGHT, "EngineApplication" };
};