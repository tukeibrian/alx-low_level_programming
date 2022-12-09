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
	pintf("size of a char:%lu byte(s)\n", (unsigned long)sizeof(a));
	pintf("size of an int:%lu byte(s)\n", (unsigned long)sizeof(b));
        pintf("size of a long int:%lu byte(s)\n", (unsigned long)sizeof(c));
        pintf("size of a long long int:byte(s)\n", (unsigned long)sizeof(d));
        pintf("size of a float int:byte(s)\n", (unsigned long)sizeof(f));
        return (0);   	 
}
