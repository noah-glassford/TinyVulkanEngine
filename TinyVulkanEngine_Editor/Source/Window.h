#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

class Window
{
public:
	Window(int width, int height, std::string name);
	~Window();

	bool shouldClose() { return glfwWindowShouldClose(m_Window); }

	/*
	TODO:
		-Add window resizing
		-Add fulscreen support
	*/

private:
	const int m_Width;
	const int m_Height;
	std::string m_WindowName;

	GLFWwindow* m_Window;
	void initWindow();

};