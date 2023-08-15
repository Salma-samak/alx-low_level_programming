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
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;

	putchar('0' + lastDigit);
	return (lastDigit);
}

