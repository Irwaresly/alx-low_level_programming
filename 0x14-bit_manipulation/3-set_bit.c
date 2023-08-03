#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index
 * @n: decimal no passed by pointer
 * @index :index position to change starting from 0
 * Return: 1 for success and -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (1);

	for (P = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}


