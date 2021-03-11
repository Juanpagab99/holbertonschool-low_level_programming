#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

/**
 * struct in_format - Struct for formats
 *
 * @n: The format
 * @func: The function associated
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

#endif /* _VARIADIC_FUNCTIONS_H_ */
