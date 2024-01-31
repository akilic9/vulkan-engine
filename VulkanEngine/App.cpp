#include "App.h"

void VulkanEngine::App::Run()
{
    while (!m_veWindow.ShouldClose()) {
        glfwPollEvents();
    }
}
