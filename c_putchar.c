#include <unistd.h>
#include "main.h"

/**
 * c_puthcar - custom puthcar uses write
 * @c - character given
 * Return: nothing
 */


void c_putchar(char c) {
    /* put the character on the screen or terminal */
    write(1, &c, 1);
}
