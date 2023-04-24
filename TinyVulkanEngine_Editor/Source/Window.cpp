#include "Window.h"

Window::Window(int width, int height, std::string name) : m_Width(width), m_Height(height), m_WindowName(name)
{
	initWindow();
}

Window::~Window()
{
	glfwDestroyWindow(m_Window);
	glfwTerminate();
}

bool Window::shouldClose()
{
	return glfwWindowShouldClose(m_Window);
};


void Window::createWindowSurface(VkInstance instance, VkSurfaceKHR *surface)
{
	if (glfwCreateWindowSurface(instance, m_Window, nullptr, surface) != VK_SUCCESS)
		throw std::runtime_error("Failed to create window surface");

}

void Window::initWindow()
{
	if (!glfwInit())
	{
		throw std::runtime_error("Failed to initialize GLFW");
	}

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	m_Window = glfwCreateWindow(m_Width, m_Height, m_WindowName.c_str(), nullptr, nullptr);
}