#include "main.h"
/**
* _printf-
*
* @format:
*
* Return: integer
*/
int _printf(const char *format, ...)
{
    
    va_list args;
    va_start(args, format);
    int (*printer)(va_list) = NULL;
    int count = 0;
    while (*format)
    {
          if (*format == '%' && *(format + 1) != NULL)
          {
                      format++;
                      printer = get_print(format);
                       if (*(format) == '\0')
                       {
                                     return(-1);
                       }
                       else if (printer == NULL)
                       {
                           _putchar(*(format - 1));
				           _putchar(*format);
				           count += 2;
                        }
                        else
				count += printer(args);
            }
            
		format++;
	}
	va_end(args);
	return (count);
}
                            
