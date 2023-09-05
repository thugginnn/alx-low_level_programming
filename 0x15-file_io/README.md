# C File I/O Project README

## Introduction

This project is a hands-on exploration of file input and output operations in C. It covers the usage of the three standard file descriptors and their POSIX names, as well as the distinction between function calls and system calls. The primary focus is on essential I/O system calls, including `open`, `close`, `read`, and `write`, and the utilization of flags like `O_RDONLY`, `O_WRONLY`, and `O_RDWR`. The project's objective is to create, open, close, read, write, and set permissions for files in C.

## Project Structure

### Header File (`main.h`)

This header file contains function prototypes for all functions implemented in the project.

### Files and Function Prototypes

1. `0-read_textfile.c`: Reads a text file and prints its content to the POSIX standard output.
   - Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`

2. `1-create_file.c`: Creates a file and writes text content to it.
   - Prototype: `int create_file(const char *filename, char *text_content);`

3. `2-append_text_to_file.c`: Appends text to the end of an existing file.
   - Prototype: `int append_text_to_file(const char *filename, char *text_content);`

4. `3-cp.c`: A C program that copies the contents of one file to another.
   - Usage: `cp file_from file_to`

5. `100-elf_header.c`: A C program that displays information from the ELF header of an ELF file.
   - Usage: `elf_header elf_filename`

## Task Descriptions

1. **Task 0: Tread lightly, she is near**
   - Implementation of `0-read_textfile.c`.
   - Reads a text file and prints its content to the standard output.
   - Provides error handling for file-related operations.

2. **Task 1: Under the snow**
   - Implementation of `1-create_file.c`.
   - Creates a file with specified permissions and writes text content to it.
   - Handles errors related to file creation and content writing.

3. **Task 2: Speak gently, she can hear**
   - Implementation of `2-append_text_to_file.c`.
   - Appends text to the end of an existing file.
   - Handles errors related to file opening and appending.

4. **Task 3: cp**
   - Implementation of `3-cp.c`.
   - Copies the contents of one file to another, with comprehensive error handling.
   - Provides usage instructions and handles various error scenarios.

5. **Task 4: elf**
   - Implementation of `100-elf_header.c`.
   - Displays information from the ELF header of an ELF file.
   - Offers usage instructions and handles file-related errors.

## Conclusion

This project offers practical experience in file input and output operations in C. By completing these tasks, you'll gain a deeper understanding of file manipulation and error handling in C programming.

Feel free to explore, experiment, and learn from this project in your Vim editor. Happy coding!

