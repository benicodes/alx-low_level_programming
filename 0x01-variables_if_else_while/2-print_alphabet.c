#include <stdio.h>

/**
  * main - entry file
  * description: printing alphabets
  * Return: 0 Always success
  */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
