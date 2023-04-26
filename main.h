#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>


/* strings */

int _putchar(char c);
int _puts(char *s);
int string_to_int(char c);
int limiter(const char *s, int *i);
int print_pers(char pers);


int print_int(int n);
int print_str(char *s, int s_flag);


int print_pointer(void *ptr);
void print_oct(int n);
int print_bin(unsigned long int n, char base);



int _printf(const char *format, ...);
int helper(char c, va_list args, int count);
int print_binary(unsigned int n);
int print_unsd(unsigned int n);
int _strlen(char *s);

#endif
