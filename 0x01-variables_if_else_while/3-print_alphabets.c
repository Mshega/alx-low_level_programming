#include <stdio.h> 
/**
 *main - Print the alphabet in lowercase, and then in uppercase
 *Return: 0
 */
int main(void)
{
char c;
char d;
с = 'a';
d = 'A';
while (с <= 'z')
{
putchar(c);
c++;
}
while (d <= 'Z')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
