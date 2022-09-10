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
	int i;
	int j;

	for (i = 1;  i < 90; i++)
	{
		for (j = 0; j < 90; j++)
		{
			if (j > i)
			{
				putchar((i / 10) + '0');
				putchar((j % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 89)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
