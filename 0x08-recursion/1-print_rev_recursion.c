#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: a string
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
