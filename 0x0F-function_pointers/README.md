# C - Function Pointers

In this project, I learned about function pointers in C - what they hold, where they point in virtual memory, and how to use them.

## Header Files

- `function_pointers.h`: Header file containing prototypes for all functions written for programs 0-2 of the project.

## Function Pointers

### `print_name`

- File: `0-print_name.c`
- Prototype: `void print_name(char *name, void (*f)(char *));`
- Description: C function that prints a name.

### `array_iterator`

- File: `1-array_iterator.c`
- Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`
- Description: C function that executes a function given as a parameter on each element of an array.

### `int_index`

- File: `2-int_index.c`
- Prototype: `int int_index(int *array, int size, int (*cmp)(int));`
- Description: C function that searches for an integer.
  - Returns the index of the first element for which the `cmp` function does not return 0.
  - If no element is matched or `size <= 0`, the function returns -1.

## Type `struct op` and Related Functions

### `struct op`

- Definition:
  - `char *op`
  - `int (*f)(int a, int b)`

### `typedef op_t`

- Definition:
  - `struct op`

### `op_add`, `op_sub`, `op_mul`, `op_div`, `op_mod`

- File: `3-op_functions.c`
- Prototypes:
  - `int op_add(int a, int b);`
  - `int op_sub(int a, int b);`
  - `int op_mul(int a, int b);`
  - `int op_div(int a, int b);`
  - `int op_mod(int a, int b);`
- Description: File containing five functions that perform different mathematical operations.

### `get_op_func`

- File: `3-get_op_func.c`
- Prototype: `int (*get_op_func(char *s))(int, int);`
- Description: C function that selects the correct function from `3-op_functions.c` to perform the operation asked by the user.
  - If the operator argument `s` does not match any of the five expected operators (+, -, *, /, %), the function returns `NULL`.

## Tasks 📋

1. A goal is not always meant to be reached, it often serves simply as something to aim at

   - `3-main.c`: C program that performs simple mathematical operations.
     - Prints the result of the operation, followed by a new line.
     - Usage: `./a.out num1 operator num2`
     - The program assumes `num1` and `num2` are integers that can be converted from string input to int using `atoi`.
     - The program assumes that the result of all operations can be stored in an int.
     - `operator` is one of either + (addition), - (subtraction), * (multiplication), / (division), or % (modulo).
     - If the number of arguments is incorrect, the program prints "Error" followed by a new line and exits with a status value of 98.
     - If the operator is none of the above, the program prints "Error" followed by a new line and exits with a status value of 99.
     - If the user tries to divide (/ or %) by 0, the program prints "Error" followed by a new line and exits with a status value of 100.

2. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker

   - `100-main_opcodes.c`: C program that prints the opcodes of its own main function, followed by a new line.
     - Usage: `./main number_of_bytes`
     - Opcodes are printed two-decimal long in hexadecimal, lowercase.
     - If the number of arguments is incorrect, the program prints "Error" followed by a new line and exits with a status value of 2.
