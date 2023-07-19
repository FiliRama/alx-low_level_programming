#include "function_pointers.h"
/**
* print_name - to print name
* @name: input name
* @f: function pointer to print name
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
