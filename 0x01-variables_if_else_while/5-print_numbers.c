#include <stdio.h>

/**
 * main - Entry poit
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	for (int n = 0; n <= 9 ; n++)
	{
		printf("%i", n);
		printf('\n');
	}
	return (0);
}
