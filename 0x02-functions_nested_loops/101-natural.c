#include <stdio.h>
#include <sdtlib.h>
/**
 * main -  list all the natural numbers below 10
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int sum = 0;

	while (c < 100)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sum += c;
		}
		c++;
	}
	printf("%i\n", sum);
	return (0);
}
