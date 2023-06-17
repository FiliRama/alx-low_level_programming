#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
* main -  execution starts at this function
*
* Return: 0- Success
*/
int main()
{
    int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if(n > 0)
  printf("%d is positive number\n", n);
else if(n < 0)
  printf("%d is negative number\n", n);
else
  printf("%d is zero", n);
return (0);

}
