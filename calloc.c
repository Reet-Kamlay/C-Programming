#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,j,k,n;
    int*array;
    printf("Enter the no of elements in array: ");
    scanf("%d",&n);
    array=(int*)calloc(n,sizeof(int));
    if(array==(int*)NULL){
        printf("Error.out of memory.");
        exit(0);
    }
    printf("Adress of allocated memory=%u\n",array);
    printf("Enter the values of %d elements:\n",n);
    for(i=0;i<n;i++){
        printf("%d",&array[i]);
    }
    printf("Adress of ist member:%d\n",array);
    printf("Adress of second element:%d\n",array+1);
}