#include<stdio.h>
void main(){
    int n=30;
    int*nptr=&n;
    float y=10.9,*fptr=&y;
    void*pv;
    pv=nptr;
    printf("%d\n",*(int*)pv);
    pv=fptr;
    printf("%f",*(float*)pv);
}