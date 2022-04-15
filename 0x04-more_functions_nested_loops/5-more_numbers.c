#include "main.h"
/**
 * more_numbers - A function that prints
 * from 0 to 14 ten times
 *
 */
void more_numbers(void)
{
int number = 48;
int iterations = 0;
while (iterations < 10)
{
for (number = 0; number <= 14; number++)
{
if (number > 9)
{
_putchar('0' + 1);
}
_putchar('0' + number % 10);
}
_putchar('\n');
iterations++;
}
}
