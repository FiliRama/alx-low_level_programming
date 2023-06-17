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
int remainder;
remainder = n%10;
if(remainder > 5)
    printf("Last digit of %d is %d and is greater than 5\n",n ,remainder);
else if(remainder == 0)
   printf("Last digit of %%d is %d and is 0\n",n ,remainder);
else
   printf("Last digit of %%d is %d and is less than 6 and not zero\n",n ,remainder);
return (0);

}
