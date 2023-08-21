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
	int longe = 0;
	int i;

	while (*s != '\0')
	{
		longe++;
		s++;
	}
	s--;
	for (i = longe; o > 0; o--)
	{
		putchar(*s);
		s--;
	}

	putchar('\n');
}
