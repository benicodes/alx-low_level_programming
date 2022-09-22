#include "main.h"

/**
 * rot13 - encodes a string
 * @s: string to encode
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i, j;
	char ch1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ch2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; ch1[j] != '\0'; j++)
		{
			if (s[i] == ch1[j])
			{
				s[i] = ch2[j];
				break;
			}
		}
	}
	return (s);
}
