#include "main.h"

/**
 * main - Entry point
 *
 * Description: that finds and prints the sum of the even-valued terms
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	unsigned long fib1, fib2, sum;
	float totalsum;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum >  4000000)
			break;
		if ((sum % 2) == 0)
			totalsum += sum

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", totasum);

	return (0);
}
