#include "main.h"

/**
 * _islower - check description
 * Description: a function that checks for lowercase character.
 * @c - an input character
 * Return: Nothing
 */

int _islower(int c)
{
	char x;
	int lower = 0;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == c)
			lower = 1;
	}

	return (lower);
}
