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
	int i = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%S", (str = va_arg(ap, char*)) ? str : "(nil)";
			i ? (separator ? separato : "") : "\n");
	va_end(ap);
}
