#include "holberton.h"
/**
 * print_line - print line
 * @n: number
 *
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar(10);
	}
	else if (n > 0)
	{
		for (i = 1 ; i <= n ; i++)
		{
			_putchar(95);
		}
		_putchar(10);
	}
}
