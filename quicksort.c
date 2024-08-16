#include<stdio.h>
void Qsort(int [20],int,int);
int main(){
    int i;
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    Qsort(arr,0,size-1);
    printf("The elements of the sorted array: ");
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
    }
}
void Qsort(int arr[20],int firstindex,int lastindex){
    int temp,pivot,left,right;
    if(firstindex<lastindex){
        pivot=firstindex;
        left=firstindex;
        right=lastindex;
        while(left<right){
        while(arr[left]<=arr[pivot] && left<lastindex){
            left++;
        }
        while(arr[right]>arr[pivot]){
            right++;
        }
        if(left<right){
            temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            }
        }
        temp=arr[pivot];
        arr[pivot]=arr[right];
        arr[right]=temp;
        Qsort(arr,firstindex,right-1);
        Qsort(arr,right+1,lastindex);
    }
}