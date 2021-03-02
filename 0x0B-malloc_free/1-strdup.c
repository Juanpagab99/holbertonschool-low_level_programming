#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - make a copy
 * @str: string variable
 * Return: char
 */
char *_strdup(char *str)
{
	char *arr;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	arr = malloc(i * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		arr[j] = str[j];
	}
	return (arr);
}