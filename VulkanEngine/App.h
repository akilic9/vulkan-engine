#pragma once
#include "VEWindow.h"

namespace VulkanEngine {
    class App
    {
    public:
        void Run();
    private:
        static constexpr int WIDTH = 1600;
        static constexpr int HEIGHT = 900;
        VEWindow m_veWindow{WIDTH, HEIGHT, "Eurus' First Vulkan Window!"};
    };
}