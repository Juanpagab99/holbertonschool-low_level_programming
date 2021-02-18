#include "holberton.h"
/**
 * reverse_array - {0,1,2,3} to {3,2,1,0}
 * @a: array
 * @n: size of array
 *
*/
void reverse_array(int *a, int n)
{
	int i;
	int aux[100];

	for (i = 0; i < n; i++)
	{
		int x = n - 1 - i;
		aux[x] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = aux[i];
	}
}
