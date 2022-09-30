#include "main.h"

/**
 * main - a program that prints its name, followed by a new line.
 * Return: Always (0) success
 */

int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		_putchar("%s\n", argv[i]);
	}
	return (0);
}
