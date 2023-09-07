#include "main.h"
#include <stdio.h>
/**
 * *string_nconcat - concatenates two string
 *
 * @s1: pointer 1
 * @s2: pointer 2
 * @n: number of bytes
 *
 * Return: poiter to space in memory containig concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1.length, s2.length;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	for (s1.length = 0; s1[s1.length] != '\0'; s1.length++)
		;
	for (s2.length = 0; s2[s2.length] != '\0'; s2.length++)
		;

	str = malloc(s1.length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0, s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';
	return (str);
}

