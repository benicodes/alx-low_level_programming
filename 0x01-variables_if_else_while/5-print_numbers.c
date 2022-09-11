#include <stdio.h>

/**
 * main - entry file
 * description - function to print numbers
 * then end with a new line
 * Return (0) Success
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);

	putchar('\n');
	return (0);
}
