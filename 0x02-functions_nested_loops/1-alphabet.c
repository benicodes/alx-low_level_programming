#include <stdio.h>

/**
 * main - check the code
 * description: function to print alphabet in lowercase a - z
 * Return : Always 0.
 */

int main(void)
{
	print_alphabet();
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
