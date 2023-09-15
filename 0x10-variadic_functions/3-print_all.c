#include "variadic_functions.h"

/**
 * format_char - formats character
 *
 * @separator: string seprator
 * @ap: argument pointer
*/

void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * formate_int - formates integer
 *
 * @separator: the string separator
 * @ap: argument pointer
*/

void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap,int));
}


void print_strings(const char *separator, const unsigned int n, ...)
{

