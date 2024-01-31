#include "VEWindow.h"

VulkanEngine::VEWindow::VEWindow(int width, int height, std::string name) :
    m_width(width),
    m_height(height),
    m_windowName(name),
    m_window(nullptr)
{
    InitWindow();
}

VulkanEngine::VEWindow::~VEWindow()
{
    glfwDestroyWindow(m_window);
    glfwTerminate();
}

void VulkanEngine::VEWindow::InitWindow()
{
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    m_window = glfwCreateWindow(m_width, m_height, m_windowName.c_str(), nullptr, nullptr);
}