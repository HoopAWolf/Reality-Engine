#include <Reality.h>

class Sandbox : public Reality::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Reality::Application* Reality::CreateApplication()
{
	return new Sandbox();
}