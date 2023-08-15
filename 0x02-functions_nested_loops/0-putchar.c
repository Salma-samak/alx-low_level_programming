#include "main.h"

/**
 * main - Entry point
 *
 * Description: print _putchar using putchar prototype
 *
 * Return: Always 0 (success)
*/

imt main(void)
{
	char str[] = "-putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		-putchar(str[ch]);
	putchar('\n');
	return (0);
}
