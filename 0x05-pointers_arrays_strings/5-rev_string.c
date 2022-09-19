#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a given string
 * @s: String to be checked for length
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * rev_string - a function that reverses a string.
 * @s: String to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int i, len;
	char x, y;

	len = _strlen(s) - 1;
	i = 0;
	while (i < len)
	{
		x = s[i];
		y = s[len];
		s[i++] = y;
		s[len--] = x;
	}
}
