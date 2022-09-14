#include "main.h"
/**
 * print_times_table - Entry point
 * @n: input
 * Return: Always 0 (Success)
 *
 */
void print_times_table(int n)
{
	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				prod = num * mult;

				if (prod <= 99)
				{
					_putchar(prod / 100);
					_putchar((prod / 10) % 10);
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar(prod / 10);
				}
				_putchar(prod % 10);
			}
			_putchar('\n');
		}
	}
}
