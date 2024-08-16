#include<stdio.h>
#include<string.h>
int main(){
    int i,j,k,n;
    char* name[5]={"John","Mukharjee","Suresh","Zeenat","Akriti"};
    for(k=0;k<5;k++){
        printf("%s\n",name[k]);
    }
    for(j=0;j<4;j++){
        for(i=0;i<4;i++){
            if(strcmp(name[i],name[i+1])>0){
                char* temp=name[i];
                name[i]=name[i+1];
                name[i+1]=temp;
                
            }
        }
    }
    printf("The sorted list of names: ");
    for(n=0;n<5;n++){
        printf("%s\n",name[n]);
    }
    return 0;
}