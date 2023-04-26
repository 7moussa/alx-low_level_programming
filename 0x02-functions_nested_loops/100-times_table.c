#include "main.h"
/**
*print_times_table - .
*@c: The number
*Return: Always 0 (Success)
*/
void print_times_table(int c)
{
int n, m, p;
if (c >= 0 &&  c <= 15)
{
for (n = 0; n <= c; n++)
{
_putchar('0');
for (m = 1; m <= c; m++)
{
_putchar(',');
_putchar(' ');
p = n * m;
if (p <= 99)
_putchar(' ');
if (p <= 9)
_putchar(' ');
if (p >= 100)
{
_putchar((p / 100) + '0');
_putchar(((p / 10)) % 10 + '0');
}
else if (p <= 99 && p >= 10)
{
_putchar((p / 10) + '0');
}
_putchar((p % 10) + '0');
}
_putchar('\n');
}
}
}
