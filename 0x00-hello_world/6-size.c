#include <stdio.h>
/**
 * main -print the size of data types in C
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("char:%lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("int:%lu byte(s)\n", (unsigned long)sizeof(b));
	printf("long int:%lu byte(s)\n", (unsigned long)sizof(c));
	printf("longlongint:%lu byte(s)\n" (unsigned long)sizeof(d));
	printf("float:%lu byte(s)\n" (unsigned long)sizeof(f));
	return (0);
}




