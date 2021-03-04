#include <stdlib.h>
#include "holberton.h"
/**
 * string_nconcat - string concate
 * @s1: char 1
 * @s2: char2
 * @n: unsigned int
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, suma;
	char *arr;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n >= j)
	{
		return (s2);
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
	for (k = 0; k < n; k++)
	{
		arr[i + k] = s2[k];
	}
	arr[i + j] = '\0';
	return (arr);
}
