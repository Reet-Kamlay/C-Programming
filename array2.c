#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        printf("%d",arr[i]);
    }
    return 0;
}