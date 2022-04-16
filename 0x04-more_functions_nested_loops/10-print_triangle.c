#include "main.h"
/**
 * print_square -  function that draws a
 * triangle on the terminal
 *
 * @size: number of times character should be printed
 */
void print_triangle(int size)
{
int column;
int spaces = size - 1;
if (size <= 0)
{
_putchar('\n');
size = 0;
}
for (column = 0; column < size; column++)
{
int total_spaces = spaces;
int total_characters = size - spaces;
while (spaces--)
_putchar(' ');
while (total_characters--)
_putchar(35);
spaces = total_spaces - 1;
_putchar('\n');
}
}
