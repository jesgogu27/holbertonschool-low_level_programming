#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - prints a name.
 *@name: char.
 *@f: function.
 */

void print_name(char *name, void (*f)(char *))
{

if ((name == NULL) && (f == NULL))
{
;
}
else
{
f(name);
}
}
