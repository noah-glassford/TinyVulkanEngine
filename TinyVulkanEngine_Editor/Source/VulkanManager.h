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

//This class handles initializing everything for vulkan
class VulkanManager
{
public:
	void Initialize();
private:
	VulkanPipeline m_GraphicsPipeline;
};

