#include "main.h"

/**
 * *create_array -  function that creates an array of chars
 * and initializes it with a specific char
 *
 * @size: size of the array
 *
 * @c: char to initialize
 *
 * Return: pointer to the array initialize or null
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == null)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
