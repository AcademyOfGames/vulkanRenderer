#pragma once

#include"Lve_window.hpp"
#include"Lve_pipeline.hpp"
#include"Lve_device.hpp"
#include"lve_swap_chain.hpp"

#include<memory>
#include<vector>

namespace lve {
	class FirstApp {
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;
		FirstApp();
		~FirstApp();


		FirstApp(const LveWindow&) = delete;
		FirstApp& operator=(const LveWindow&) = delete;


		void run();
	private:
		void createPipelineLayout();
		void createPipeline();
		void createCommandBuffers();
		void drawFrame();

		LveWindow LveWindow{ WIDTH, HEIGHT, "Vulkan" };
		LveDevice lveDevice{ LveWindow };
		LveSwapChain lveSwapChain{ lveDevice, LveWindow.getExtent() };

		std::unique_ptr<LvePipeline> lvePipeline;

		VkPipelineLayout pipelineLayout;
		std::vector<VkCommandBuffer> commandBuffers;
	};
}