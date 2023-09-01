#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: string
 * @accept: bytes
 *
 * Return: c
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c, x;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (x = 0; accept[x] != s[c]; x++)
		{
			if (accept[x] == '\0')
				return (c);
		}
	}
	return (c);
}

