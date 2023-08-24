#include "main.h"

/**
 * string_toupper -  function that changes all lowercase letters
 * of a string to uppercase.
 *
 * @str: the string
 *
 * Return: string
*/

char *string_toupper(char *str)
{
	int n;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
