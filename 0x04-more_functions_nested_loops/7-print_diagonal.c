#include "holberton.h"
/**
 * print_diagonal - make a diagonal
 * @n: number of diagonals
 *
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar(10);
	}
	else if (n > 0)
	{
		for (i = 1 ; i <= n ; i++)
		{
			for (j = 1 ; j <= n ; j++)
			{
				if (j == i)
				{
					_putchar(92);
				}
				else
				{
					_putchar(32);
				}
			}
			_putchar(10);
		}
	}
}
