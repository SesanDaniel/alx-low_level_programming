#include "main.h"
#include <stdio.h>

/**
 * main -  a program that prints all arguments it receives.
 * @argc: Argument counter
 * @argv: Argument Vector
 * Return: Always (0) success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
