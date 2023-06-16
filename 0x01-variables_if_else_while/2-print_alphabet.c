#include <stdio.h>
/**
 * main - I play what I call the alphabet game
 * Return: always (succes)
 *
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
