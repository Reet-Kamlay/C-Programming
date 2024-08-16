#include<stdio.h>
int main(){
    int total=0,i,j,k;
    int packages[4]={10,20,30,20};
    double prices[5]={6.7,7.5,5.8,4.9,8.0};
    char letters[4]={'A','B','C','D'};
    printf("The no of toys in the packages:\n");
    for(i=0;i<4;i++){
        printf("packages[%d]=%d\t",i,packages[i]);
    }
    printf("\nThe five prices are given below:\n");
    for(j=0;j<5;j++){
        printf("%.2f\t",prices[j]);
    }
    printf("\nletters[2]=%c\n",letters[2]);
    for(k=0;k<4;k++){
        total+=packages[k];
    }
    printf("The total no of toys is:%d",total);
    return 0;
}