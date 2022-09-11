#include <stdio.h>

/**
 * main - entry file
 * description: prints alphabet in lower,
 * ommiting e and u
 * Return: 0 Always success
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
			putchar(a);
	}

	putchar('\n');
	return (0);
}
