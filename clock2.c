#include<stdio.h>
#include<time.h>
int main(){
    double dsum,x=1.2;
    int sum;
    int i,n=10000000,a=2;
    clock_t time1,time2,time3,time4;
    time1=clock();
    printf("Starting time:%lf\n",(double)time1/(double)CLOCKS_PER_SEC);
    printf("Clockspersecond:%d\n",CLOCKS_PER_SEC);
    for(i=0;i<n;i++){
        sum+=1;
    }
    time2=clock();
    printf("Time taken for 1st loop:%lfsec\n",(double)(time2-time1)/(double)CLOCKS_PER_SEC);
    time3=clock();
    for(i=0;i<n;i++){
        dsum+=i;
    }
    time4=clock();
    printf("Time taken for 2nd loop:%lfsec\n",(double)(time4-time3)/(double)CLOCKS_PER_SEC);
    return 0;
}