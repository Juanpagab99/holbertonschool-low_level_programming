#include <stdio.h>
/**
 * main - mix
 * Description: mix numbers and letters
 * Return: void
*/
int main(void)
{
	char a, b;

	for (a = 48 ; a <= 57 ; a++)
	{
		putchar(a);
	}
	for (b = 'a' ; b <= 'f' ; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
