#include "main.h"

/**
 * reverse_array - reverse array
 * @a: array
 * @n: numbers of elements of the array
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[j];
		a[i] = a[n];
		a[n] = j;
	}
}
