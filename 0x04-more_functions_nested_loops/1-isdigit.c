#include "holberton.h"
/**
 * _isdigit - is digit or not
 * @c: number or letter
 * Return: 1 or 0
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
