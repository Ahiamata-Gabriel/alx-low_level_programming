#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string
 * s of any of the bytes inthe string
 * @s: string to search byte inside
 * @accept: accepted byte to search string
 * Return: pointer to the byte s
 */

char *_strpbrk(char *s, char *accept)
{
	int count;

	while (*s)
	{
		for (count = 0; accept[count]; count++)
		{
			if (*s == accept[count])
				return (s);
		}
		s++;
	}
	return ('\0');
}
