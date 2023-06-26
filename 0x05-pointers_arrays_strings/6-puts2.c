#include "main.h"
/**
 * puts2 - print one solely character
 * @str: input character
 *
 *
 *
 *
 */
void puts2(char *str)
{
	int i;
	int t = 0;
	char *y = str;
	int m;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	t = i - 1;
	for (m = 0; m <= t; m++)
	{
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
	}
	_putchar('\n');
}
