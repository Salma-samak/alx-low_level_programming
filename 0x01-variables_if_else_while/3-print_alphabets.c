#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all alphabet in lowercase and in uppercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a', CH = 'A';

	while (ch <= 'z', CH <= 'Z')
	{
		putchar(ch);
		putchar(CH);
		ch++;
	}

	putchar("\n");
	return (0);
}

