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

Navigate to the `build` directory and run the `make` command to build the executable files for the three demo programs:

```shell
cd build
make
```

You can now run the demo programs by typing the following command inside the `build` directory:

```shell
./mdsanima-awesome
./mdsanima-fantastic
./mdsanima-remarkable
```

You can also run the programs from the top-lever directory by simply adding the full path to the executable files like this `./build/mdsanima-awesome` command.
