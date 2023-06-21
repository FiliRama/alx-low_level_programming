#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned long int fibonacci[50];

fibonacci[0] = 1;
fibonacci[1] = 2;
printf("%lu, %lu ", fibonacci[0], fibonacci[1]);

for (i = 2; i < 50; i++)
{
fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
printf(", %lu", fibonacci[i]);
}
printf("\n");
return (0);
}
