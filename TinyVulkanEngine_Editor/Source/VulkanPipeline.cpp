#include "VulkanPipeline.hpp"

VulkanPipeline::VulkanPipeline(VulkanDevice& device, const std::string& vertFilePath, const std::string& fragFilePath, PipelineConfigInfo configInfo) : vulkanDevice{device}
{
	CreateGraphicsPipeline(vertFilePath, fragFilePath);
}

PipelineConfigInfo VulkanPipeline::defaultPipelineConfigInfo(uint32_t width, uint32_t height)
{
	PipelineConfigInfo configInfo{};
	return configInfo;
}

std::vector<char> VulkanPipeline::ReadFile(const std::string& path)
{
	std::ifstream file{ path, std::ios::ate | std::ios::binary };
	if (!file.is_open())
	{
		throw std::runtime_error("Failed to open file at: " + path);
	}
	size_t fileSize = static_cast<size_t>(file.tellg());
	std::vector<char> buffer(fileSize);

	file.seekg(0);
	file.read(buffer.data(), fileSize);
	file.close();

	return buffer;
}

void VulkanPipeline::createShaderModule(const std::vector<char>& code, VkShaderModule* shaderModule)
{
	VkShaderModuleCreateInfo createInfo{};
	createInfo.sType = VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO;
	createInfo.codeSize = code.size();
	createInfo.pCode = reinterpret_cast<const uint32_t*> (code.data()); //sketchy but always works because data is a vector

	if (vkCreateShaderModule(vulkanDevice.device(), &createInfo, nullptr, shaderModule) != VK_SUCCESS)
		throw std::runtime_error("Failed to create shader module");
}

void VulkanPipeline::CreateGraphicsPipeline(const std::string& vertFilePath, const std::string& fragFilePath)
{
	auto vertCode = ReadFile(vertFilePath);
	auto fragCode = ReadFile(fragFilePath);

	std::cout << vertCode.size() << std::endl;
	std::cout << fragCode.size();


}
