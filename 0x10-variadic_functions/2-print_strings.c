#include "variadic_functions.h"

/**
 * print_numbers -  function that prints numbers, followed by a new line
 *
 * @separator: string separator
 * @n: number of arguments
 * @...: string to print
 *
 * Retuen: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = n;

	va_start(list, n);

	while (i--)
	{
		printf("%u%s", va_arg(list, unsigned int),
				i ? (separator ? separator : "") : "\n");
	}

	va_end(list);
}
