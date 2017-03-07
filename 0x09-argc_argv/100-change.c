#include <stdio.h>
#include <stdlib.h>

/**
 * main - takes in number amount of pennies  and
 * returns minimum number of coins to make change
 * @argc: number of arguements
 * @argv: arguements in penny amount
 * Return: coin coint
 */
int main(int argc, char *argv[])
{
	int count, newTotal;

	count = 0;
	newTotal = atoi(argv[1]);

	if (argc < 0)
		printf("0\n");

	else if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (newTotal > 0)
		{
			if (newTotal >= 25)
				newTotal -= 25;

			else if (newTotal >= 10 && newTotal < 25)
				newTotal -= 10;

			else if (newTotal >= 5 && newTotal < 10)
				newTotal -= 5;

			else if (newTotal >= 2 && newTotal < 5)
				newTotal -= 2;
			else
			{
				newTotal -= 1;
			}
				count += 1;
		}
	}
		printf("%d\n", count);
	return (0);
}
