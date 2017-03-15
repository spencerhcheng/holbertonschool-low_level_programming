#ifndef FUNCPOINT_H
#define FUNCPOINT_H
#include <stddef.h>
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
#endif
