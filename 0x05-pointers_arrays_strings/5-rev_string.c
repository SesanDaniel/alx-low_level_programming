#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: A string input
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i = 0, len = 0;

	char tmp;

	while (s[i] != '\0')
		len++;
	while (i < len--)
	{
		tmp = s[i];
		s[i++] = s[len];
		s[len] = tmp;
		
	}
}
