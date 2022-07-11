#include "main.h"

/**
 * _strchr - returns the pointer to the first occurrence of the character
 * @s: string in which to find character
 * @c: character to find
 * Return: char pointer if true of 0 if false
 */

char *_strchr(char *s, char c)
{
	int count = 0;

	for (; s[count] >= '\0'; count++)
	{
		if (s[count] == c)
			return (&s[count]);
	}
	return (0);
}
