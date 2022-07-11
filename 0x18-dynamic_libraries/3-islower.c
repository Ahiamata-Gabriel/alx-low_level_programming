#include "main.h"

/**
 * _islower - _islower function
 * @c: char type of letter
 * Description: Checks if character is lowercase
 * Return: 1 if char is lowerchase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
