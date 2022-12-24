#include "main.h"

/**
 * print_triangle - prints tiangle of squares according to parameter
 * @size: size of the squares tiangle
 * Return: empty
*/

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = size - x; y > 1; y--)
			{
				_putchar(32);
			}
			_putchar('\n');
		}
	}
}
