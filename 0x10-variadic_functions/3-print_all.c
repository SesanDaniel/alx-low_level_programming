#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything.
 * @format - list of types of arguments passed to the function.
 */

void print_all(const char * const format, ...)
{
	int i;
	char s, *separator = "";

	va_list ap;

	va_start(ap, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					s = va_arg(list, char *);
					if (!= s)
						str = "(nil)";
					printf("%s%s", sep, str);
				default
					i++;
				continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
