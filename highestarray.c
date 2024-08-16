#include<stdio.h>
int main(){
    int i,arr[5]={5,10,2,5,7},min=arr[0];
    for(i=0;i<5;i++){
        if(arr[i]>min){
        }
        else{
            min=arr[i];
        }
    }
    printf("%d",min);
}