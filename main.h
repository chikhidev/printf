#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>


int _putchar(char c);
int _puts(char *s);
int string_to_int(char c);
int limiter(const char *s, int *i);
int print_int(int n);
int print_str(char *s, int limit);
void print_bin(int n);
void print_oct(int n);
void print_hex(int n);
void print_HEX(int n);
int _printf(const char *format, ...);
int helper(char c, va_list args, int count);
int print_binary(unsigned int n);
int print_unsd(unsigned int n);
int _strlen(char *s);

#endif
