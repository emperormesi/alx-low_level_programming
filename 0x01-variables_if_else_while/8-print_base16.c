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
	int a;
	char mesi;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (mesi = 'a'; mesi <= 'f'; mesi++)
		putchar(mesi);
	putchar('\n');
	return (0);
}
