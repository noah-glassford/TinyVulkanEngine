#include "VulkanManager.h"


void VulkanManager::Initialize()
{
	m_GraphicsPipeline = VulkanPipeline("shaders/vert.spv", "shaders/frag.spv");
}
