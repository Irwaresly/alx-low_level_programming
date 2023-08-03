#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns the no. of bits you would need to flip
 * @n: 1st no.
 * @m: 2nd no.
 * Return: no of  bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}

