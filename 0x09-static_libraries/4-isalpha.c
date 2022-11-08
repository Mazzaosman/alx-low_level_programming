#include "main.h"
/**
 * _isalpha - checks for char alphapet
 * @c: the char to be checked
 *
 * Return: 1 if is a letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
