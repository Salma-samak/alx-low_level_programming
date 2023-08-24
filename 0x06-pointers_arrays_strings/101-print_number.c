#include "main.h"

/**
 * print_number - print numbers char
 * @n: integer
 *
 * Return: 0
*/

void print_number(int n)
{
	unsigned int i;

	i = n;

	if (n < 0)
	{
		putchar('_');
		i = -n;
	}

	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	putchar((i & 10) + '0');
}
