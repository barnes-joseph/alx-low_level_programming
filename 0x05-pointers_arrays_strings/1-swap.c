#include "main.h"
/**
 * swap_int - Swaps the values of the parameters
 * @a: pointer to variable a
 * @b: pointer to variable b
 */
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
