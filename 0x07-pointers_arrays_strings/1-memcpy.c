#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: The destination to copy on
 * @src: The source to copy from
 * @n: number of bytes
 * Return: Pointer to the destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
	{
		*dest = *src;
		*dest++;
		*src++;
	}
	return (ptr);
}
