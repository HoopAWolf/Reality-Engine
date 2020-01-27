#pragma once

#include "Core.h"

namespace Reality
{
	class REALITY_API Application
	{
		public:
			Application();
			virtual ~Application();

			void Run();
	};

	Application* CreateApplication();

}

