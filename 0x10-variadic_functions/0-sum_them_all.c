#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * sum_them_all - sum all numbers
 * @n: number of arguments
 * Return: int sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int suma = 0;
	unsigned int i;
	va_list parameters;

	va_start(parameters, n);
	for (i = 0; i < n; i++)
	{
		suma = suma + va_arg(parameters, int);
	}
	va_end(parameters);
	return (suma);
}
