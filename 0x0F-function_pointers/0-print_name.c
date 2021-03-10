#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - BOB DYLAN
 * @name: print name
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
