#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1if true, -1 if false
 */
int set_bit(unsigned long int *n, unsigned int index)
{
const unsigned int MAX_INDEX = 63;
if (index > MAX_INDEX)
{
return (-1);
}
unsigned long int mask = 1UL << index;
*n |= mask;
return (1);
}
