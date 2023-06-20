#include "main.h"
/**
 *_islower - check for lower case character
 * @c: The character to be checked
 *_islower: is a function
 * Return: 1 for lower case character or 0 for any thing else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
