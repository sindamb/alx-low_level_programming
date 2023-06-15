#include <stdio.h>
/**
 * main - A program that prints asizes of different types
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of a char: %lu byte(s)\n",(unsigned long)sizeof(a));
printf("size of a char: %lu byte(s)\n",(unsigned long)sizeof(b));
printf("size of a char: %lu byte(s)\n",(unsigned long)sizeof(c));
printf("size of a char: %lu byte(s)\n",(unsigned long)sizeof(d));
printf("size of a char: %lu byte(s)\n",(unsigned long)sizeof(f));
return (0);
}

 
