# ShiroRuntime

This is ShiroEngine's Runtime project.

## Build
Here is the basic build procedure.
1. Install Pre-requisites
1. Clone the repository
1. Build
1. Testing (Optional)

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
> cd ShiroRuntime
```
If you want to build a test, run this command.
```cmd
ShiroRuntime > git submodule update --init --recursive
```

**Build**

After the command is executed, the executable file `Build\Bin\Debug\ShiroRuntime.exe` is output.
```cmd
ShiroRuntime > cmake -HSource -BBuild
ShiroRuntime > cmake --build Build --config Debug
```

**Testing (Optional)**

Use the `ctest` command.
```cmd
ShiroRuntime > cd Build
ShiroRuntime\Build > ctest
```



