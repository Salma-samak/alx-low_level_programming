#include "main.h"

/**
 *_strcat - function that concatenates two strings
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int i, i2;

	i = 0;

	while (dest[i])
		i++;

	for (i2; src[i2]; i++)
	{
		dest[i] = src[i2];
		i++;
	}


	return (dest);
}

