#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <vulkan/vulkan.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>

const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;

class Application
{
public:
	void init();

	void runLoop();

	void clean();

private:
	void initGLFWwindow();
	void createVulkanInstance();

	GLFWwindow* window;
	VkInstance vulkanInstance;
};

