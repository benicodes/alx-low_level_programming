#include "main.h"

/**
 * _strncat - function to concatenate two strings
 * @dest: first string pointer
 * @src: second string pointer
 * @n: number of strings to concatenate
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int str1, str2;

	str1 = 0;

	while (dest[str1] != '\0')
		str1++;

	str2 = 0;

	while (src[str2] != '\0' && str2 < n)
	{
		dest[str1] = src[str2];
		str1++;
		str2++;
	}
	dest[i] = '\0';
	return (dest);
}
