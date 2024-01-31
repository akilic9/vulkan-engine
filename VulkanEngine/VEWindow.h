#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

namespace VulkanEngine {

    class VEWindow
    {
    public:
        VEWindow(int width, int height, std::string name);
        ~VEWindow();

        VEWindow(const VEWindow&) = delete;
        VEWindow& operator=(const VEWindow&) = delete;

        bool ShouldClose() { return glfwWindowShouldClose(m_window); }

    private:        
        void InitWindow();

        const int m_width;
        const int m_height;

        std::string m_windowName;

        GLFWwindow* m_window;
    };
}