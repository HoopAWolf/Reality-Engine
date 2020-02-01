#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"


namespace Reality
{
	class REALITY_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};

}

// CORE LOG MACROS
#define RT_CORE_INFO(...) ::Reality::Log::GetCoreLogger()->info(__VA_ARGS__)
#define RT_CORE_TRACE(...) ::Reality::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define RT_CORE_WARN(...) ::Reality::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define RT_CORE_ERROR(...) ::Reality::Log::GetCoreLogger()->error(__VA_ARGS__)
#define RT_CORE_FATAL(...) ::Reality::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// CLIENT LOG MACROS
#define RT_INFO(...) ::Reality::Log::GetClientLogger()->info(__VA_ARGS__)
#define RT_TRACE(...) ::Reality::Log::GetClientLogger()->trace(__VA_ARGS__)
#define RT_WARN(...) ::Reality::Log::GetClientLogger()->warn(__VA_ARGS__)
#define RT_ERROR(...) ::Reality::Log::GetClientLogger()->error(__VA_ARGS__)
#define RT_FATAL(...) ::Reality::Log::GetClientLogger()->fatal(__VA_ARGS__)