#include "main.h"

/**
 * *_memcpy - a function that copies memory area.
 *
 * @dest: memory
 * @src: source
 * @n: copied length of source
 *
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
