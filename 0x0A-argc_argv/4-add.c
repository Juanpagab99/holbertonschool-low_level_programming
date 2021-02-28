#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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

	for (i = 0 ; i < argc ; i++)
	{
		suma += atoi(argv[i]);
	}
	printf("%d\n", suma);
	return (0);
}
