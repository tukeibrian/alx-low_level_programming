#include "main.h"

/**
 * _isdigit - checks of numbers are 0 - 9
 * @c: character to checked
 * Return: 0 or 1
*/

int_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
