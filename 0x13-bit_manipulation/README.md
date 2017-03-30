# 0x13. C - Bit manipulation

## GOALS
Learning about how to manipulate bits and use bitwise operators

## 0. 0
A function that converts a binary number to an `unsigned int`
`b` is pointing to a string o `0` and `1` chars
Returns the converted number or 0 if there is one or more chars in the string `b` that is not `0` or `1`.

Prototype: `unsigned int binary_to_uint(const char *b)`

## 1. 1
A function that prints the binary representation of a number.

Prototype: `void print_binary(unsigned long int n)`

## 2. 10
A function that returns the value of a bit at a given index, where index is the index starting from 0 to the bit we will return. Returns -1 if an error occured.

Prototype: `int get_bit(unsigned long int n, unsigned int index)`

## 3. 11
A function that sets the value of a bit to 1 at a given index, where index begins at 0 to the bit we set. Returns -1 if an error occurs.

Protoytpe: `int set_bit(unsigned long int *n, unsigned int index)`

## 4. 100

A function that sets the value of a bit to 0 at a given index.

Prototype: `int clear_bit(unsigned long int *n, unsigned int index)`

## 5. 101
A function that returns the number of bits you would need to flip to get from one number to another

Protoytpe: `unsigned int flip_bits(unsigned long int n, unsigned long int m)` 
