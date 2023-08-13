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
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar("\n");
	return (0);
}

