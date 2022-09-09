#include <stdio.h>

/**
  * main - entry file
  * description: prints alphabet in lower and upper case
  * Return: 0 Always success
  */

int main(void)
{
	char l;
	char u;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	for (u = 'A'; u <= 'Z'; u++)
		putchar(u);

	putchar('\n');
	return (0);
}
