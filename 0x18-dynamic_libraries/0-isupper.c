#include "main.h"

/**
 * _isupper - _isupper function
 * @c: Character to be evaluated
 * Description: Checks character if its upper case
 * Return: 1 if characer is uppercase, 0 when otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
