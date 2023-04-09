#include "main.h"

/**
 * flip_bits - counts the number of bits
 * to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m;
unsigned int count = 0;

while (diff != 0)
{
count += diff & 1;
diff >>= 1;
}
return (count);
}
