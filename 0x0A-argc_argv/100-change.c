#include <stdio.h>
#include <stdlib.h>
/**
 * main - change money
 * @argc: cant of agruments
 * @argv: vector of arguments
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1}, i, ch, io;
	io = atoi(argv[1]);
	if (argc == 2)
	{
		for(i = 0; i < 6; i++)
		{
			if (io > 0)
			{
				if (io >= coins[i])
				{
					if (io/coins[i] < 10)
					{
						ch = io / coins[i];
						ch = ch + (io % coins[i]);
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
