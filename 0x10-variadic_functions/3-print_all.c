#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_c - print char
 * @_printf: list of arg
 * Return: void
 */
void print_c(va_list _printf)
{
	printf("%c", va_arg(_printf, int));
}
/**
 * print_i - print int
 * @_printf: list of arg
 * Return: void
 */
void print_i(va_list _printf)
{
	printf("%i", va_arg(_printf, int));
}
/**
 * print_f - print float
 * @_printf: list of arg
 * Return: void
 */
void print_f(va_list _printf)
{
	printf("%f", va_arg(_printf, double));
}
/**
 * print_s - print string
 * @_printf: list of arg
 * Return: void
 */
void print_s(va_list _printf)
{
	char *p;

	p = va_arg(_printf, char *);
	if (p == NULL)
		p = "(nil)";
	printf("%s", p);
}
/**
 * print_all - print all
 * @format: list
 * Return: void
 */
void print_all(const char *const format, ...)
{
	int i, j;
	_format struc_format[] = {
		{"c", print_c},
		{"i", print_i},
		{"s", print_s},
		{"f", print_f},
		{NULL, NULL}};
	char *empty = "";
	char *separator = ", ";
	va_list _printf;

	va_start(_printf, format);
	i = 0;
	while (format && format[i] != '\0')
	{
		j = 0;
		while (struc_format[j].n != '\0')
		{
			if (format[i] == struc_format[j].n[0])
			{
				printf("%s", empty);
				struc_format[j].func(_printf);
				empty = separator;
				/* ","*/
			}
			j++;
		}
		i++;
	}
	va_end(_printf);
	printf("\n");
}
