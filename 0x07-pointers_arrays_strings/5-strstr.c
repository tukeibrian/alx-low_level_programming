#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = hhaystack;
		pneedle = needle;

		while (*haystack != '\0 && *needle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
