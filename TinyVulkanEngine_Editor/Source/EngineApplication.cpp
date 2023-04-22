#include "EngineApplication.h"

Window EngineApplication::m_Window = Window{ WIDTH, HEIGHT, "TinyVulkanEngine" };
GraphicsHandler EngineApplication::m_graphicsHandler = GraphicsHandler();

void EngineApplication::Initialize()
{
	//function for later, window initializes itself in it's constructor
	m_graphicsHandler.InitializeGraphics();
}

void EngineApplication::Update() //Deepest tick of the engine, invoke all major system updates here
{
	while (! m_Window.shouldClose())
	{
		glfwPollEvents();
		m_graphicsHandler.RenderLoop();
	}
}

EngineApplication& EngineApplication::getInstance()
{
	static EngineApplication _instance;
	return _instance;
}
