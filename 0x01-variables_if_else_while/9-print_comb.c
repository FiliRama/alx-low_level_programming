#include<stdio.h>

/**
* main -  execution starts at this function
*
* Return: 0- Success
*/
int main(void)
{
int num = 48;
while (1)
{
putchar(num++);
if (num == 58)
break;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
