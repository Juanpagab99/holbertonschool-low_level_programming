#include <stdlib.h>
#include <stdio.h>
/**
 * positive_or_negative - Entry point
 * @n: number to study
 * Description: negative or positive
 * Return: Always 0 (Success)
 */
int positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
