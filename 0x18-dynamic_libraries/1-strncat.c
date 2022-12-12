#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: An input string
 * @src: Input string source
 * @n: Integer number
 * Return: A pointer to resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *ptr = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;
	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (ptr);
}
