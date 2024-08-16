#include<stdio.h>
int main(){
    int marks[5];
    for(int i=0;i<5;i++){
        printf("Enter the marks for %d: ",i);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++){
        if(marks[i]<35){
            printf("%d",i);
        }
    }
    return 0;
}