#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - use calloc function
 * @nmemb: first variable
 * @size: size
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;
	unsigned int mul;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mul = nmemb * size;
	arr = malloc(mul);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < mul; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}