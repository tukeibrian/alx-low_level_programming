#include <stdio.h>
/**
 * main -print data types in C
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of a char:%lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int:%lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of along int:%lu byte(s)\n", (unsigned long)sizeof(c));
printf("sizeoflonglong int:%lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float int:%lu byte(s)\n", (unsigned long)sizeof(f)
return (0);
}
