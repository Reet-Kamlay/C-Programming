#include<stdio.h>
void main(){
    int n=30;
    int*ptrn=&n;
    float y=10.7,*ptry=&y;
    void*pv;
    pv=ptrn;
    printf("*(int*)pv=%d\n",*(int*)pv);
    pv=ptry;
    printf("*(float*)pv=%f\n",*(float*)pv);
}