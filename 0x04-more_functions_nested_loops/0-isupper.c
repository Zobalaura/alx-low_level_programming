#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * description: _isupper checks for upper case character
 * Return: 1 if c is uppercase, 0 if otherwise.
 * @c : type int of number
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
