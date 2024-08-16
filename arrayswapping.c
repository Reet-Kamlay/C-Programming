#include<stdio.h>
int main(){
    int arr[5],temp;
    arr[0]=3;
    arr[3]=5;
    temp=arr[3];
    arr[3]=arr[0];
    arr[0]=temp;
    printf("%d %d\n",arr[0],arr[3]);
    return 0;
}
