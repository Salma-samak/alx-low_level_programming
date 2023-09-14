#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @separator: string seperator
 * @n: number of arguments
 * @...: integer to print
 *
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (x--)
		printf("%d%s", va_arg(ap, int)
				x ? (seperator ? seperator : "") : "\n");
	va_end(ap);
}



