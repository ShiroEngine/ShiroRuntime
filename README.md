# ShiroRuntime

This is ShiroEngine's Runtime project.

## Build
Here is the basic build procedure.
1. Install Pre-requisites
1. Clone the repository
1. Build

How to build for each platform

- [For Windows](#For-Windows)

### For Windows

**Pre-requisites**
- Install [Git](https://git-scm.com/download/win)
- Install [Visual Studio](https://visualstudio.microsoft.com/ja/downloads/)
- Install [CMake](https://cmake.org/download/#latest)

**Clone the repository**
```cmd
> git clone https://github.com/ShiroEngine/ShiroRuntime.git
```

**Build**

After the command is executed, the executable file `Build\Bin\Debug\ShiroRuntime.exe` is output.
```cmd
> cd ShiroRuntime
ShiroRuntime > cmake -HSource -BBuild
ShiroRuntime > cmake --build Build --config Debug
```



