#include <stdio.h>

/**
 * main - entry file
 * description: print numbers using ASCII
 * Return: 0 Always success
 */

int main(void)
{
	int k;

	for (k = 48; k < 58; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
