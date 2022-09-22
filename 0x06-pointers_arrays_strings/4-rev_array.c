#include "main.h"

/**
 * reverse_array - prints array in reversed order
 * @a: array to be reversed
 * @n: number of elements to be reversed
 */

void reverse_array(int *a, int n)
{
	int i, rev;

	for (i = 0; i < n / 2; i++)
	{
		rev = a[i];
		a[i] = a[n - i - 1];
		a[n - 1] = rev;
	}
}
