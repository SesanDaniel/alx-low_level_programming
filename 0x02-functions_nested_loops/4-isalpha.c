#include "main.h"

/**
 * _isalpha - check description
 * @c: An input character
 * Description: a function that checks for lowercase character.
 * Return: Nothing
 */

int _islower(int c)
{
	char lower, upper;
	int isLetter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isLetter = 1;
		}
	}

	return (isLetter);
}

