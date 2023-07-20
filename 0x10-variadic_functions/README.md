# C - Variadic Functions

In this project, I learned about using variadic functions with the `va_start`, `va_arg`, and `va_end` macros, as well as why and how to use the `const` type qualifier in C.

## Header File 📁

- `variadic_functions.h`: Header file containing definitions and prototypes for all types and functions written in the project.

## Functions 📄

### `sum_them_all`

- File: `0-sum_them_all.c`
- Prototype: `int sum_them_all(const unsigned int n, ...);`
- Description: C function that returns the sum of all its parameters.
  - If the parameter `n == 0`, the function returns 0.

### `print_numbers`

- File: `1-print_numbers.c`
- Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
- Description: C function that prints numbers, followed by a new line.
  - The parameter `separator` is the string to be printed between numbers.
  - The parameter `n` is the number of integers passed to the function.
  - If `separator` is NULL, it is not printed.

### `print_strings`

- File: `2-print_strings.c`
- Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
- Description: C function that prints strings, followed by a new line.
  - The parameter `separator` is the string to be printed between the strings.
  - The parameter `n` is the number of strings passed to the function.
  - If `separator` is NULL, it is not printed.
  - If one of the strings is NULL, the function prints "(nil)" instead.

### `print_all`

- File: `3-print_all.c`
- Prototype: `void print_all(const char * const format, ...);`
- Description: C function that prints anything.
  - Usage: `print_all("ceis", 'H', 0, "lberton");`
  - The parameter `format` is a list of types of arguments passed to the function (`c`:char, `i`:int, `f`:float, `s`:char * (if the string is NULL, "(nil)" is printed instead))
  - Any other character is ignored.
  - A new line is printed at the end of the function.

## Tasks 📋

0. Beauty is variable, ugliness is constant

1. To be is to be the value of a variable

2. One woman's constant is another woman's variable

3. To be is a to be the value of a variable

