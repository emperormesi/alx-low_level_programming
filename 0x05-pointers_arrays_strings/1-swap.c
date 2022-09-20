#include "main.h"

/*
 * swap - a function that swaps two integers
 * @a: input 1
 * @b: input 2
 * Return: integers
 */
void swap(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
