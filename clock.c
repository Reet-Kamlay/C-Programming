#include<stdio.h>
#include<time.h>
int main(){
    double dsum,x=1.2;
    int sum;
    int i,n=10000000,a=2;
    clock_t time1,time2,time3,time4;
    time1=clock();
    printf("Time at starting is:%lf\n",(double)time1/(double)CLOCKS_PER_SEC);
    printf("clockspersecond:%d\n",CLOCKS_PER_SEC);
    for(i=0;i<n;i++){
        sum+=1;
    }
    time2=clock();
    printf("time taken for loop 1:%lf\n",(double)(time2-time1)/(double)CLOCKS_PER_SEC);
    time3=clock();
    for(i=0;i<n;i++){
        sum+=i;
    }
    time4=clock();
    printf("Time taken for loop 2:%lf\n",(double)(time4-time3)/(double)CLOCKS_PER_SEC);
    return 0;
}