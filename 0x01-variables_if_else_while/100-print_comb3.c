#include <stdio.h>

/**
*main - Prints all possible different combinations of two digits.
*
*Return: Always 0 (Success)
*/
int main(void)
{
int i, m;
for (i = 48; i <= 58 ; i++)
{
for (m = 49; m <= 57 ; m++)
{
if (m > i)
{
putchar(i);
putchar(m);
if (i != 56 || m != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
