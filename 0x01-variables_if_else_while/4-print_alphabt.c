/**
 * main - entry file
 * description: prints alphabet in lower,
 * ommiting e and u
 * Return: 0 Always success
 */

int main(void)
{
	char a, b, c;

	for (a = 'a'; a < 'e'; a++)
		putchar(a);
	for (b = 'f'; b < 'u'; b++)
		putchar(b);
	for (c = 'v'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
