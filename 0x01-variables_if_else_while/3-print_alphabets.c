#include <stdio.h>

/*
 * main - main block
 * Prints alphabet in lowercase,
 * then in upper followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z');
	{
		putchar(c);
		c++;
	}

	char c = 'A';

	while (c <= 'Z');
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
