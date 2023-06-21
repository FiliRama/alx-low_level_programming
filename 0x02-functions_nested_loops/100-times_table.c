#include "main.h"
/**
*print_times_table - Prints the times table  
*@n: n times to be printed
*/
void print_times_table(int n)
{
int row;
int column;
int result;
if ((n < 16) && (n >= 0))
for (row = 0; row <= n; row++)
{
_putchar('0');
for (column = 1; column <= n ; column++)
{
_putchar(',');
_putchar(' ');
result = row * column;
if ((result > 9) && (result < 100))
{
_putchar(' ');
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
else if (result > 99)
{
_putchar((result / 100) + '0');
_putchar(((result % 100) / 10) + '0');
_putchar((result % 10) + '0');
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(result + '0');
}
}
_putchar('\n');
}
}
