#include<stdio.h>
int main(){
    int n,m,a,k;
    int array[10]={10,7,4,9,1,3,5,6,8,2};
    for(n=0;n<10;n++){
        a=array[n];
        for(m=n-1;m>=0 && array[m]>a;){
            array[m+1]=array[m];
            m--;
        }
        array[m+1]=a;
        for(k=0;k<10;k++){
            printf("%d\t",array[k]);
        }
        printf("\n");
    }
}