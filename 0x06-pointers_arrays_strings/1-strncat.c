#include "main.h"

/**
 *_strncat -  function that concatenates two strings
 *
 * @dest: input pointer 1
 * @src: input pointer 2
 * @n: most number of bytes from @src
 *
 * Return: &dest
*/

char *_strncat(char *dest, char *src, int n);
{
	int i, i2;

	i = 0;

	while (dest[i])
		i++;

	for (i2 = 0; i2 < n && src[i2] != '\0'; i2++)
		dest[i + i2] = src[i2];

	dest[i + i2] = '\0';

	return (dest);
}
