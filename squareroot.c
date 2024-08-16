#include<stdio.h>
#include<math.h>
int main(){
    int x=7,y,j,k,n;
    double Y;
    for(j=0;j<8;j++){
        Y=(sqrt(x));
        y=(int)(10*Y);
        printf("x=%d|",x);
        for(k=50-y;k<50;k++){
            printf("-*");
        }
        printf("%.3f\n",Y);
        x=x-1;
    }
    for(n=0;n<50;n++){
        printf("_");
    }
    printf("\n");
    printf("\t\t\ty\t\t\t");
    printf("\n");
}