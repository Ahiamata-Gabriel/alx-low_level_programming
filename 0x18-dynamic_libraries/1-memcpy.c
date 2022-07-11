#include "main.h"
#include <stddef.h>
/**
 * _memcpy - copies n bytes from memory area of src
 * to memory area dest
 * @dest: destination pointer
 * @src: source memory
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pDest = (char *)dest;
	char *pSrc = (char *)src;

	if ((pDest != NULL) && (pSrc != NULL))
	{
		while (n)
		{
			*(pDest++) = *(pSrc++);
			--n;
		}
	}
	return (dest);
}
