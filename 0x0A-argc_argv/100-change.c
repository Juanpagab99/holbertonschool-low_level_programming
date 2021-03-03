#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - change coin
 * @argc: argc
 * @argv: argv
 * Return: int
 */
int main(int argc, char *argv[])
{
	int coin, value;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coin = atoi(argv[1]);
	if (coin < 0)
	{
		printf("0\n");
		return (1);
	}
	value = change(coin);
	printf("%d\n", value);
	return (0);
}
/**
 * change - change of a coin
 * @C: a lot of money
 * Return: int
 */
int change(int C)
{
	int count;

	for (count = 0; C > 0; count++)
	{
		if (C - 25 >= 0)
		{
			C -= 25;
		}
		else if (C - 10 >= 0)
		{
			C -= 10;
		}
		else if (C - 5 >= 0)
		{
			C -= 5;
		}
		else if (C - 2 >= 0)
		{
			C -= 2;
		}
		else if (C - 1 >= 0)
		{
			C -= 1;
		}
	}
	return (count);
}
