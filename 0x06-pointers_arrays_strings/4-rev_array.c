#include "main.h"

/**
 * reverse_array - Reverse an array of integers
 * @a: array
 * @n: numbers of elements of the array
 * Return: reverse
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
