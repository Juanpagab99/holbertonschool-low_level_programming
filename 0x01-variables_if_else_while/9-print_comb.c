#include <stdio.h>
/**
 * main - print numbers
 * Description: use while
 * Return: void
*/
int main(void)
{
	int a;

	while (a <= 57)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(",");
			putchar(" ");
		}
		a++;
	}
	putchar('\n');
	return (0);

}
