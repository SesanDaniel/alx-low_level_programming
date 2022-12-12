#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: location to be filled
 * @b: character to fill location with
 * @n: number of bytes to fill
 * Return: Pointer to location filled.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (ptr);
}
