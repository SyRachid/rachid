#include "main.h"
/**
* 
* print_s-
* 
* @args:
* 
* Return : count;
*/
int print_s(va_list args)
{
    int count = 0, retval, i;
    
    char *str = va_arg(args, char *);
    
    if (!str)
    {
            str = "(null)";
    } 
     
     while (*str)
     {
           retval = _putchar(*str);
           if (retval == -1)
           {
                      return(-1);
           }
           count ++;
           *str++;
     }
     return (count);
}
