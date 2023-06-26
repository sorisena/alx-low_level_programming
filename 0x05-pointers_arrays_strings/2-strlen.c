#include "main.h"
/**
 * _strlen - function use to give length of string
 * @s: string
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;
while (*s != '\0')
{
	i++;
	s++;
}
return (i);
}
