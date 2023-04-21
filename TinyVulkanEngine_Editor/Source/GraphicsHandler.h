#pragma once
#include "VulkanManager.h"

class GraphicsHandler
{
public:
	
    void InitVulkan();
    void RenderLoop();

    GraphicsHandler();
    ~GraphicsHandler();

private:
    VulkanManager m_vulkanManager;

};
