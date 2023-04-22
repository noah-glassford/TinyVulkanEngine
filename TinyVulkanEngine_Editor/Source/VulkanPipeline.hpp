#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <vector>

class VulkanPipeline
{
public:
	VulkanPipeline(const std::string& vertFilePath, const std::string& fragFilePath);
	std::vector<char> ReadFile(const std::string& path);
private:
	void CreateGraphicsPipeline(const std::string& vertFilePath, const std::string& fragFilePath);
};