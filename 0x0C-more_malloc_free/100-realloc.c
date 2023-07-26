#include "main.h"
#include <stdlib.h>

/**
 * _realloc - to reallocate memory
 * @ptr: pointer to previously allocated memory
 * @old_size: size in bytes
 * @new_size: new size in bytes
 * Return: pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p1;
char *p2;
unsigned int j;

if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));
p1 = malloc(new_size);
if (!p1)
return (NULL);
p2 = ptr;
if (new_size < old_size)
{
for (j = 0; j < new_size; j++)
p1[j] = p2[j];
}
if (new_size > old_size)
{
for (j = 0; j < old_size; j++)
p1[j] = p2[j];
}
free(ptr);
return (p1);
}
