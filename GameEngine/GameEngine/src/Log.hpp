//
//  Log.hpp
//  gameEngineLib
//
//  Created by Michalis Kaseris on 19/08/2019.
//  Copyright © 2019 newbieSoft. All rights reserved.
//

#ifndef Log_hpp
#define Log_hpp
#include "core.h"
#include <spdlog/spdlog.h>
#include <memory>

namespace Newb {
    class NEWB_ENGINE_API Log
    {
    public:
        static void init();
        inline static std::shared_ptr<spdlog::logger>& getCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger>& getClientLogger() { return s_ClientLogger; }
    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };
}

#define NEWB_CORE_FATAL(...)    ::Newb::Log::getCoreLogger()->fatal(__VA_ARGS__)
#define NEWB_CORE_ERROR(...)    ::Newb::Log::getCoreLogger()->error(__VA_ARGS__)
#define NEWB_CORE_WARN(...)     ::Newb::Log::getCoreLogger()->warn(__VA_ARGS__)
#define NEWB_CORE_INFO(...)     ::Newb::Log::getCoreLogger()->info(__VA_ARGS__)
#define NEWB_CORE_TRACE(...)    ::Newb::Log::getCoreLogger()->trace(__VA_ARGS__)

#define NEWB_CLIENT_FATAL(...)  ::Newb::Log::getClientLogger()->fatal(__VA_ARGS__)
#define NEWB_CLIENT_ERROR(...)  ::Newb::Log::getClientLogger()->error(__VA_ARGS__)
#define NEWB_CLIENT_WARN(...)   ::Newb::Log::getClientLogger()->warn(__VA_ARGS__)
#define NEWB_CLIENT_INFO(...)   ::Newb::Log::getClientLogger()->info(__VA_ARGS__)
#define NEWB_CLIENT_TRACE(...)  ::Newb::Log::getClientLogger()->trace(__VA_ARGS__)

#endif /* Log_hpp */
