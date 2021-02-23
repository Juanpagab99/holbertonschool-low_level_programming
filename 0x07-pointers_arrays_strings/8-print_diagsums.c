#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - diagonal sum
 * @a: vector
 * @size: size
*/
void print_diagsums(int *a, int size)
{
	int i, j, s = 0, s2 = 0, o;

	for (i = 0 ; i < size ; i++)
	{
		o = (i * size) + i;
		s += *(a + o);
	}
	for (j = 0 ; j < size ; j++)
	{
		o = (j * size) + (size - 1 - j);
		s2 += *(a + o);
	}
	printf("%d, %d\n", s, s2);
}
