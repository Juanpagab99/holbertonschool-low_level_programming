#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - my name is
 * @argc: argc
 * @argv: argv
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = mult(num1, num2);
	printf("%d\n", mul);
	return (0);
}
/**
 * mult - multiplication
 * @n1: number1
 * @n2: number2
 * Return: n1 * n2
*/
int mult(int n1, int n2)
{
	return (n1 * n2);
}
