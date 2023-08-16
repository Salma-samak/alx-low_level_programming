#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always0 (sccess)
*/

int main(void)
{
	int count;

	unsigned long feb1 = 0, feb2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = feb1 + feb2;
		printf("%lu", sum);

		feb1 = feb2;
		feb2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
