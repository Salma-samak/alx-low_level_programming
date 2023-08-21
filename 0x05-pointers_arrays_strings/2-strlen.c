#include "main.h"

/**
 *_strlen -  returns the length of a string
 *
 *@s: input of characters
 *
 *Return: count
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;

	return (count);
}
