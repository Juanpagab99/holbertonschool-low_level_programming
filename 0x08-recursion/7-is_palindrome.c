#include "holberton.h"
/**
 * is_palindrome - palindrome
 * @s: char
 * Return: int
*/
int is_palindrome(char *s)
{
	int len = length(s, 0);

	return (compare(s, len, 0));
}
/**
 * compare - compare
 * @s: char
 * @i: num1
 * @j: num2
 * Return: int
*/
int compare(char *s, int j, int i)
{
	if (s[i] == s[j])
	{
		return (compare(s, j - 1, i + 1));
	}
	if (s[i] == s[j] || i > j)
	{
		return (1);
	}
	if (s[i] != s[j])
	{
		return (0);
	}
	return (0);
}
/**
 * length - len
 * @s: char
 * @i: iterator
 * Return: int
*/
int length(char *s, int i)
{
	if (s[i] != '\0')
	{
		return (length(s, i + 1));
	}
	return (i - 1);

}
