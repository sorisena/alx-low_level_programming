#include "main.h"
/**
 * _puts - print the string using _putchar
 * @str:string
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}