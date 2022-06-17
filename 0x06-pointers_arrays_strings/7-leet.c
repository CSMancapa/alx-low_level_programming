#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{
	char key[8] = {'o', 'l', '?', 'e', 'a', '?', '?', 't'};
	int i = 0, j;

	while (s[i])
	{
		for (j = 0; j < 8; j++)
		{
			if (s[i] == key[j] ||
			    s[i] + 32 == key[j])
				s[i] = j + '0';
		}
		i++;
	}
	return (s);
}
