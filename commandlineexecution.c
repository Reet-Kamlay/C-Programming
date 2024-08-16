#include<stdio.h>
int main(int argc,char*argv[]){
    int k;
    printf("The no of arguments=%d\n",argc);
    for(k=0;k<argc;k++){
        printf("argc[%d] %s\n",k,argv[k]);
    }
}