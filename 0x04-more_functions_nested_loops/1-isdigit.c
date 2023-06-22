#include "main.h"

/**
 *_isdigit - check a digit 0 through 9.
 *@x:input parameter
 * Return: 1 for upper case and 0 for lower case.
 */

int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
