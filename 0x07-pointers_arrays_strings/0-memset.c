#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointer input
 * @b: character
 * @n: max type of integer
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int Itr;

	for (Itr = 0; n > 0; Itr++)
	{
		s[Itr] = b;
		n--;
	}

	return (s);
}
