#include <stdio.h>

/**
 * main - entry file
 * description: print numbers then a new line
 * Return: (0) Always success
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);

	putchar('\n');
	return (0);
}
