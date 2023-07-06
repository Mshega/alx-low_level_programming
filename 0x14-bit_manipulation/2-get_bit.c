#include "main.h"

/**
 * get_bit - returns a value of a bit at an index in a decimal no
 * @n: no to search
 * @index: bit index
 *
 * Return: bit value 
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}
