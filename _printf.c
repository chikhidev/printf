#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


void print(char *str)
{
    while(*str)
    {
        putchar(*str);
        str++;
    }
}

void digit(int d)
{
    char buf[16];
    int i = 0, j = 0;

    // If the digit is negative
    if (d < 0)
    {
        putchar('-');
        d = -d;
    }

    // Convert the integer to a string of decimal digits
    while (d != 0) {
        buf[i++] = (d % 10) + '0';
        d /= 10;
    }

    j = i - 1;
    // Print the digits in the correct order
    while (j >= 0) {
        putchar(buf[j]);
        j--;
    }
}


//hello %d there %d
//      ^
//      67       ii++


int _printf(const char *format, ...)
{
    int i = 0, counter = 0;
    va_list args;
    va_start(args, format);

    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            switch (format[i])
            {
                case 'c':
                    putchar(va_arg(args, int));
                    break;
                case 's':
                    print(va_arg(args, char*));
                    break;
                case 'd':
                    digit(va_arg(args, int));
                    break;
                case 'i':
                    digit(va_arg(args, int));
                    break;
                default:
                    putchar(format[i]);
                    break;
            }
            counter++;
        }
        else
            putchar(format[i]);
            i++;

    }

    va_end(args);

    return i - counter;
}

