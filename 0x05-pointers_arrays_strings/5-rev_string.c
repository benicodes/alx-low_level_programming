#include "main.h"

/**
 * rev_string - to reverse a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char c;
	int i, size, length;

	size = 0;
	length = 0;

	while (s[size] != '\0')
		size++;
	length = size - 1;

	for (i = 0; i < size / 2; i++)
	{
		c = s[i];
		s[i] = s[length];
		s[length--] = c;
	}
}
