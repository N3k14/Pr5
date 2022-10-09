#include <stdio.h>
#include <stdlib.h>
#include "fun.h"
void func()
{
    int mas[42];
    for (int i = 0; i < 42; i++)
    {
        mas[i] = rand()%100-50;
        printf("%d ", mas[i]);
    }
    int cou = 0;
    for (int i = 0; i < 42; i++)
        if (mas[i]<0)
            cou++;
    printf("\ncount of negative elements: %d", cou);
}