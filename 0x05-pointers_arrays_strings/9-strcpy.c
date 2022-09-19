#include "main.h"

/**
 * _strcpy - a function that copies the string 
 * pointed to by src, including the terminating null 
 * byte (\0), to the buffer pointed to by dest.
 * @dest: Destination pointer for a string
 * @src: Scource pointer to copy from
 * Return: Pointer to Dest
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src)
		*dest++ = *src++;
	return (ptr);
}
