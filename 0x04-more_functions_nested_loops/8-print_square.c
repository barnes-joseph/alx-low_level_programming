#include "main.h"
/**
 * print_square -  function that draws a
 * square on the terminal
 *
 * @size: number of times character should be printed
 */
void print_square(int size)
{
int i;
int j;
if (size <= 0)
{
size = 0;
_putchar('\n');
}
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
