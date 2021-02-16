#include "holberton.h"
/**
 * print_rev - reverse
 * @s: variable
 *
 *
*/
void print_rev(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i--]);
	}
	_putchar(10);
}
