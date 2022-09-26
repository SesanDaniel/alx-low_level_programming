#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: A pointer to the pointer to
 * @to:A pointer to a string
 * Return: Description of the returned value
 */

void set_string(char **s, char *to)
{
	*s = to;
}
