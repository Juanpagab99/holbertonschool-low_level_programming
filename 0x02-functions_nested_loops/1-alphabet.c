#include "holberton.h"
/**
 * print_alphabet - print alphabet
 * main - alphabet
 * Descrption: use a function
 * Return: void
*/
void print_alphabet(void)
{
	int A;

	for (A = 97 ; A <= 122 ; A++)
	{
		_putchar(A);
	}
	_putchar(10);
}
