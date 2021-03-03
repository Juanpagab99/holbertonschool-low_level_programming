#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - dimensional array
 * @width: array width
 * @heigth: array heigth
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));
	for (j = 0; j <= height; j++)
	{
		arr[j] = malloc(width * sizeof(int));
		for (i = 0; i <= width; i++)
		{
			arr[j][i] = 0;
		}
	}
	return (arr);
}