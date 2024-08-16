#include<stdio.h>
void swap(int*px,int*py){
    int temp;
    temp=*px;
    *px=*py;
    *py=temp;
}
void main(){
    int i,j,k;
    int bill[]={45,40,78,69,55,12,5,2};
    int*pbill=bill;
    for(i=0;i<7;i++){
        for(j=0;j<7-i;j++){
            if(*(pbill+j)>*(pbill+j+1)){
                swap((pbill+j),(pbill+j+1));
            }
        }
    }
    for(k=0;k<7;k++){
        printf("%d\t",*(pbill+k));
    }
}