#include <stdio.h>

/**
 * main - prints the alphapet in lowercase
 * followed by anew line , except q and e
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
		 putchar(la);
	}

		 putchar('\n');

		 return (0);
}

