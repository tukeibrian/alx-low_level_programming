#include <stdio.h>
#include "main.h"

/**
* print_to_98 -prints all natural numbers from input to 98,
*              in order separated by acomma followed by a space.
* @n:the starting number
*/
void print _to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
