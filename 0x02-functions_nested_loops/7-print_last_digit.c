#include "holberton.h"
/**
 * print_last_digit - last digit
 * @n: number
 * Description: last digit
 * Return: void
*/
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (n < 10)
	{
		x = x * -1;
	}
	_putchar(x + '0');
	return (0);
}
