#include "main.h"

/**
 * _strchr - string character
<<<<<<< HEAD
 * @s: string given
 * @c: another character
 * Return: a strng
=======
 * @c: another character
 * @s: a string
 * Return: a string
>>>>>>> 9ad0a5ea187bde42fbfc58c87af083fabfb962df
 */

char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
		a++;
	for (b = 0; b < a; b++)
	{
		if (c == s[b])
			s += b;
<<<<<<< HEAD
			return (s);
=======
		return (s);
>>>>>>> 9ad0a5ea187bde42fbfc58c87af083fabfb962df
	}
	return ('\0');
}
