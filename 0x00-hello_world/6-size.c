#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: always 0
 */
int main(void)
{
	printf("Size of a char: %dbytes\n", sizeof(char));
	printf("Size of an int: %dbytes\n", sizeof(int));
	printf("Size of a long int: %dbytes\n", sizeof(long int));
	printf("Size of a long long int: %dbytes\n", sizeof(long long int));
	printf("Size of a float: %dbytes\n", sizeof(float));
	return (0);
}
