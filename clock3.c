#include<stdio.h>
#include<time.h>
int main(){
    int dsum,i=0,j=0;
    int sum,a=6,n=100000000;
    clock_t time1,time2,time3,time4;
    time1=clock();
    printf("Time at starting is:%lf\n",(double)(time1)/(double)(CLOCKS_PER_SEC));
    printf("Clocks_per_sec:%d\n",CLOCKS_PER_SEC);
    for(i=0;i<n;i++){
        dsum+=1;
    }
    time2=clock();
    printf("Time taken for 1st loop:%lf\n",(double)(time2-time1)/(double)(CLOCKS_PER_SEC));
    time3=clock();
    for(j=0;j<a;j++){
        sum+=1;
    }
    time4=clock();
    printf("Time taken for 2nd loop:%lf\n",(double)(time4-time3)/(double)(CLOCKS_PER_SEC));
    return 0;
}