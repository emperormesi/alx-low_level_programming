#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char f;

	for (f = 'z'; f >= 'a'; f--)
		putchar(f);
	putchar('\n');
	return (0);
}
