#include "main.h"
/**
 * main - check for lower case character
 * Return: 1 for lower case character or 0 for any thing else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
