#include "variadic_functions.h"

/**
 * print_strings -  function that prints strings, followed by a new line
 *
 * @separator: string separator
 * @n: number of arguments
 * @...: string to print
 *
 * Retuen: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(x, char *);

		if (str == NULL)
		printf("(nil)");

		else
		printf("%s", str);

		if (index != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");

	va_end(x);
}
