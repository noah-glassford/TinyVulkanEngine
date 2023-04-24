#pragma once
#include "Window.h"
#include "VulkanManager.hpp"
class EngineApplication
{
public:

	const static int WIDTH = 800;
	const static int HEIGHT = 800;

	void Initialize();
	void Update();


	static EngineApplication& getInstance();

private:
	VulkanManager m_vulkanManager;

};