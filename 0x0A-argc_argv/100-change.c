#include <stdio.h>
#include <stdlib.h>

/***/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, leastcants = 0, mony = atio(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

