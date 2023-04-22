#pragma once
#include "VulkanManager.h"

class GraphicsHandler
{
public:
	
    GraphicsHandler();
    ~GraphicsHandler();

    void InitializeGraphics();
    void RenderLoop();

   

private:
    VulkanManager m_vulkanManager;

};
