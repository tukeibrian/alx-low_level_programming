#include "main.h"

/**
 * _isdigit - Writes a function that chevk for a digit (0 through 9)
 * @c: character to check
 * Return: 0 or 1
*/

int_isdigit(int c);
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
