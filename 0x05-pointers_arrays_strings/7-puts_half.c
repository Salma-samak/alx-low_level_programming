#include "main.h"

/**
 * puts_half - print the second half of the string
 *
 * @str:  input
 *
 * Description: if odd print (length -1) / 2
*/

void puts_half(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		;

	n++;
	for (n /= 2; str[n] != '\0'; n++)
	{
		putchar(str[n]);
	}
	putchar('\n');
}
