#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
unsigned long int fibonacci_left1;
unsigned long int fibonacci_left2;
unsigned long int fibonacci_left3;
unsigned long int fibonacci_medium1;
unsigned long int fibonacci_medium2;
unsigned long int fibonacci_medium3;
fibonacci_left1 = 1;
fibonacci_left2 = 2;
printf("%lu, %lu ", fibonacci_left1, fibonacci_left2);
for (i = 2; i < 46; i++)
{
fibonacci_left3 = fibonacci_left2 + fibonacci_left1;
fibonacci_left1 = fibonacci_left2;
fibonacci_left2 = fibonacci_left3;
printf(", %lu", fibonacci_left3);
}
fibonacci_medium1 = fibonacci_left1 / 1000000000;
fibonacci_medium2 = fibonacci_left2 / 1000000000;
fibonacci_left2 = fibonacci_left2 % 1000000000;
fibonacci_left1 = fibonacci_left1 % 1000000000;
for (i = 46; i < 49; i++)
{
fibonacci_left3 = fibonacci_left2 + fibonacci_left1;
fibonacci_medium3 = fibonacci_medium2 + fibonacci_medium1;
if (fibonacci_left3 > 1000000000)
{
fibonacci_left3 %= 1000000000;
fibonacci_medium3++;
}
printf(", %lu%lu", fibonacci_medium3, fibonacci_left3);
fibonacci_left1 = fibonacci_left2;
fibonacci_left2 = fibonacci_left3;
fibonacci_medium1 = fibonacci_medium2;
fibonacci_medium2 = fibonacci_medium3;
}
return (0);
}
