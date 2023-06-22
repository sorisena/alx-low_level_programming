#include "main.h"

/**
 *print_line - print 0 to 14 10 times
 *@n:input paramater
 * Return: nothing
 *
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
