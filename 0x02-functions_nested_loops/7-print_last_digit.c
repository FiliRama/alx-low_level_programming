#include "main.h"
/**
*print_last_digit - Prints the last digit of a number.
*@n: The number in question.
* Return: Value of the last digit.
*/
int print_last_digit(int n)
{
int ones = n % 10;
if (ones < 0)
ones *= -1;
_putchar(ones + '0');
return (ones);
}
