#pragma once
#include <vulkan/vulkan.h>
#include <vector>
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/hash.hpp>
#include <array>
#include <optional>
#include <stdexcept>
#include <GLFW/glfw3.h>
#include <set>
#include <algorithm>
#include <iostream>
#include <fstream>

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

#define TINYOBJLOADER_IMPLEMENTATION
#include <tiny_obj_loader.h>

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
