#include "main.h"
/**
 * print_rev - a function that prints the reverse
 * of a string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
int n = _strlen(s);

while (n)
{
_putchar(s[n]);
n--;
}
}
