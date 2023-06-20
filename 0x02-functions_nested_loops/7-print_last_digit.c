#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @c: last digit
 * Return: value of the last digit
 */
int print_last_digit(int c)
{
	int ld = c % 10;

	if (ld < 0)
	{
	ld = ld * -1;
	_putchar(ld + '0');
	}
	return (ld);
}

