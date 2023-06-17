#include<stdio.h>

/**
* main -  execution starts at this function
*
* Return: 0- Success
*/
int main()
{
int smallChar = 'z';
 while(smallChar > '`')
     putchar(smallChar--);
 putchar('\n');
return (0);
}
