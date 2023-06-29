#include "main.h"
/**
* reverse_array - to reverse the array
* @a: input array
* @n: size of array
*/
void reverse_array(int *a, int n)
{
	int i,temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
