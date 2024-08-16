#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    int m,n,x,y,z,p,s,t;
    char st1[]="1000-Reet kamlay";
    char st2[]="Reet kamlay-11024";
    char st3[]="-100-Reet kamlay";
    char* pendstr_st1;
    char* pendstr_st2;
    char* pendstr_st3;
    printf("The original string st1 is:%s\n",st1);
    m=strtol(st1,&pendstr_st1,2);
    printf("The string st1 with base 2 is:%d\n",m);
    n=strtol(st3,&pendstr_st3,20);
    printf("The string st3 with base 20 is:%d\n",n);
    printf("The remainder of the string st1 is:%s\n",pendstr_st1);
    printf("The remainder of the string st3 is:%s\n",pendstr_st3);
    x=strtoul(st1,&pendstr_st1,10);
    printf("The string st1 to base 10 is:%d\n",x);
    p=strtoul(st2,&pendstr_st2,10);
    printf("The string st2 to base 10 is:%d\n",p);
    printf("The remaining part of the string st2 is:%s\n",pendstr_st2);
    s=strtoul(st1,&pendstr_st1,36);
    printf("The string st1 to base 36 is:%d\n",s);
    y=strtod(st1,&pendstr_st1);
    printf("The string st1 in strtod()is:%d\n",y);
    t=strtod(st3,&pendstr_st3);
    printf("The string st3 in strtod()is:%d\n",t);
    z=strtod(st2,&pendstr_st2);
    printf("The string st2 in strtod()is:%d\n",z);
}