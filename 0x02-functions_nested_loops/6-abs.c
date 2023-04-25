#include "main.h"
/**
*_abs - .
*@n: The number
*Return: Always 0 (Success)
*/
int _abs(int n)
{
if (n < 0)
{
int abs_val;
abs_val = n * -1;
return (abs_val);
}
return (n);
}
