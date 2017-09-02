#ifndef SEARCH_H
#define SEARCH_H
#include <stdio.h>
#include <stdlib.h>
int binary_search_exp(int *array, size_t left, size_t right, int value);
void print_nums(int *array, size_t low, size_t high);
void print_val(size_t pos, int *array, size_t size);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int lin_search(int *array, size_t left, size_t right, int value, size_t size);
#endif
