#include "main.h"

/**
 * print_last_digit - print last digit of number.
 *
 * @n: takes number input
 *
 * Return: lastdigit
*/

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		lastdigit = -1 * (n % 10);
	else
		lastdigit = n % 10;
	putcgar(lastdigit + '0');
	return (lastdigit);
}

