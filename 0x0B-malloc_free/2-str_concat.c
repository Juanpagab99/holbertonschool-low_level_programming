#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - string concatenate
 * @s1: first string
 * @s2: second string
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	int suma;
	char *arr;

	for (i = 0; s1[i] != '\0'; i++)
	{
		i++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		j++;
	}
	suma = i + 1 + j;
	arr = malloc(suma * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		arr[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		arr[i + k] = s2[k];
	}
	arr[i + j] = '\0';
	return (arr);
}
