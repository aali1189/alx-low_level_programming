#ifndef H_MAIN
#define H_MAIN

#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int Char(va_list c);
int String(va_list s);
int Integer(va_list i);
int Decimal(va_list d);
int Reverse(va_list r);
int Binary(va_list b);
int Unsigned(va_list u);
int Octal(va_list o);
int Rot13(va_list R);

/**
  * struct code_format - Struct format
  *
  * @sc: The specifiers
  * @f: The function associated
  */

typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

#endif
