#include "main.h"
#include <stdio.h>
/**
 * main-print fizz buzz
 * Return:Always 0.
 *
 */
int main(void)
{
	int x = 1;

	while (x < 101)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("%s", "fizzbuzz");
		}
		else if (x % 3 == 0)
		{
			printf("%s", "fizz");
		}
		else if (x % 5 == 0)
		{
			printf("%s", "buzz");
		}
		else
		{
			printf("%d", x);
		}
		if (x != 100)
		{
			printf(" ");
		}
		x++;
	}
	printf("\n");
	return (0);
}
