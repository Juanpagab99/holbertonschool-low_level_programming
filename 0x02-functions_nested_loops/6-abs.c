#include "holberton.h"
/**
 * _abs - absolute value
 * @x: number
 * main - abs
 * Description: search absolute
 * Return:void
*/
int _abs(int x)
{
	if (x < 0)
	{
		return (x * -1);
	}
	else
	{
		return (x);
	}
}
