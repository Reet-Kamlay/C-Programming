#include<stdio.h>
void main(){
    int i;
    int ar[]={2,3,4,5},br[4],cr[4];
    int*parray=ar;
    for(i=0;i<4;i++){
        br[i]=*(parray+i)**(parray+i);
        cr[i]=*(parray+i)**(parray+i)**(parray+i);
        printf("ar[%d]=%d\t\tbr[%d]=%d\t\tcr[%d]=%d",i,ar[i],i,br[i],i,cr[i]);
        printf("\n");
    }
}