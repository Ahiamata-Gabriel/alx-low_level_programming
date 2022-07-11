#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 * in the haystack.
 * @haystack: string to search
 * @needle: particular string to look for
 * Return: pointer to begining of string or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
