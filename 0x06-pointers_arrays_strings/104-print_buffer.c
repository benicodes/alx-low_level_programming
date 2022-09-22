#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - determines if n is a printable ASCII char
 * @n: integer
 * Return: 1 if true, otherwise 0
 */
int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}


/**
 * printHexes - prints formatted string hex values
 * @b: string to print
 * @start: starting point
 * @end: ending point
 */
void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + 1));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printASCII - prints ASCII values for string b
 * formatted to replace non printable chars with '.'
 * @b: string to print
 * @start: start point
 * @end: end point
 */
void printASCII(char *b, int start, int end)
{
	int c, i = 0;

	while (i < end)
	{
		c = *(b + i + start);

		if (!isPrintableASCII(c))
			c = 46;
		printf("%c", c);
		i++;
	}
}


/**
 * print_buffer - prints a buffer
 * @b: string
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	} else
		printf("\n");
}
