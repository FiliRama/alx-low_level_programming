#include "main.h"
/**
* print_alphabet - function to print alphabet
*
* Return: 0
*/
void print_alphabet_x10(void)
{
char alphabet;
int i;
for (i = 1; i < 11; i++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
_putchar(alphabet);
_putchar('\n');
}
return (0);
}