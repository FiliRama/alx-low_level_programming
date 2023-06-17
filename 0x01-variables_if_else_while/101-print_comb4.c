#include<stdio.h>

/**
* main -  execution starts at this function
*
* Return: 0- Success
*/


int main()
{
int k = '0';
int j = '0';
int i ='0';
for (i = '0';i <= '9';i++)
for (j = '0';j <= '9';j++)
for (k ='0';k <= '9';k++)
if (!((k == j) || (j > k) || (i == j) || (i > j))){
putchar(i);
putchar(j);
putchar(k);
if (!(k == '9' && j == '8' && i == '7')){
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);

}
