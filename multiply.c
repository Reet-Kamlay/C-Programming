#include <stdio.h>
int main()
{
    int i, j, k, l, m1, n1, m2, n2, q, r,t;
    printf("Enter the values of m1 and n1: ");
    scanf("%d %d", &m1, &n1);
    int a[m1][n1];

    printf("Enter the value of the elements of the matrix 1: \n");
    for (i = 0; i < m1; i++)
    {
        printf("Row %d:", i + 1);
        for (j = 0; j < n1; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the values of m2 and n2: ");
    scanf("%d %d", &m2, &n2);
    int b[m2][n2];
    printf("Enter the value of the elements of the matrix 2: \n");
    for (k = 0; k < m2; k++)
    {
        printf("Row %d:", k + 1);
        for (l = 0; l < n2; l++)
        {
            scanf("%d", &b[k][l]);
        }
        printf("\n");
    }
    if (n1 == m2)
    {
        int c[n1][m2];
        for (q = 0; q < n1; q++)
        {
            printf("Row %d:", q + 1);
            for (r = 0; r < m2; r++)
            {
                c[q][r]=0;
                for(t=0;t<m2;t++){
                    c[q][r]+= a[q][t] * b[t][r];
                    printf("%d ", c[q][r]);
                }
                
            }
            printf("\n");
        }
    }
    else
    {
        printf("The multiplication is not possible.");
    }
}