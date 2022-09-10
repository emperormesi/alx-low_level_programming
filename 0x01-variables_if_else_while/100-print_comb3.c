#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int x;
	int d;
	int e;

	d = x / 10;
	e = x % 10;
	for (x = 1;  x < 90; x++)
	{
		putchar((d) + '0');
		putchar((e) + '0');
		if (d == e)
		{
			putchar('\n');
		}
		if (x != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
