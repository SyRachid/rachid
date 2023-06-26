#include "main.h"
/**
 * print_c-
 * 
 *@args: va_list
 *
 *Return: count
 */
 int print_c(va_list args)
 {
     int c;
     int count = 0, retval;
     
     c = va_arg(args, int);
     retval = _putchar(c);
     if (retval == -1)
     {
                return(-1);
     }
     else
     {
         count++;
         return (count);
     }
 }
