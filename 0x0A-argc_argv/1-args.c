#include "main.h"
#include <stdio.h>

/**
 * main - A programm that prints the number of rguments passed into it
 * @argc: Argument count
 * @argv: Argument vector (Array or arguments)
 * Return: Always (0) sucess
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc);

	return (0);
}
