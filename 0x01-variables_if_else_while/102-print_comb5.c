#include <stdio.h>

int main(void)
{
    int i, j, l, m;
    int tens_l, tens_i;
    int digit_a, digit_b;

    tens_l = 0;
    tens_i = 0;
    digit_a = 0;
    digit_b = 0;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (l = 0; l < 10; l++)
            {
                for (m = 0; m < 10; m++)
                {
                    tens_l = l * 10;
                    tens_i = i * 10;
                    digit_a = tens_l + m;
                    digit_b = tens_i + j;

                    if ((digit_a) > (digit_b))
                    {
                        putchar(i + '0');
                        putchar(j + '0');
                        putchar(' ');
                        putchar(l + '0');
                        putchar(m + '0');
                    if (i == 9 && j == 8 && m == 9 && l == 9)
                    {
                        continue;
                    }
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }
    putchar('\n');
    return (0);
} 
