#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * @a: square matrix of integers
 * @size: size of matrix
 *
 */

void print_diagsums(int *a, int size)
{
	int i;

	unsigned int diag1 = 0, diag = 0;

	for (i = 0; i < size; i++)
	{
		diag += a[(size * i) + i];
		diag1 += a[(size * (i + 1)) - (i +)];
	}

	printf("%d, %d\n", diag, diag1);

}
