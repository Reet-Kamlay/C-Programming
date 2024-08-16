#include<stdio.h>
#include<stdlib.h>
void main(){
    int*array;
    size_t size;
    printf("Enter the size: ");
    scanf("%d",&size);
    array=(int*)malloc(sizeof(int));
    printf("Enter the elements of the array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    for(int k=0;k<size;k++){
        printf("%d\n",*(array+k));
    }
    free(array);
    for(int j=0;j<size;j++){
        printf("%d\n",*(array+j));
    }
}