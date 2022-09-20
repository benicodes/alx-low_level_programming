#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define stopLimit 2645
#define asciiStop 127
#define asciiStart 32

/**
 * main - generates random valid passwords
 * Return: Always 0 (Success)
 */

int main(void)
{
	char pass[100];

	int randValue, num = 0, i = 0;

	srand(time(NULL));

	while (num < stopLimit)
	{
		randValue = random() % asciiStop;
		if (randValue > asciiStart)
		{
			pass[i++] = randValue;
			num += randValue;
		}
	}
	pass[i++] = (2772 - num);
	pass[i] = '\0';
	printf("%s", pass);

	return (0);
}
