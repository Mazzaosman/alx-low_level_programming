#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("size of a int: %zu byte(s)\n", sizeof(intType));
	printf("size of a float: %zu byte(s)\n", sizeof(floatType));
	printf("size of a double: %zu byte(s)\n", sizeof(doubleType));
	printf("size of a char: %zu byte(s)\n", sizeof(charType));
	return (0);
}
