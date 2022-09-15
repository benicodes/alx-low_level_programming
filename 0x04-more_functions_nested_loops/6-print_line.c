#include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of line to be printed
 */

void print_line(int n)
{
	char l;

	for (l = 0; l < n; l++)
		_putchar('_');
	_putchar('\n');
}
