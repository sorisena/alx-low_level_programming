#include <stdio.h>
#include <math.h>
/**
 * main - print largest prime of given number
 * Return: 0 success
 */
int main(void)
{
	long x, mfc;
	long num = 612852475143;
	double square = sqrt(num);

	for (x = 1; x <= square; x++)
	{
		if (num % x == 0)
		{
			mfc = num / x;
		}
	}
	printf("%ld\n", mfc);
	return (0);
}
