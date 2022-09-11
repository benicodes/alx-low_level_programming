#include <stdio.h>

/**
 * main - entry file
 * description: print lowercase alphabet in reverse
 * Return: 0 Always success
 */

int main(void)
{
	char r;

	for (r = 'z'; r >= 'a'; r--)
		putchar(r);
	putchar('\n');
	return (0);
}
