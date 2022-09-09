#include <stdio.h>
/**
 * main - Print the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}

	return (0);
}
