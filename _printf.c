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



//hello %d there %d
//      ^
//      67       ii++

int _printf(const char *format, ...)
{
    int i = 0;
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
                default:
                    putchar(format[i]);
                    break;
            }
        }
        else
            putchar(format[i]);
        i++;
    }

    va_end(args);

    return i;
}

