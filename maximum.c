#include<stdio.h>
#define n 11
int main(){
    int i,j,k,m,min,max;
    int array[n];
    for(i=0;i<n;i++){
        printf("Enter the value of %d element: ",i);
        scanf("%d",&array[i]);
    }
    max=array[0];
    for(j=0;j<n;j++){
        if(array[j]>max){
            max=array[j];
        }
        else{
            max=max;
        }
    }
    min=array[0];
    for(k=0;k<n;k++){
        if(array[k]<min){
            min=array[k];
        }
        else{
            min=min;
        }
    }
    printf("The maximum value of the array is:%d\n",max);
    printf("The minimum value of the array is:%d",min);
    return 0;
}