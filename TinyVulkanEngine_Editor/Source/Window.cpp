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

void Window::initWindow()
{
	glfwInit();
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	m_Window = glfwCreateWindow(m_Width, m_Height, m_WindowName.c_str(), nullptr, nullptr);

	glfwSetWindowUserPointer(m_Window, this);
}