#include "main.h"
/**
 * print_line - A function that
 * prints a line with its length equal
 * to the integer
 * @n: int type number
 */
void print_diagonal(int n)
{
int total_space = 0;
if (n <= 0)
{
n = 0;
_putchar('\n');
}
else
{
while (total_space != (n-1))
_putchar(' ');
total_space++;
}
_putchar(92);
_putchar('\n');
}
