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
	va_list x;
	char *str;
	unsigned int index;

	va_start(x, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(x, char *);

		if (str == NULL)
			print("(nil)");
		else
			print("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(x);
}
