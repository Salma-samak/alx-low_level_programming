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
	char ch = A;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}

	while (ch <= 'F')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
