#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Result: Always o
*/

void print_numbers(void)
{
	int num = 0;

	do {
		putchar (num + 48);
		num++;
	} while (num >= 0 && num <= 9)
	putchar ('\n');
}
