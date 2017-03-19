#ifndef VARIAD_H
#define VARIAD_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct prints - structure that takes in a type
 * @type: argument type: char, int, float or string
 * @f: function
 * and a function
 */
typedef struct prints
{
	char *type;
	void (*f)();
} prints;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void func_char(char *separator, va_list args);
void func_int(char *separator, va_list args);
void func_float(char *separator, va_list args);
void func_string(char *separator, va_list args);
#endif
