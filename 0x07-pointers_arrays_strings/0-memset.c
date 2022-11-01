#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: a string
 * @b: a character
 * @n: an integer
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		a[s] = b;
	return (s);
}
