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

pintf("sizeof char:%lu byte(s)\n", (unsigned long)sizeof(a));
pintf("sizeof int:%lu byte(s)\n", (unsigned long)sizeof(b));
pintf("sizeof long int:%lu byte(s)\n", (unsigned long)sizeof(c));
pintf("sizeof long long int:byte(s)\n", (unsigned long)sizeof(d));
pintf("sizeof float int:byte(s)\n", (unsigned long)sizeof(f));
retturn (0);

