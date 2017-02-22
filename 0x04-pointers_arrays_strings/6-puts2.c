#include "holberton.h"

/** 
 * _puts - A function that prints a string, followed by a new line to standard out
 * @str: string as arguement
 * Return: nothing
 */

void puts2(char *str)
{
        int i = 0;

        while (str[i] != '\0')
        {
                _putchar(str[i]);
                i = i + 2;
        }
                _putchar('\n');
}
