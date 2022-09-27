#include "main.h"

/**
 * _memcpy - copy a memory block to another
 * @dest: memory destination
 * @src: memory source
 * @n: memory size to be copied
 * Return: returns pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
