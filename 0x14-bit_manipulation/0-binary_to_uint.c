#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int x;
unsigned int bit = 0;
if (b == NULL)
{
return (0);
}
for (x = 0; b[x] != '\0'; x++)
{
if (b[x] < '0' || b[x] > '1')
{
return (0);
}
bit = 2 * bit + (b[x] - '0');
}
return (bit);
}
