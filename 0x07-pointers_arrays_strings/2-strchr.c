#include "main.h"

/**
 * _strchr - string character locator
 * @s: string to search from
 * @c: character to search for
 * Return: points to first character occurrence
 */


char *_strchr(char *s, char c)
{
	while (*s != c && *s != "\0")
		s++;
	if (*s == c)
		return (s);
	else
		return ("\0");
}
