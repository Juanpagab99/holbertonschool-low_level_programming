#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - concatenate all arguments
 * @ac: int variable
 * @av: char variable
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac;)
}