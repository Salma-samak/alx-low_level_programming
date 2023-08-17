#include "main.h"

/**
 * print_line - draws a straight line
 *
 * @n: is the number of times the character (_)
*/

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
		_putchar(_);
	_putchar('\n');
}
