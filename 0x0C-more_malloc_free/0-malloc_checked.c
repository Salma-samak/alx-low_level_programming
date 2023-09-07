#include "main.h"

/**
 * *malloc_checked - allocates mamory using malloc and exit if failed
 *
 * @b: integer
 *
 * Return: poiter
*/

void *malloc_checked(unsigned int b)
{
	int *x = malloc(b);

	if (x == 0)
		exit(98);

	return (x);
}
