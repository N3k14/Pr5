#include <stdio.h>
#include <stdlib.h>
#include "fun.h"

void func()
{
    int mat[6][9];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 9; j++)
	{
            mat[i][j] = rand()%100-50;
	    printf("%d ", mat[i][j]);
	}
        printf("\n");
    }	
    int cou = 0;
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 9; j++)
            if (mat[i][j]<0)
                cou++;
    printf("count of negative elements: %d", cou);
}