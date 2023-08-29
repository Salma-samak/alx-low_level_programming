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
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
