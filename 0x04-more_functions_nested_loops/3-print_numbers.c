#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * @c: char
 * Return: void
 */

void print_numbers(void c)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}


