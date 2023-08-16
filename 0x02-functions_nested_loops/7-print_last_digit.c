#include "main.h"

/**
 * print_last_digit - main function
 *
 * @n: integer to get last digit of numbers
 *
 * Return: value of the last digit
*/

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
	{
		n = -n;
	}
	lastdigit = n % 10;

	if (lastdigit < 0)
	{
		lastdigit = -lastdigit;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
