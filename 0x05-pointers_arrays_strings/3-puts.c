#include "main.h"
#include <stdio.h>
/**
 * _puts -  prints a string, followed by a new line
 * Description - prints string
 * @str: character data type
 * Return: void
 */
void _puts(char *str)
{
	int z;

	for (z = 0; *(str + z) != '\0'; z++)
		_putchar(*(str + z));
	_putchar('\n');
}
