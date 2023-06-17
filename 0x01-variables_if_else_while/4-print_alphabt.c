#include<stdio.h>

/**
* main -  execution starts at this function
*
* Return: 0- Success
*/
int main()
{
int smallCharASCII = 'a';

while(smallCharASCII <= 'z')
{
if((smallCharASCII != 'q') && (smallCharASCII != 'e'))
putchar(smallCharASCII);
smallCharASCII++;
}
putchar('\n');
return (0);
}
