#include <stdio.h>

/**
 * main - change money
 * @argc: cant of agruments
 * @argv: vector of arguments
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int coins[5] = {1, 2, 5, 10, 25}, i, ch;
	if (argc == 2)
	{
		for(i = 0; i < 6; i++)
		{
			if (*argv[1] > 0)
			{
				if (*argv[1] >= coins[i])
				{
					if (*argv[i]/coins[i] < 10)
					{
						ch = argv[1] / coins[i];
						ch = ch + (argv[1] % coins[i]);
						printf("%d\n",ch);
						return (0);
					}
				}
			}
		}
	}
	else
	{
		printf("Error");
		return (1);
	}
}
