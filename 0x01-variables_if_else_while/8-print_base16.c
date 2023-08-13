#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n = 0;

	while (n <= 15)
	{
		putchar(n + '0' + '65');
		n++;
	}
	putchar('\n');
	return (0);
}
