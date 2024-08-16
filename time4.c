#include<stdio.h>
#include<time.h>
int main(){
    time_t t1;
    char* wday[]={"Sunday","Monday","Tuesday","Wednesday","Thrusday","friday","Saturday"};
    struct tm stime;
    stime.tm_year=2010-1900;
    stime.tm_mon=8-1;
    stime.tm_hour=21;
    stime.tm_min=41;
    stime.tm_sec=25;
    stime.tm_isdst=1;
    stime.tm_mday=15;
    mktime(&stime);
    printf("The day is:%s\n",wday[stime.tm_wday]);
    printf("%d\n",mktime(&stime));
    time(&t1);
    printf("%u\n",t1);
    return 0;
    

}