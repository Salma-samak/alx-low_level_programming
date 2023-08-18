#include "main.h"

/**
 * main - print number 1 - 100 followed by new line
 * numbers that are miltiples of 3 prin fizz
 * numbers that are miltiples of 3 prin buzz
 * numbers that are miltiples of 3  and 5prin fizzbuzz
 * ech number and word to be separated by space
 *
 * Return: Always 0
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 != 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0 && !(num % 3 != 0)
				printf("BUZZ");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else if (num == 1)
			printf("%d", num);
		else
			printf(" %d", num);
	}
	printf("\n");
	return (0);
}
