#include "main.h"

/**
 * _pow_recursion - returns value of x raised to power of y
 * @x: value of x
 * @y: value of y
 * Return: -1 if y < 0 and 1 if y is 0
 * otherwise retrun x to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
