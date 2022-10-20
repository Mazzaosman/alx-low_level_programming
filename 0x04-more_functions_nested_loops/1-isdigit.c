#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: int to check
 * Return: 1 or 0
 */

int _isdigit(int c);
{
	if (c >= 1 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
