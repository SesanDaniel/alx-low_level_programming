#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: nothing
 */

char *str_concat(char *s1, char *s2)
{
	int *ptr, i, len1, len2;

	len1 = strlen (s1);
	len2 = strlen (s2);
	
	ptr = (int*) malloc(sizeof(char));
	for (i = 0; i < len2; i++)
	{
		s1[len1 + i] = s2[i];
	}
	return (ptr);
}
