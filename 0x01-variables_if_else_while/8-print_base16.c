#include<stdio.h>

/**
* main -  execution starts at this function
*
* Return: 0- Success
*/
int main()
{

int smallChar= 'a';
int num = 48;
 while(num < 58)
     putchar(num++);
 while(smallChar < 'g')
     putchar(smallChar++);
 putchar('\n');
return (0);
}
