# cmake-demo

Introduction to **CMake** configuration for building and running simple demo **C** and **C++** programs.

> [!NOTE]
> To build the sample _demo_ programs that are in the `example` directory, we are using [CMake](https://cmake.org/) build system.

First step is a create build directory and generate the build files using `cmake` command from the top-level project directory, type the following command:

```shell
cmake -B build
```

After running the above command, a `build` folder will be created, containing the necessary files to build the demo programs.

> [!CAUTION]
> These files are generated automatically based on the configuration in the `CMakeLists.txt` file.

Navigate to the `build` directory and run the `make` command to build the executable files for the four demo programs:

```shell
cd build
make
```

You can now run the demo programs by typing the following command inside the `build` directory:

```shell
./mdsanima-awesome
./mdsanima-fantastic
./mdsanima-incredible
./mdsanima-stunning
```

You can also run the programs from the top-lever directory by simply adding the full path to the executable files like this `./build/mdsanima-awesome` command.

## Example Programs

There are various ways to create a project, one of which is as I presented here. The source files are located in the `src` directory, but you can also put all the files in one directory; it all depends on the project.

> [!NOTE]
> To manualy build the demo programs, you can use the `gcc` or `g++` command to compile and link the source code files.

Here is a example instruction for compiling and linking the source code files, type the following command:

```shell
cd example/mdsanima-awesome && mkdir build
gcc -o build/mdsanima-awesome main.c
./build/mdsanima-awesome
```

This method is only recommended if you want to manually build the program.

> [!IMPORTANT]
> The sample projects are written in **C** and **C++** languages, and the source code files have extensions `.c`, `.cc`, and `.cpp`. You can also use the `.cxx` file format, as we added in the example project. Here is just an example. Remember to use the chosen format and be consistent with it.

All projects are the same; they only differ in the text displayed in the terminal and in other file extensions.

## Google Style Guide

Also, check how _Google_ does it. Here is a [C++ Style Guide](https://google.github.io/styleguide/cppguide.html) and [Objective-C Style Guide](https://google.github.io/styleguide/objcguide.html) provided by the [Google Style Guide](https://github.com/google/styleguide). The complete guide for naming conventions, variables, functions, and more by _Google_.

This comprehensive guide includes code style conventions for **C/C++**, _Python_ or other languages, covering variable names, function and file names, and more. It has been authored, revised, and maintained by many Googlers.

This adjustment maintains clarity while enhancing the flow of information.
