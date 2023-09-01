#include "main.h"

/**
 * *_strstr - function that locates a substring
 *
 * @haystack: input
 * @needle: input
 *
 * Return: Always 0
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *c = haystack;
		char *k = needle;

		while (*c == *k && *k != '\0')
		{
			c++;
			k++;
		}

		if (*k == '\0')
			return (haystack);
	}
	return (0);
}
