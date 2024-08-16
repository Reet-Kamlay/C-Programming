#include<stdio.h>
void swap(int*x,int*y){
    int temp=*y;
    *y=*x;
    *x=temp;

}
int main(){
    int i,j;
    int kim[4]={1,2,3,4};
    int tom[4]={21,22,23,24};
    for(i=0;i<4;i++){
        swap(&kim[i],&tom[i]);
        printf("kim[%d]=%d\t",i,kim[i]);
    }
    printf("\n");
    for(j=0;j<4;j++){
        printf("tom[%d]=%d\t",j,tom[j]);
    }
    return 0;
}