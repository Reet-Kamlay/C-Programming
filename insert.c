#include<stdio.h>
int main(){
    int i,j,size,num,position;
    int array[5]={1,3,4,7,8};
    printf("Enter the value to insert it in the array: ");
    scanf("%d",&num);
    printf("Enter the value of position:");
    scanf("%d",&position);
    for(i=5;i<position;i--){
        array[i]=array[i-1];
    }
    array[position-1]=num;
    size++;
    for(j=0;j<5;j++){
        printf("%d\n",array[j]);
    }
    return 0;
}