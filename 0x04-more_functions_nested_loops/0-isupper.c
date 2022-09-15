#include "main.h"

/**
 * _isupper - check description
 * @c: an input integer
 * Description: a function that checks for uppercase character.
 * Return: Return 1 if c is uppercase or otherwise
 */

int _isupper(int c)
{
	char uppercase;
	int isupper = 0;

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	
	return (isupper);
}
