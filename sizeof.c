#include<stdio.h>
int main(){
    int array[5];
    double average; 
    int i,j,k,size,sum=0;
    for(i=0;i<5;i++){
        printf("Enter the %d element for the array:",i);
        scanf("%d",&array[i]);
    }
    size=sizeof(array)/sizeof(int);
    printf("The size is:%d\n",size);
    for(j=0;j<size;j++){
        printf("array[%d]=%d\n",j,array[j]);
    }
    for(k=0;k<size;k++){
        sum+=array[k];
    }
    printf("The sum of all array elements is:%d\n",sum);
    average=(double)sum/size;
    printf("The average of the numbers:%f",average);
    return 0;
    
}