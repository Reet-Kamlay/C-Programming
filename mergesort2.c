#include <stdio.h>
void partition(int arr[], int start, int end);
void mergesort(int arr[], int start, int mid, int end);
int main()
{
    int size, i;
    int array[20];
    printf("Enter the value of the size: ");
    scanf("%d", &size);
    printf("Enter the elments of the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    partition(array, 0, size - 1);
    printf("The elemnts of tha array after sorting: ");
    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
}
void partition(int arr[], int start, int end)
{
    int mid;
    if (start < end)
    {
        mid = (start + end) / 2;
        partition(arr, start, mid);
        partition(arr, mid + 1, end);
        mergesort(arr, start, mid, end);
    }
}
void mergesort(int arr[], int start, int mid, int end)
{
    int i, l, j, m, temp[20];
    l = start;
    i = start;
    m = mid + 1;
    while ((l <= mid) && (m <= end))
    {
        if (arr[l] <= arr[m])
        {
            temp[i] = arr[l];
            l++;
        }
        else
        {
            temp[i] = arr[m];
            m++;
        }
        i++;
    }
    if(l>mid){
        for(j=m;j<=end;j++){
            temp[i]=arr[j];
            i++;
        }
    }
    else{
        for(j=l;j<=mid;j++){
            temp[i]=arr[j];
            i++;
        }
    }
    for(j=start;j<=end;j++){
        arr[j]=temp[j];
    }
}