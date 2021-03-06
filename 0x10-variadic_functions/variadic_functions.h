#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>

/**
 * struct _format - Struct for formats
 *
 * @n: The format
 * @func: The function associated
 * function pointer
 */
typedef struct _format
{
	char *n;
	void (*func)();
} _format;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
void print_c(va_list _printf);
void print_i(va_list _printf);
void print_f(va_list _printf);
void print_s(va_list _printf);

#endif /* _VARIADIC_FUNCTIONS_H_ */
