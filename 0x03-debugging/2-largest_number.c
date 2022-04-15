#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;
int numbers[3] = {a, b, c};

for (int i = 0; i < 3; i++)
{
if (i = 0)
{
largest = numbers[i];
}
else
{
if (numbers[i] > largest)
{
largest = numbers[i];
}
}
}

return (largest);
}
