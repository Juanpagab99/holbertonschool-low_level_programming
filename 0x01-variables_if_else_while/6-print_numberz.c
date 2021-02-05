#include <stdio.h>
/**
 * main - print 0123456789
 * Description: int putchar
 * Return: void
*/
int main(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
