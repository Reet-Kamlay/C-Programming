#include<stdio.h>
int main(){
    int x=5,y,j,k,n;
    for(j=0;j<6;j++){
        y=x*x;
        printf("x=%d|",x);
        for(k=50-y;k<50;k++){
            printf("-*");
        }
        printf("%d\n",y);
        x=x-1;
    }
    
    
    for(n=0;n<50;n++){
        printf("_");
    }
    printf("\n");
    printf("\t\t\ty\t\t\t");
    printf("\n");
    return 0;
    
}