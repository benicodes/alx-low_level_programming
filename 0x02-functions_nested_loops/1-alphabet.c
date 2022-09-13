#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * description: this function print lowercase alphabets
 * Return : Always 0.
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet(void);
	return (0);
}

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
}
