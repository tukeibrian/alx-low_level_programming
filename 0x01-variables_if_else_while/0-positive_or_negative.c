#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -prints if the number is positive,negative or 0
 * Return: 0
*/

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX | 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	elise if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	elise
	{
		printf("%d id negative\n", n);
	}
	return (0);
}

