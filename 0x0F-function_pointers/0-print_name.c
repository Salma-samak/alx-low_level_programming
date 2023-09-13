#include "function_pointers.h"

/**
 * print_name - prints name
 *
 * @name: the string name
 * @f: pointer
 *
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
