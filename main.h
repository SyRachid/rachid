#ifndef MAIN
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct type - connect conversion specifiers with the correct print function
 * @print: a function pointer for the print functions
 * @identifier: the conversion specifier
 */
typedef struct type
{
	char *identifier;
	int (*print)(va_list);
} type_t;

int _putchar(char c);
int (*get_print(const char *specifier))(va_list);
int _printf(const char *, ...);
int print_s(va_list args);
int print_c(va_list args);

#endif /* HOLBERTON_H */
