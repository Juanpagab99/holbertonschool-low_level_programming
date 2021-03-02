#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - crate an array
 * @size: size of array
 * @c: char to description
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (0);
	}
	for (j = 0; j < size; j++)
	{
		arr[j] = c;
	}
	return (arr);
}
