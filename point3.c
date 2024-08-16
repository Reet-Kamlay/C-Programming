#include<stdio.h>
void main(){
    int i,j,k;
    int array[2][3]={2,3,4,5,6,7};
    int(*parray)[3]=array;
    int bray[4]={10,11,12,13};
    int*pbray=bray;
    for(i=0;i<4;i++){
        printf("pbray[%d]=%d\t\n",i,*(pbray+i));
    }
    for(j=0;j<2;j++){
        for(k=0;k<3;k++){
            printf("array[%d][%d]=%d",j,k,*(*(array+j)+k));
            printf("\tparray[%d][%d]=%d\n",j,k,*(*(parray+j)+k));
        }
    }
}