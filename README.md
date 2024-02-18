# The Number Guessing Game

I just coded a simple number guessing game with infinite amount of attempts in c++, and I decided to post it on github..

## Prerequisites

Before you begin, ensure you have the following installed on your machine:

- CMake: [Download and Install CMake](https://cmake.org/download/)
- C++ Compiler: Make sure you have a C++ compiler installed (e.g., GCC, Clang)

## Build Instructions

1. Clone the repository:

    ```bash
    git clone https://github.com/Cicin2837512/Number-Guessing-Game.git
    cd simple-cpp-program
    ```

2. Create a build directory and a bin directory inside:

    ```bash
    mkdir build
    mkdir build/bin
    ```

3. Generate the build files using CMake:

    ```bash
    cd build
    cmake ..
    ```

4. Build the project:

    ```bash
    make
    ```

## Run the Program

Now the program is located in `<location of this repostory>/build/bin`.
```bash
<location of this repostory>/build/bin/number-guessing-game
```

> Tip: you might want to add this folder to your path so that you can just run `number-guessing-game`

```bash
echo 'PATH="<location of this repostory>/build/bin":$PATH' >> ~/.bashrc # (or whatever else shell's configuration file you use)
```
