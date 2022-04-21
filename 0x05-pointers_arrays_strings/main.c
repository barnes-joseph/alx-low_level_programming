#include <stdio.h>
#include "main.h"

int main()
{
    int x = 5;
    int *n = &x;
    reset_to_98(n);
    printf("%d",x);
    return (0);    
}