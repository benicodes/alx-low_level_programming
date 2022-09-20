#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int size, i, j;

	i = 0;

	while (s[i] != '\0')
		i++;
	size = i;

	for (j = size - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
