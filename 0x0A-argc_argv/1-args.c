#include "man.h"

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */

int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
