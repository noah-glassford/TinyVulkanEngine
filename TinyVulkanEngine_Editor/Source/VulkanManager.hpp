#pragma once
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
#include <chrono>

#include "VulkanPipeline.hpp"
#include "VulkanDevice.hpp"


//This class handles initializing everything for vulkan
class VulkanManager
{
public:
	VulkanManager() { Initialize(); };
	void Initialize();
	Window m_Window{ 800, 800, "TinyVulkanEngine" }; //I tried using a get/setter and it crashed the fucking window for some reason unknown to me
private:
	VulkanDevice m_VulkanDevice { m_Window };
	VulkanPipeline m_GraphicsPipeline { m_VulkanDevice, "shaders/vert.spv", "shaders/frag.spv", VulkanPipeline::defaultPipelineConfigInfo(800,800)};
};

