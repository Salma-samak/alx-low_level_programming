#include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * @i: the character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately
*/

int _putchar(char i)
{
	return (write(1, &i, 1));
}
