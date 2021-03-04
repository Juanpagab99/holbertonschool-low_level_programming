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
	int **arr, i, j, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(arr[k]);
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}