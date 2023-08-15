#include "main.h"

/**
 * print_last_digit - print last digit of number.
 *
 * @n: takes number input
 *
 * Return: lastDigit
*/

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	putchar(last + '0');
	putchar('\n');
	return (0);
}
