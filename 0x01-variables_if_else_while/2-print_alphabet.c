#include<stdio.h>

/**
* main -  execution starts at this function
*
* Return: 0- Success
*/
int main(void)
{
int char_ASCII = 'a';
while (char_ASCII <= 'z'){
    putchar(char_ASCII);
    char_ASCII++;
}
putchar('\n');
return (0);
}
