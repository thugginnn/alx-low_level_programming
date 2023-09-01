# Bit Manipulation Project README

## Introduction

This project focuses on bit manipulation in the C programming language. It provides a hands-on experience with bitwise operators (`>>`, `<<`, `&`, `|`, `^`) and aims to enhance your understanding of binary number operations.

## Project Structure

### Header File (`main.h`)

Contains function prototypes for all functions implemented in the project.

### Files and Function Prototypes

1. `0-binary_to_uint.c`: Converts a binary number string to an unsigned int.
   - Prototype: `unsigned int binary_to_uint(const char *b);`

2. `1-print_binary.c`: Prints the binary representation of a number.
   - Prototype: `void print_binary(unsigned long int n);`

3. `2-get_bit.c`: Returns the value of a bit at a given index.
   - Prototype: `int get_bit(unsigned long int n, unsigned int index);`

4. `3-set_bit.c`: Sets the value of a bit at a given index to 1.
   - Prototype: `int set_bit(unsigned long int *n, unsigned int index);`

5. `4-clear_bit.c`: Sets the value of a bit at a given index to 0.
   - Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`

6. `5-flip_bits.c`: Calculates the number of bits needed to flip for number transformation.
   - Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`

7. `100-get_endianness.c`: Checks the endianness of the system.
   - Prototype: `int get_endianness(void);`

### Tasks

1. **Task 0**: Binary to Unsigned Int Conversion
   - Implement `binary_to_uint.c`.
   - Converts a binary number string to an unsigned int.
   - Handles errors if characters are not 0 or 1.

2. **Task 1**: Binary Representation Printing
   - Implement `1-print_binary.c`.
   - Prints the binary representation of a given number.

3. **Task 2**: Getting a Bit
   - Implement `2-get_bit.c`.
   - Returns the value of a bit at a specified index.

4. **Task 3**: Setting a Bit
   - Implement `3-set_bit.c`.
   - Sets a bit at a specified index to 1.

5. **Task 4**: Clearing a Bit
   - Implement `4-clear_bit.c`.
   - Sets a bit at a specified index to 0.

6. **Task 5**: Flipping Bits
   - Implement `5-flip_bits.c`.
   - Calculates the number of bit flips required to transform one number to another.

7. **Endianness Task**: Checking System Endianness
   - Implement `100-get_endianness.c`.
   - Checks the endianness of the system (big-endian or little-endian).

## Security Challenge

- **Crackme3 Password**: The file `101-password` contains the password for the `crackme3` executable. Use it for security challenges or password cracking exercises.

## Conclusion

This project provides a comprehensive exploration of bit manipulation concepts in C. Each task challenges your understanding of bitwise operations, enabling you to develop valuable skills in low-level programming.

Feel free to explore, experiment, and learn from this project. Happy coding!

