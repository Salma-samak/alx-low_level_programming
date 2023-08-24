#include "main.h"

/**
 * print_number - print numbers char
 * @n: integer
 *
 * Return: 0
*/

void print_number(int n)
{
	unsigned in i;

	i = n;

	if (n < 0)
	{
		_putchar('_');
		i = -n;
	}

	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar((i & 10) + '0');
}
