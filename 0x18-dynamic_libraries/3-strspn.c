#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the string
 * @accept: The input character to locate into string s
 * Return:Pointer to character position
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0, dir;
	char *ptr = accept;

	while (*s)
	{
		dir = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				dir = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = ptr;
		if (dir == 0)
			break;
	}
	return (count);
}
