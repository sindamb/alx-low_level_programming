#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @c: last digit
 * Return: value of the last digit
 */
int print_last_digit(int c)
{
	int ld = c % 10;

	if (c >= 0 && c <= 0)
	{
	ld *= -1;
	_putchar(ld + '0');
	}
	return (0);
}

