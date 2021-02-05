#include <stdio.h>
/**
 * main - count to 99
 * Description: nested loops
 * Return: void
*/
int main(void)
{
	int a, b;

	for (a = 48 ; a <= 57 ; a++)
	{
		for (b = 48 ; b <= 57 ; b++)
		{
			putchar(a);
			putchar(b);
			if (a == 57 && b == 57)
			{
				putchar(10);
			}
			else
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	return (0);
}
