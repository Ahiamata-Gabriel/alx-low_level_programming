#include "main.h"

/**
 * _isdigit - isdigit function
 * @c: c integer to check
 * Description: Checks a digit to be between 0-9
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
