#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "holberton.h"
/**
 * main - my name is
 * @argc: argc
 * @argv: argv
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, suma;

	suma = 0;

	for (i = 1 ; i < argc ; i++)
	{
		if (verify(argv[i]))
		{
			suma += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", suma);
	return (0);
}
/**
 * verify - verify
 * @num: number verify
 * Return: int
*/
int verify(char *num)
{
	int j;

	j = 0;
	while (num[j] != '\0')
	{
		if (isdigit(num[j]))
		{
			j++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
