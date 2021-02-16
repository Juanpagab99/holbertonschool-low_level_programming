#include "holberton.h"
/**
 * puts_half - puts half
 * @str: variable
 *
 *
*/
void puts_half(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (i > 4)
		{
			_putchar(str[i]);
		}
	}
	_putchar(10);
}
