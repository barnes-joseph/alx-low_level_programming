#include "main.h"
/**
 * print_rev - a function that prints the reverse
 * of a string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
int n = 0;
while (s[n])
n++;

while (n + 1)
{
_putchar(s[n]);
n--;
}
}
