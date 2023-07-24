#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - to allocate memory
* @b: size of the memory
* Return: adress of allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *adress;

	adress = malloc(b);
	if (adress == NULL)
		exit(98);
	return (adress);
}
