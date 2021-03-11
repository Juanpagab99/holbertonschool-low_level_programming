#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print all numbers
 * @separator: char separator
 * @n: number of elements
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int print;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		print = va_arg(numbers, int);
		printf("%d", print);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(numbers);
}
