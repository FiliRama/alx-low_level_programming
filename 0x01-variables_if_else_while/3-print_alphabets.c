#include<stdio.h>

/**
* main -  execution starts at this function
*
* Return: 0- Success
*/
int main()
{
int smallCharASCII = 'a';
int capitalCharASCII = 'A';

while(smallCharASCII <= 'z')
{
putchar(smallCharASCII);
smallCharASCII++;
}

while(capitalCharASCII <= 'Z')
{
putchar(capitalCharASCII++);
}
putchar('\n');
return (0);
}
