#include "main.h"
/**
 * _strspn - returns the number of bytes in the initial segment of s
 * @s: string to get segment
 * @accept: pointer of only acceptable bytes
 * Return: int number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int counter;

	while (*s)
	{
		for (counter = 0; accept[counter]; counter++)
		{
			if (*s == accept[counter])
			{
				n++;
				break;
			}
			else if (accept[counter + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
