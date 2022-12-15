#include<stdio.h>

/**
 * main - causes an infinite loop 
 * Rerutn: 0
 */

int main(void)
{
	int i;

	printf("infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putcher(i);
	}

	print("infinite loop avoided! \\o/\n");

	return (0);
}
