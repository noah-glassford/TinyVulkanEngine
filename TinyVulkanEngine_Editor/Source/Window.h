#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <stdexcept>
#include <string>
#include <iostream>
class Window
{
public:
	Window(int width, int height, std::string name);
	~Window();

	bool shouldClose();

	void createWindowSurface(VkInstance instance, VkSurfaceKHR *surface);

	GLFWwindow* GetWindow() { return m_Window; }

private:
	const int m_Width;
	const int m_Height;
	std::string m_WindowName;

	GLFWwindow* m_Window;
	void initWindow();

};