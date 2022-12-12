#include "main.h"

/**
 * *_strcat - a function that concatenates two strings.
 * @dest: The destination string
 * @src: The source string
 * Return: Nothing
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (ptr);
}
