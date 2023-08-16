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

	unsigned long feb1 = 0, feb2 = 1;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
