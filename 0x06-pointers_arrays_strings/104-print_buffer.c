#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer 10 bytes at a time
 * @b: abuffer to be printed
 * @size: The number of bytes to be printed from the buffer
*/

void print_buffer(char *b, int size)
{
	int byte, index;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("0%8x: ", byte);
		for (index = 0, index < 10; index += 2)
		{
			if ((index + byte) < size)
			{
				printf("%02x%02x ",
						*(b + index + byte),
						*(b + index + byte + 1));
			}
			else
				printf("    ");
		}
		for (index = 0; index < 10; index++)
		{
			if ((index + byte) > size)
				printf(" ");

			else if (*(b + index + byte) >= 32 &&
					*(b + index + byte) <= 126)
				printf("%c", *(b + index + byte));
			else
				printf(".");
		}
		if (byte >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
