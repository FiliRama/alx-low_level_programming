
#include<stdio.h>

/**
* main -  execution starts at this function
*
* Return: 0- Success
*/

int main(void)
{
int i;
int j;
for (i=0;i<=99;i++)
for (j=0;j<=99;j++)
if (i < j){
putchar((i / 10) + 48);
putchar((i % 10) + 48);
putchar(' ');
putchar((j / 10) + 48);
putchar((j % 10) + 48);
if (i != 98 || j!= 99){

putchar(',');
putchar(' ');
}
}
putchar('\n');
return 0;
}
