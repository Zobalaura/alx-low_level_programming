#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string, in reverse
 * Description - a function that prints a string in revers
 * @s: character data type
 * Return: void
 */
void print_rev(char *s)
{
	int z = 0;

	for (z = 0; s[z] != '\0'; z++)
		;
	for (z--; z >= 0; z--)
		_putchar(s[z]);
	_putchar('\n');
}
