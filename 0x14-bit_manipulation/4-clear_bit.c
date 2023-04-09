#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number
 * @index: index of the bit to limpid
 *
 * Return: 1 if true, -1 if false
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	const unsigned int max_index = 63;

	if (index > max_index)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
