#include "main.h"

/**
 * _memcpy -  function that copies memory area.
 * @dest: new storage memory
 * @src: memory to be copied from
 * @n: number of bytes
 * Return: Copied memory within n bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
