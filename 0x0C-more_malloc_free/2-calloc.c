#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 *
 * @s: pointer
 * @b: constant
 * @n: max bytes to use
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}

/**
 * *_calloc - allocate mamory for an array, using malloc
 *
 * @nmemb: array length
 * @size:size
 *
 * Return: pointer
*/


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;

	if (size == 0 || nmemb == 0)
		return (NULL);
	x = malloc(sizeof(int) * nmemb);

	if (x == 0)
		return (NULL);

	_memset(x, 0, sizeof(int) * nmemb);

	return (x);
}

