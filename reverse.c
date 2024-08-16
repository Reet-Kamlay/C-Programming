#include<stdio.h>
int main(){
    int arr[]={1,2,3},i,size;
    size=sizeof(arr)/sizeof(arr[0]);
    printf("The size is:%d\n",size);
    for(i=size-1;i>=0;i--){
        printf("%d",arr[i]);
    }
}