#include <stdio.h>

/**
 * main - entry file
 * description: print number separated by comma
 * Return: 0 Always success
 */

int main(void)
{
	int n;

	for (n = 1; n < 10; n++)
	{
		putchar(n);
		if (n != 9)
		{
			putchar(',');
			putchar (' ');
		}
	}

	putchar('\n');
	return (0);
}
