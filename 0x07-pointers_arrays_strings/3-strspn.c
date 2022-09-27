#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: first string receiver
 * @accept: another sub string receiver
 * Return: length of string
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, increment;

	increment = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (increment != 1)
			break;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				increment++;
		}
	}
	return (increment);
}
