#include <stdio.h>
/**
 * main - reverse
 * Description: reverse alphabet
 * Return: void
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
