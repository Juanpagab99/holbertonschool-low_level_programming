#include "holberton.h"
/**
 * print_square - print size
 * @size: variable
 *
*/
void print_square(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1 ; i <= size ; i++)
		{
			for (j = 1 ; j <= i ; j++)
			{
				if (j == i)
				{
					for (k = 1 ; k <= size ; k++)
					{
						_putchar(35);
					}
				}
			}
			_putchar(10);
		}
	}
}
