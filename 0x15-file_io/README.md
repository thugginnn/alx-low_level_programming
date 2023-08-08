Certainly! Here's the provided content organized in Markdown format:

# C - File I/O

In this project, I learned about the three standard file descriptors and their POSIX names as well as the difference between function and system calls. I practiced using the I/O system calls open, close, read, and write and the flags O_RDONLY, WR_ONLY, and O_RDWR to create, open, close, read, write, set permissions of files in C.

## Header File `file_folder`

- `main.h`: Header file containing prototypes for all functions written in the project.

## Files and Prototypes

- `0-read_textfile.c`: C function that reads a text file and prints it to the POSIX standard output.
  - Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`

- `1-create_file.c`: C function that creates a file.
  - Prototype: `int create_file(const char *filename, char *text_content);`

- `2-append_text_to_file.c`: C function that appends text at the end of a file.
  - Prototype: `int append_text_to_file(const char *filename, char *text_content);`

## Tasks

### 0. Tread lightly, she is near

- `0-read_textfile.c`: C function that reads a text file and prints it to the POSIX standard output.
  - Parameters:
    - `filename`: The name of the file to read.
    - `letters`: The number of letters to read and print.
  - Return values:
    - If the file is NULL or cannot be opened or read - returns 0.
    - If the write call fails or does not write the expected number of bytes - returns 0.
    - Otherwise - returns the actual number of bytes the function can read and print.

### 1. Under the snow

- `1-create_file.c`: C function that creates a file.
  - Parameters:
    - `filename`: The name of the file to create.
    - `text_content`: A null-terminated string to write to the file.
  - Return values:
    - If `text_content` is NULL, the function creates an empty file.
    - The created file has the permissions `rw-------`.
    - If the file already exists, the existing permissions are not changed.
    - Existing files are truncated.
    - If `filename` is NULL or the function fails - returns -1.
    - Otherwise - returns 1 on success.

### 2. Speak gently, she can hear

- `2-append_text_to_file.c`: C function that appends text at the end of a file.
  - Parameters:
    - `filename`: The name of the file to which text should be appended.
    - `text_content`: A null-terminated string to append to the file.
  - Return values:
    - The function does not create the file if it does not exist.
    - If `text_content` is NULL, nothing is added to the file.
    - If the function fails or `filename` is NULL - returns -1.
    - If the file does not exist or the user lacks write permissions on the file - returns -1.
    - Otherwise - returns 1.

### 3. cp

- `3-cp.c`: C program that copies the contents of a file to another file.
  - Usage: `cp file_from file_to`
  - If `file_to` already exists, it is truncated.
  - The created file has the permissions `rw-rw-r--`.
  - If the number of arguments is incorrect, the function prints "Usage: cp file_from file_to", followed by a new line on the POSIX standard error and exits with code 97.
  - If `file_from` does not exist or the user lacks read permissions on it, the function prints "Error: Can't read from file NAME_OF_THE_FILE", followed by a new line and exits with code 98.
  - If files cannot be created or if write to `file_to` fails, the function prints "Error: Can't write to NAME_OF_THE_FILE", followed by a new line and exits with code 99.
  - If the user cannot close a file descriptor, the function prints "Error: Can't close fd FD_VALUE", followed by a new line on the POSIX standard error and exits with code 100.

### 4. elf

- `100-elf_header.c`: C program that displays the information contained in the ELF header at the start of an ELF file.
  - Usage: `elf_header elf_filename`
  - Displayed information:
    - Magic
    - Class
    - Data
    - Version
    - OS/ABI
    - ABI Version
    - Type
    - Entry point address
  - Format is identical to `readelf -h` (version 2.26.1).
  - If an error occurs or the file is not an ELF file, the function displays a corresponding error message to stderr and exits with a status value of 98.
