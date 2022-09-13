#include "main.h"

/**
 * main - check the code
 * description: this propram prints lowercase alphabet, followed by a new line
 * Return : Always 0.
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
		_putchar('\n');
	}
}
