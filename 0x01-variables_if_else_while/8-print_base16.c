#include <stdio.h>
/**
 * main - A program that prints all the numbers of base 16 in lowercase
 * Retur: 0
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		ch++;
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
