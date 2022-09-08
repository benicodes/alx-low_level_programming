#include <stdio.h>

/**
 * main - program entry point
 *
 * Description: a program to print the size of datatype
 * Return: 0
 *
 */
int main(void)
{
	char character;
	int integer;
	long isLong;
	long long twiceLong;
	float iamFloat;

	printf("Size of a char: %c byte(s)\n", sizeof((character));
	printf("Size of an int: %i byte(s)\n", sizeof((integer));
	printf("Size of long: %d byte(s)\n", sizeof((isLong));
	printf("Size of long long: %Lf byte(s)\n", sizeof((twiceLong));
	printf("Size of float: %f byte(s)\n", sizeof((iamFloat);
}
