#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <vector>
#include "VulkanDevice.hpp"

struct PipelineConfigInfo {};
class VulkanPipeline
{
public:
	VulkanPipeline(VulkanDevice& device, const std::string& vertFilePath, const std::string& fragFilePath, PipelineConfigInfo configInfo);
	~VulkanPipeline() {} ;

	VulkanPipeline(const VulkanPipeline&) = delete;
	void operator=(const VulkanPipeline&) = delete;

	static PipelineConfigInfo defaultPipelineConfigInfo(uint32_t width, uint32_t height);

	std::vector<char> ReadFile(const std::string& path);
	void createShaderModule(const std::vector<char>& code, VkShaderModule* shaderModule);
private:
	void CreateGraphicsPipeline(const std::string& vertFilePath, const std::string& fragFilePath);
	VulkanDevice& vulkanDevice;
	VkPipeline graphicsPipeline;
	VkShaderModule vertShaderModule;
	VkShaderModule fragShaderModule;
};