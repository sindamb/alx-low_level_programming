#include "main.h"
/**
 * main  - Aprogram that print lower case letters
 * Return: Always 0 (success)
 */
int main(void)
{
	char C;

	for (C = 'a'; C <= 'z'; C++)
	{
		_putchar(C);
	}
	_putchar('\n');
	return (0);
}
