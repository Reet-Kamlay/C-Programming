#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, k, l, n, m;
    int *array;
    printf("Enter the no of elements in the array: ");
    scanf("%d", &n);
    array = (int *)malloc(n * sizeof(int));
    if (array == NULL)
    {
        printf("Malloc function has failed");
        printf("Not enough space");
        exit(0);
    }
    printf("Enter the %d elements of the array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (j = 0; j < n; j++)
    {
        printf("array[%d]=%d\n", j, *(array + j));
    }
    printf("Enter the extended size: ");
    scanf("%d", &m);
    array = realloc(array, m);
    if (array == NULL)
    {
        printf("Realloc function has failed");
        printf("Not enough space");
        exit(0);
    }
    printf("Enter the %d elements of the extended array: ", m - n);
    for (k = n; k < m; k++)
    {
        scanf("%d", &array[k]);
    }
    printf("All the elments of the array: "\n);
    for (l = 0; l < m; l++)
    {
        printf("array[%d]=%d\n",l, *(array + l));
    }
    return 0;
}