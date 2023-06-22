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

	while (x <= 100)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("fizzbuzz");
		}
		else if (x % 3 == 0)
		{
			printf("fizz");
		}
		else if (x % 5 == 0)
		{
			printf("buzz");
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
