#include "main.h"

/**
 * _puts - prints a string
 * @str: strng to be printed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
