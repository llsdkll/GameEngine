workspace "GameEngine"
  architecture "x64"

  configurations{
    "Debug",
    "Release",
    "Dist"
  }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "GameEngine"
  location "GameEngine"
  kind "SharedLib"
  language "C++"

  targetdir ("bin/" .. outputdir .. "/%{prj.name}")
  objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

  files{
    "%{prj.name}/GameEngine/**.hpp"
    "%{prj.name}/GameEngine/**.h"
    "%{prj.name}/GameEngine/**.cpp"
  }

  includedirs{
    "%{prj.name}/vendor/spdlog/include"
  }

  filter "configurations:Debug"
    defines "NEWB_DEBUG"
    symbols "On"

  filter "configurations:Release"
    defines "NEWB_RELEASE"
    optimize "On"

  filter "configurations:Dist"
    defines "NEWB_DIST"
    optimize "On"


project "Editor"
  location "Editor"
  kind "ConsoleApp"
  language "C++"

  targetdir ("bin/" .. outputdir .. "/%{prj.name}")
  objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

  files{
    "%{prj.name}/src/**.hpp"
    "%{prj.name}/src/**.h"
    "%{prj.name}/src/**.cpp"
  }

  includedirs{
    "GameEngine/src"
  }

  links{ "GameEngine"}

  filter "configurations:Debug"
    defines "NEWB_DEBUG"
    symbols "On"

  filter "configurations:Release"
    defines "NEWB_RELEASE"
    optimize "On"

  filter "configurations:Dist"
    defines "NEWB_DIST"
    optimize "On"
