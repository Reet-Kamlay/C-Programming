#include<stdio.h>
int main(){
    int m=80;
    int*pm=&m;
    int**ppm=&pm;
    int***pppm=&ppm;
    int i,j,l;
    int k[]={10,20,30,40};
    int a[]={1,2,3,4,5};
    int r[]={11,12,13};
    int*parr[]={k,a,r};
    printf("Adress of elements of parr are as follows: \n");
    printf("parr[0]=%x\tparr[1]=%x\tparr[2]=%x\n",parr[0],parr[1],parr[2]);
    printf("k=%x\ta=%x\tr=%x\n",k,a,r);
    printf("Elements of k are: ");
    for(i=0;i<4;i++){
        printf("%d\t",*(*(parr)+i));
    }
    printf("\n");
    printf("Elements of a are: ");
    for(j=0;j<5;j++){
        printf("%d\t",*(*(parr+1)+j));
    }
    printf("\n");
    printf("Elements of r are: ");
    for(l=0;l<3;l++){
        printf("%d\t",*(*(parr+2)+l));
    }
}