#include <stdio.h>
/**
 * main - print
 * Description: use printf to print size
 * Return: void
*/
int main(void)
{
	printf("Size of a char: %d Byte(s)",sizeof(char));
	printf("Size of an int: %d Bytes(s)",sizeof(int));
	printf("Size of a long int: %d Byte(s)",sizeof(long int));
	printf("Size of a long long int: %d Byte(s)",sizeof(long long int));
	printf("Size of a float: %d Byte(s)",sizeof(float));
	return (0);
}
