#include <stdio.h>

/**
 * main - entry point
 *
 * description: Add one line to this code,
 * so that the program prints a[2] = 98,
 * followed by a new line
 *
 * Return: 0
*/

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 10;
	p = &n;

	*(p + 5) = 98;

	printf("a[2]= %d\n", a[2]);
	return (0);
}
