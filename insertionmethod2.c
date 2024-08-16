#include<stdio.h>
int main(){
    int m,n,a,k,size,i;
    printf("enter the value of size: ");
    scanf("%d",&size);
    int array[size];
    for(i=0;i<size;i++){
        printf("Enter the value of %d element: ",i);
        scanf("%d",&array[i]);
    }
    for(n=0;n<size;n++){
        a=array[n];
        for(m=n-1;m>=0 && array[m]>a;){
            array[m+1]=array[m];
            m--;
        }
        array[m+1]=a;
        for(k=0;k<size;k++){
            printf("%d\t",array[k]);
        }
        printf("\n");
    }
    
}