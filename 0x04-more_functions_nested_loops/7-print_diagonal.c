#include "main.h"

/**
 * print_diagonal -  draws a diagonal line
 *
 * @n:  the number of times the character \
*/
void print_diagonal(int n)
{
	int i, c;

	if (n <= 0)
		_putchar('\n');

	else
	{
		for (i = 1; i <= n; i++)
		{
			for (c = 1; c <= i; c++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
