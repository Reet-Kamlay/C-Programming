#include<stdio.h>
int main(){
    int a[2][3][4]={{1,2,3,4,10,11,12,13,20,21,22,23},{30,31,32,33,40,41,42,43,50,51,52,53}};
    int (*pa) [3][4]=a;
    int i,j,k;
    for(i=0;i<2;i++){
        printf("\nThe elements of a[%d][j][k] are given below:\n",i);
        for(j=0;j<3;j++){
            for(k=0;k<4;k++){
                printf("%d\t",*(*(*(pa+i)+j)+k));
            }
            printf("\n");
        }
    }
}