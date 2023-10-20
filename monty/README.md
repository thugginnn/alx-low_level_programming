# Monty - The Monty Program | ALX 0x19. C - Stacks, Queues

Monty is an interpreter for Monty ByteCodes files, which is a scripting language similar to Python.

## Description

Monty is a language that contains specific instructions for manipulating data (stacks or queues). Each instruction, called an opcode, is read and executed line by line. Files containing Monty byte codes usually have the .m extension.

## Usage

To compile all files:

```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```

The synopsis of the interpreter is as follows:

```bash
$ ./monty [filename.h]
```

## Features - Opcodes

Monty executes the following opcodes:

- **push:** Pushes an element onto the stack.
- **pall:** Prints all the element values on the stack.
- **pint:** Prints the element at the top of the stack.
- **pop:** Removes the top element of the stack.
- **swap:** Swaps the top two elements of the stack.
- **queue:** Sets the format of the data to a queue (FIFO).
- **stack:** Sets the format of the data to a stack (LIFO).
- **nop:** Doesn't do anything.
- **add:** Adds the top two elements of the stack.
- **sub:** Subtracts the top element of the stack from the second top element of the stack.
- **mul:** Multiplies the second top element of the stack with the top element of the stack.
- **div:** Divides the second top element of the stack by the top element of the stack.
- **mod:** Computes the remainder of the division of the second top element of the stack by the top element of the stack.
- **pchar:** Prints the character at the top of the stack.
- **pstr:** Prints the string starting at the top of the stack.
- **rotl:** Rotates the stack to the top.
- **rotr:** Rotates the stack to the bottom.

Comments, indicated with #, are not ignored by the interpreter.

## Author

Paul Iyiade
