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
	unsigned int count;

	va_start(x, n);
	for (count = 0; count < n; count++)
	{
		char *s;

		s = va_arg(ap, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && (count + 1) != n)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(x);
}

