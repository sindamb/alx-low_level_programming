#include "main.h"
/**
 * print_alphabet_x10  - Aprogram that print lower case letters
 * Return: Always 0 (success)
 */
int print_alphabet_x10(void)
{
	char C;

	for (C = 'a'; C <= 'z'; C++)
	{
		_putchar(C);
	}
	_putchar('\n');
	return (0);
}
