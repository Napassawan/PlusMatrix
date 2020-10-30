#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int A[3][3]; 
    int B[3][3]; 
    int C[3][3];

    int row, col;

    printf("Enter number in matrix A of size 3x3: \n");
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            scanf_s("%d", &A[row][col]);
        }
    }
    printf("\nEnter number in matrix B of size 3x3: \n");
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            scanf_s("%d", &B[row][col]);
        }
    }
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            C[row][col] = A[row][col] + B[row][col];
        }
    }
    printf("\nmatrices A+B = \n");
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }

    return 0;
}