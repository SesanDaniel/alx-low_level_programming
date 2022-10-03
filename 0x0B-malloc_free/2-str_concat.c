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
	int i = 0, len1 = 0, len2 = 0;
	char *ptr, *st1, *st2;

	st1 = s1;
	st2 = s2;

	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		len1++;
		s1++;
	}
	s1 = st1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		len2++;
		s2++;
	}
	s2 = st2;
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	st1 = ptr;
	if (ptr == NULL)
		return (NULL);
	for (; i < (len1 + len2); i++)
	{
		if (i < len1)
		{
			ptr[i] = *s1;
			s1++;
		}
		else
		{
			ptr[i] = *s2;
			s2++;
		}
	}
	ptr[i] = '\0';
	return (st1);
}
