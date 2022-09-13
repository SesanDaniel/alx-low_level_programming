#include <unistd.h>
#include "main.h"
/**
 * main - Print _putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	char j[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(j[i]);
	_putchar("\n");
	
	return (0);
}
