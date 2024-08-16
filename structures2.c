#include<stdio.h>
struct grades{
    char name[30];
    char roll_num[12];
    float grade;
    int rank;
};
void main(){
    struct grades s1={"Reet Kamlay","2009phys112",89.56,12};
    struct grades s2,s3;
    printf("Enter the details of s2: ");
    scanf("%s %s %f %d",&s2.name,&s2.roll_num,&s2.grade,&s2.rank);
    printf("Enter the details of s3: ");
    scanf("%s %s %f %d",&s3.name,&s3.roll_num,&s3.grade,&s3.rank);
    printf("Name\tRoll_no\tGrade\tRank\n");
    printf("%s\t%s\t%f\t%d\n",s1.name,s1.roll_num,s1.grade,s1.rank);
    printf("%s\t%s\t%f\t%d\n",s2.name,s2.roll_num,s2.grade,s2.rank);
    printf("%s\t%s\t%f\t%d\n",s3.name,s3.roll_num,s3.grade,s3.rank);
}