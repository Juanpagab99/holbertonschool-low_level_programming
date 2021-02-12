#include "holberton.h"
/**
 * print_triangle - print triangle
 * @size: size
 *
*/
void print_triangle(int size)
{
	int fil, col, i, j, j2;

	fil = size;
	col = size - 1;
	if (size == 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1; i <= fil ; i++)
		{
			for (j = 1 ; j <= col ; j++)
			{
				_putchar(32);
			}
			col--;
			for (j2 = 1 ; j2 <= i ; j2++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
