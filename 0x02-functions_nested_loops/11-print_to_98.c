#include<stdio.h>
#include "main.h"
/**
*print_to_98 - Prints Integers from input
*@n: The number to begin counting at.
*/
void print_to_98(int n)
{
if (n >= 98)
while (n > 98)
printf("%d, ", n--);
else
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
