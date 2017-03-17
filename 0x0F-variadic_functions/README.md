# 0x0F. C - Variadic functions
## Goal
The goal of this project is to:
* [ ] --  become acquainted with variadic functions 
* [ ] -- learn how to use the `va_start`, `va_arg` and `va_end` macros
* [ ] -- why and how to use the `const` type qualifier

### 0. Beauty is variable, ugliness is constant
This function returns the sum of all its parameters.

Prototype: `int sum_them_all(const unsigned int n, ...);`

### 1. To be is to be the value of a variable
This function prints numbers, followed by a new line.

`seperator` is the string to be printed between numbers
`n` is the number of integers passed to the function
`printf` is permitted
A new line is printed at the end of the function

Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);'

### 2. One woman's constant is another woman's variable
This function prints strings, followed by a new line.

`seperator` is the string to be printed between strings
`n` is the number of strings passed to the function
`printf` is permitted
If `seperator` is `NULL`, we don't print it
If one of the string is `NULL`, print `(nil)` instead

Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`

### 3. To be is a to be the value of a variable
A function that prints anything.

`format` is a list of types of arguements passed to the function
* [ ] -- `c : char`
* [ ] -- `i : integer`
* [ ] -- `f : float`
* [ ] -- `s : char *`

The specifications of this function permits for a maximum of 2 `while` loops, 2 `if` loops, a maximum of 9 variables, and `printf`.

Prototoype: `void print_all(const char * const format, ...);`

