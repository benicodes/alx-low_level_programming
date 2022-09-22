#include "main.h"

/**
 * _strcat - function name to concatenates two strings
 * @dest: variable name for first string
 * @src: var name for second string
 * Return: destination string will a null byte
 */

char *_strcat(char *dest, char *src)
{
	int i, length, length1;

	length = 0;

	while (dest[length] != '\0')
		length++;
	length1 = 0;
	while (src[length1] != '\0')
		length1++;
	for (i = 0; i <= length1; i++)
		dest[length + i] = src[i];
	return (dest);
}
