#ifndef VARIADIC_H
#define VARIADIC_H
typedef struct variad
{
	char *variad;
	char (*f)();
}argType;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char);
void print_int(int);
void print_float(float);
void print_string(char);
void print_all(const char * const format, ...);
#endif
