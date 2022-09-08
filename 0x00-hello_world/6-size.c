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
	long int isLong;
	long long int twiceLong;
	float iamFloat;

	printf("Size of a char: %ld byte(s)\n", sizeof(character));
	printf("Size of an int: %ld byte(s)\n", sizeof(integer));
	printf("Size of a long int: %ld byte(s)\n", sizeof(isLong));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(twiceLong));
	printf("Size of a float: %ld byte(s)\n", sizeof(iamFloat));
}
