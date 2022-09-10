#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- print last digit of a number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = num % 10;
	printf("Last Digit of %d is: %d", n)
		if (digit>5)
		{
			printf("%d and is greater than 5", digit);
		}
		else if (digit!=0 && digit<6)
		{
			printf("%d and is less than 6 and not zero", digit);
		}
		else
		{
			printf("%d and 
