#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s : input
 *
 * Return: nothing
*/

void rev_string(char *s)
{
	int length, i;
	char temp;

	for (length = 0; s[length] != '\0'; ++length)
		;

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}

