#include "main.h"
/**
*times_table -  9 times table, starting with 0.
*/
void times_table(void)
{
int row;
int column;
int result;
for (row = 0; row < 10; row++)
{
_putchar('0');
for (column = 1; column < 10; column++)
{
_putchar(',');
_putchar(' ');
result = row * column;
if (result > 9 )
{
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
else
{
_putchar(' ');
_putchar(result + '0');
}
}
_putchar('\n');
}
}
