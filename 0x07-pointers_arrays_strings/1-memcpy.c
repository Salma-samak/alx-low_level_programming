#include "main.h"

/**
 * *_memcpy -  function that copies memory area
 * @dest: memory area
 * @src: source
 * @n: lengh of src to be copied
 *
 * Return: the pointer to dest
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
