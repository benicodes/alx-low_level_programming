#include "main.h"

/**
 * _isdigit - checks for a digit between 0 to 9
 * @c: int to check digit
 * Return: 1 if c is a digit, otherwise 0
 */

int _isdigit(int c)
{
	return (c >= 48 && c < 58);
}
