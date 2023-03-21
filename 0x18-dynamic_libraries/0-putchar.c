#include "main.h"
#include <stdio.h>
#include <unistd.h> // for the write() function

/**
 * _putchar - Function to write to stdout
 * @c: character to write
 * Return: Always 0
 */

int _putchar(char c)
{
    if (write(STDOUT_FILENO, &c, 1) != 1)
    { // write the character to stdout using write(), checking for errors
        return EOF; // return EOF to indicate failure if an error occurred
    }
    return (unsigned char) c;
    // return the character as an unsigned char cast to an int to indicate success
}
