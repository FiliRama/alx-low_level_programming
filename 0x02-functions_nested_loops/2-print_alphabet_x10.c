#include "main.h"
/**
* print_alphabet_x10 - function to print alphabet
*
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
}
