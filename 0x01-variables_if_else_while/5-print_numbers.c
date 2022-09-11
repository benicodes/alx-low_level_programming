#include <stdio.h>

/**
 * main - entry file
 * description: program to print all single digit 
 * numbers of base 10 starting from 0
 * Return: 0 Always success
 */

int main(void)
{
	int n;
	for (n = 0; n < 10; n++)
		printf("%", n);

	putchar('\n');
	return (0);

}
