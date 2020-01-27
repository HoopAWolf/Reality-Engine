#pragma once

#ifdef RT_PLATFORM_WINDOWS

extern Reality::Application* Reality::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Reality::CreateApplication();
	app->Run();

	delete app;
}

#endif
