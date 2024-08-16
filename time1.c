#include<stdio.h>
#include<time.h>
int main(){
    time_t time1;
    time1=time(&time1);
    printf("time=%u",time1);
    return 0;
}