#include "main.h"
#include <stdio.h>
/**
 * print_array - A function that prints
 * a number of elements in an array
 * @a: Array parameter
 * @n: Number of elements to be printed
 */
void print_array(int *a, int n)
{

int i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i != n - 1)
printf(", ");
i++;
}
printf("\n");
}
