#include "variadic_functions.h"

/**
 * sum_them_all - sums variable arguments
 *
 * @n: the number of argument
 * @...: integers to sum
 *
 * Return: the integer sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, x = n;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	while (x--)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
