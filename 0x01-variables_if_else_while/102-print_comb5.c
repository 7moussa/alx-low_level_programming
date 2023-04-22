#include <stdio.h>

/**
*main - Prints all possible different combinations of two two-digits numbers.
*
*Return: Always 0 (Success)
*/
int main(void)
{
int i, m;
for (i = 0; i < 100 ; i++)
{
for (m = 0; m < 100 ; m++)
{
if (i < m)
{
putchar((i / 10) + 48);
putchar((i % 10) + 48);
putchar(' ');
putchar((m / 10) + 48);
putchar((m % 10) + 48);
if (i != 98 || m != 99)
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

