#include "main.h"
/**
 * print_alphabet -a function that prints the alphabe
 * Return: alphabet in lower case letters
 */
void print_alphabet(void)
{
char i;

for (i = 97 ; i <= 122 ; i++)
{
_putchar(i);
_putchar('\n');
}
return (0);
}
