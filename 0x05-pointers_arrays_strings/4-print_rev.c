#include "main.h"
/**
 * print_rev - inverse string
 * @s:input string
 *
 *
 */
void print_rev(char *s)
{
	int i = 0;
	int x;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (x = i; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
