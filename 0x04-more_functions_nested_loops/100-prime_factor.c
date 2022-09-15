#include <stdio.h>

/**
 * main - entry file
 * @void: no argument
 * Return: 0
 */

int main(void)
{
	long l, num = 612852475143;

	for (l = 2; l <= num; l++)
	{
		if (num % l == 0)
		{
			num = num / l;
			l--;
		}
	}
	printf("%lu\n", l);
	return (0);
}
