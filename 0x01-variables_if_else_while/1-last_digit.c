#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The last digit
 *
 *Description:This program will assign a number to the variable
 *
 * Return: 0 success
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is", n);
	num = n % 10;
	if (num > 5)
	{
	printf("%d and is greater than 5\n", num);
	}
	else if ((num < 5) && (num < 0))
	{
		printf("%d and is less than 6 and not 0\n", num);
	}
	else
	{
		printf("%d and is 0\n", num);
	}
	return (0);
}
