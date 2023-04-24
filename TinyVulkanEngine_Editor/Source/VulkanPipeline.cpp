#include "VulkanPipeline.hpp"

VulkanPipeline::VulkanPipeline(const std::string& vertFilePath, const std::string& fragFilePath)
{
	CreateGraphicsPipeline(vertFilePath, fragFilePath);
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

void VulkanPipeline::CreateGraphicsPipeline(const std::string& vertFilePath, const std::string& fragFilePath)
{
	auto vertCode = ReadFile(vertFilePath);
	auto fragCode = ReadFile(fragFilePath);

	std::cout << vertCode.size();

}
