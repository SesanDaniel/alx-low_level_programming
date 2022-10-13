#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: a variable of numbers of string passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;

	unsigned int j;

	va_start(str, n);

	for (j = 0; j < n; j++)
	{
		printf("%s", va_arg(str, char);
		if (separator != NULL && j != (n - 1))
		printf(separator);
	}
	printf("\n");

	va_end(str);
}
