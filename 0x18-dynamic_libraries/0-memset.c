#include "main.h"

/**
 * _memset - memset fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: bytes to fill memory
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*p++ = (unsigned char) b;
	return (s);
}
