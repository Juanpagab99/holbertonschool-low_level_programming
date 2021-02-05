#include <stdio.h>
/**
 * main - alphabet 3
 * Description: delete two letters
 * Return: void
*/
int main(void)
{
	char hc;

	for (hc = 'a' ; hc <= 'z' ; hc++)
	{
		if (hc != 'e' && hc != 'q')
		{
			putchar(hc);
		}
	}
	putchar('\n');
	return (0);
}
