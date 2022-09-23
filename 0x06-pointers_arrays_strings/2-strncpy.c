#include "main.h"
/**
 * _strncpy - copies a string.
 * Description - a function that copies a string.
 * @dest: pointer to a character data type
 * @src: pointer to a character data type
 * @n: pointer to an integer data type
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	for (; a < n; a++)
		dest[a] = '\0';
	return (dest);
}
