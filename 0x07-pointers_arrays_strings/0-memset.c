#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointer input
 * @b: character
 * @n: max type of integer
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int itrr;

	for (itrr = 0; n > 0; itrr++, n--)
	{
		s[itrr] = b;
	}
	return (s);
}
