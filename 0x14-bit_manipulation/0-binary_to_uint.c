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
unsigned int num = 0;
unsigned int base = 1;
int len = 0;
if (b == NULL)
{
return (0);
}
while (b[len] != '\0') 
{
if (b[len] != '0' && b[len] != '1')
{
return (0);
}
len++;
}
for (int i = len - 1; i >= 0; i--) 
{
if (b[i] == '1') 
{
num += base;
}
base *= 2;
}
return (num);
}
