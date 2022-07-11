#include "main.h"

/**
 * _puts - _puts function
 * @str: char pointer str
 * Description: Prints out a string followed by new line
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
