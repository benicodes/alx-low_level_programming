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

	printf("Size of a char: %ld byte(s)\n", sizeof((character));
	printf("Size of an int: %ld byte(s)\n", sizeof((integer));
	printf("Size of long: %ld byte(s)\n", sizeof((isLong));
	printf("Size of long long: %ld byte(s)\n", sizeof((twiceLong));
}
