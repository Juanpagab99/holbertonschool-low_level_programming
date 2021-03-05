#include <stdlib.h>
#include "holberton.h"
/**
 * array_range - array range
 * @min: min value
 * @max: max value
 * Return: int
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, sum;

	if (min > max)
		return (NULL);
	sum = max - min + 1;
	arr = malloc(sizeof(int) * sum);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < sum; i++, min++)
	{
		arr[i] = min;
	}
	return (arr);
}