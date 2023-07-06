#include "main.h"

/**
 * flip_bits - count the no of bits to change
 * to get from one no to another
 * @n: first no
 * @m: second no
 *
 * Return: no of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, counter = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		current = exclusive >> x;
		if (current & 1)
			counter++;
	}

	return (counter);
}
