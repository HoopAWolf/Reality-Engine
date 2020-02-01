#pragma once

#ifdef RT_PLATFORM_WINDOWS

extern Reality::Application* Reality::CreateApplication();

int main(int argc, char** argv)
{
	Reality::Log::Init();
	RT_CORE_INFO("<Intialized Log>");

	Reality::Application* app = Reality::CreateApplication();
	app->Run();

	delete app;
}

#endif
