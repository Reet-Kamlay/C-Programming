#include<stdio.h>
int sqsum(int(*)[4]);
int elementsum(int(*)[4]);
void main(){
    int bill[][4]={1,2,3,4,5,6,7,8};
    printf("Sum of squares of array elements=%d\n",sqsum(bill));
    printf("The sum of the elements of array=%d\n",elementsum(bill));
}
int sqsum(int(*array)[4]){
    int i,j,sqsum=0;
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            sqsum+=array[i][j]*array[i][j];
        }
    }
    return sqsum;
}
int elementsum(int(*array)[4]){
    int m,n,esum=0;
    for(m=0;m<2;m++){
        for(n=0;n<4;n++){
            esum+=array[m][n];
        }
    }
    return esum;
}