#include "main.h"

/**
 * _isalpha - _isalpha funtion
 * @c: character to check if alphabet
 * Description: checks letter if it is alphabet
 * Return: 1 if alphabet, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
