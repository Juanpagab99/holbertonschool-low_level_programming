#include "holberton.h"
/**
 * _strstr - world
 * @haystack: char1
 * @needle: char2
 * Return: char
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0 ; haystack[i] != '\0' ; i++)
	{
		for (j = 0 ; needle[j] != '\0' ; j++)
		{
			if (needle[j] && (haystack[i] == needle[0]))
			{
				return (haystack + i);
			}
		}
	}
	return ('\0');
}
