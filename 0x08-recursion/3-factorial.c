#include "main.h"

/**
 * factorial -  returns the factorial of a given number
 * @n: number to find factorial for
 * Return: -1 indicates an error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
