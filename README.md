<h1 align="center">GetNextLine</h1>
<p align="center"> 
  <img src="https://img.shields.io/badge/grade-100%2F100-green?style=for-the-badge&logo=42&labelColor=gray"/>
</p>

<p align="center"> 
  <a href="https://github.com/pin3dev/42_Cursus/tree/main/get_next_line/#00-Get_Next_Line">
    <img src="https://img.shields.io/badge/File_IO-blue?style=for-the-badge"/>
    <img src="https://img.shields.io/badge/Memory_Management-blue?style=for-the-badge"/>
    <img src="https://img.shields.io/badge/Static_Variables-blue?style=for-the-badge"/>
    <img src="https://img.shields.io/badge/Makefile-blue?style=for-the-badge"/>
  </a>
</p>

<h3>
  <p align="center"> 
    <a href="#introduction">Introduction</a> • 
    <a href="#structure">Structure</a> • 
    <a href="#docs">Docs</a> • 
    <a href="#cloning">Cloning</a> • 
    <a href="#usage">Usage</a> • 
    <a href="#norms">Norms</a> • 
    <a href="#theoretical">Theoretical</a>   
  </p>
</h3>

## 🗣️ Introduction <a id="introduction"></a>

The **Get Next Line** project focuses on reading a file line by line efficiently, which is a common task in many applications. The goal of this project is to write a function that returns the next line from a file descriptor, handling various edge cases such as multiple file descriptors, varying buffer sizes, and memory management.

The main challenge of the project is to ensure that the function handles both large and small files while managing memory efficiently, and avoiding memory leaks or overflows.

## 🧬 Project Structure <a id="structure"></a>

The function relies on a few key concepts. **File descriptors** are used to reference files or input/output streams, while **static variables** are necessary to maintain values between function calls. **Buffers** are used to temporarily store data read from the file descriptor, ensuring smooth data flow. Proper **memory management** is also essential to avoid memory leaks by ensuring memory is allocated and freed correctly.  

## 🗃️ Documentation <a id="docs"></a>

For detailed documentation on the **get_next_line** function, including example usages and edge cases, visit the following link:

<p align="center"> 
  <a href="https://github.com/pin3dev/42_Get_Next_Line/wiki">
    <img src="https://img.shields.io/badge/GetNextLine_Docs-lightgreen?style=for-the-badge"/>
  </a>
</p>

## 🫥 Cloning the Repository <a id="cloning"></a>

To clone this repository and compile the project, run the following commands:

```bash
git clone https://github.com/pin3dev/42_Get_Next_Line.git
cd 42_Get_Next_Line
```
This will download the project from GitHub to your local machine. Once inside the directory, you can compile the project with the provided Makefile.

## 🕹️ Compilation and Usage <a id="usage"></a>

### Makefile

The project includes a `Makefile` to streamline the compilation process. The available rules are:

- `all`: Compiles the project.
- `clean`: Removes object files.
- `fclean`: Removes object files and the executable.
- `re`: Recompiles the entire project from scratch.

To compile the project, simply run:
```bash
make
```
This will generate the necessary files and allow you to link the function into your project.

### Basic Usage

To use the **get_next_line** function in your program:

1. Include the header file in your code:
    ```c
    #include "get_next_line.h"
    ```

2. Compile your code along with the **get_next_line** files:
    ```bash
    gcc -Wall -Wextra -Werror my_program.c get_next_line/get_next_line.c get_next_line/get_next_line_utils.c -o my_program
    ```

3. You can now call `get_next_line()` to read a file line by line.
<!--
### Example

Here is an example of how to use `get_next_line()`:

```c
#include "get_next_line.h"
#include <fcntl.h>

int main()
{
    int fd = open("file.txt", O_RDONLY);
    char *line;

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s\n", line);
        free(line); // Make sure to free the line after use.
    }
    close(fd);
    return 0;
}
```
-->

## ⚠️ Norms and Guidelines Disclaimer <a id="norms"></a>

This project adheres ***partially*** to the strict coding guidelines of the [**42 School Norm**](https://github.com/pin3dev/42_Cursus/blob/b9cd0fe844ddb441d0b3efb98abcee92aee49535/assets/General/norme.en.pdf). This includes coding restrictions like a maximum number of functions per file, limited lines per function, and other stylistic rules which may impact implementation decisions.

## 📖 Theoretical Background <a id="theoretical"></a>

All the theoretical material used to develop this project is organized and can be accessed directly via the link below:  

<p align="center"> 
  <a href="https://github.com/pin3dev/42_Cursus/tree/main/get_next_line/#00-Get_Next_Line">
    <img src="https://img.shields.io/badge/GetNextLine_Library-gray?style=for-the-badge"/>
  </a>
</p>
