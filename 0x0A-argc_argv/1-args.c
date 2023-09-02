#include <stdio.h>

/**
 * main - print number of argument passed.
 * @argc:input
 * @argv: pointer to an array of command line argument
 *
 * Return: 0 - success, non zero - fail
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
