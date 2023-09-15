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
	va_list x;
	unsigned int index;

	va_start(x, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(x, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(x);
}



