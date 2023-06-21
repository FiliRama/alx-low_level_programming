#include <stdio.h>
/**
* main - Prints the sum of even-valued Fibonacci sequence
* terms not exceeding 4000000.
**
Return: Always 0.
*/

int main(void)
{
int i;
unsigned long int fibonacci[50];

fibonacci[0] = 1;
fibonacci[1] = 2;
unsigned int sum;
sum = fibonacci[1];

for (i = 2; i < 50; i++)
{
fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
if (fibonacci[i] > 4000000)
break;
if (fibonacci[i] % 2 == 0)
sum += fibonacci[i];
}
printf("%lu\n",sum);
return (0);
}
