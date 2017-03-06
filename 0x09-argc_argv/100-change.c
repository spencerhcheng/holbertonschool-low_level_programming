#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	int j;
	int count;
	int newTotal;

	j = 1;
	count = 0;
	
//	if (argc != 1)
//	{
//		printf("Error\n");
//		return (1);
//	}

	i = atoi(argv[j]);
	newTotal = i;

	while (newTotal > 0)
	{
		if(newTotal > 25)
		{
			newTotal -= 25;
			continue;
		}
		else if (newTotal >= 10 && newTotal < 25)
		{
			newTotal -= 10;
		}
		else if (newTotal >= 5 && newTotal < 10)
		{
			newTotal -= 5;
		}
		else if (newTotal >= 2 && newTotal < 5)
		{
			newTotal -= 2;
		}
		else
		{
			newTotal -=1;
		}
			count += 1;
	}
	printf("%d\n", count);
	return (0);
}
