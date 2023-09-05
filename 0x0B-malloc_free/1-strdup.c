#include "main.h"

/**
 * *_strdup - returns a pointer to a new string which is a duplicate of
 * the string str. Memory for the new string is obtained with malloc,
 * and can be freed with free
 *
 * @str:string
 *
 * Return: 0
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *x;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	x = malloc(size * sizeof(*str) + 1);

	if (x == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			x[i] = str[i];
	}
	return (x);
}

