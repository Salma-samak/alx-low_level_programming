#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: input of character
 *
 * Return: nothing
*/

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (i--)
		{
			putchar(s[i]);
		}
	}
	putchar('\n');
}
