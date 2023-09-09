#include "main.h"

/**
 * _puts - prints a string, followed by new line.
 *
 * @str: pointer
 *
 * Return: nothing
*/

void _puts(char *str)
{
	i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - convert a string to an string to an integer.
 *
 * @s: string
 * Return: int
*/

int _atoi(const char *s)
{
	int x = 1;
	unsigned long int resp = 0, firstnum = 0, i;

	for (firstname = 0; !(s[firstnum] >= 48 && s[firstnum] <= 57); firstnum++)
	{
		if (s[firstnum] == '_')
		{
			x *= -1;
		}
	}
	for (i = firstnum; s[i] >= 48 && s[i] <= 57; i++)
	{
		x *= 10;
		x += (s[i] - 48);
	}
	return (x * resp);
}

/**
 * main - print the result of the multiplication, followed by new line
 *
 * @argc: integer
 * @argv: list
 *
 * Return: 0
*/
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}

	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
