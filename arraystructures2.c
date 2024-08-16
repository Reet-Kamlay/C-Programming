#include<stdio.h>
struct faculty{
    char name[30];
    int age;
    char designation[25];
    int pay;
};
void main(){
    int total_pay=0;
    int i,j;
    struct faculty arf[4]={"Dr.R.Reddy",30,"lectaurer",25000},{"Dr.Reshma",25,"lecturar",20000},{"Dr.Priti",35,"Assist.professor",30000},{"Dr.Rama Rao",27,"lecturer",24000}};
    printf("Individial pay of faculty is as follows:\n");
    for(i=0;i<4;i++){
        printf("%s\t%d\n",arf[i].name,arf[i].pay);
    }
    for(j=0;j<4;j++){
        total_pay+=arf[j].pay;
    }
    printf("Total Pay\t%d",total_pay);
}