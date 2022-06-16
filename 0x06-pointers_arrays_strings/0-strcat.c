#include <string.h>

/*
 * function that concatenates two strings
 *
 */
char *strcat(char *dest, const char *src)
{
	int len1,len2;
	
	int i = 0;

	len1 = strlen(dest);
	len2 = strlen(src);

	while (dest[i++])
		len1++;

	for (i = 0; src[i]; i++)
	{
		dest[len1++] = src[i];
	}
	return (dest);
}
