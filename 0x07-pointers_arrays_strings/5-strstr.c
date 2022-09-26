#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring.
 * @haystack: Input string to search in
 * @needle: An input string to locate into haystack
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptrh = haystack, *ptrn = needle;

	while (*haystack)
	{
		ptrh = haystack;
		needle = ptrn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = ptrh + 1;
	}
	return (NULL);
}
