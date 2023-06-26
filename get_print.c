#include <stdio.h>
#include "main.h"
/**
* get_print-
* 
* @format:
*
* Return:
*/

int (*get_print(const char *format))(va_list)
{
    int i;
    type_t formatage [] =
    {{"s", print_s},
     {"c", print_c},
     {NULL, NULL}};
      
    
           for ( i = 0; i < 3; i++)
           {
               if (*format == formatage[i].identifier)
               {
                           return (formatage[i].print);
                           break;
               } 
               
              
           }
      return (NULL);
}
     
