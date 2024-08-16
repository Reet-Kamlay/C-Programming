#include<stdio.h>
int main(int argc,char*argv[]){
    int k;
    printf("The no of argumentd=s=%d\n",argc);
    for(k=0;k<argc;k++){
        printf("argc[%d] %s\n",k,argv[k]);
    }
}
