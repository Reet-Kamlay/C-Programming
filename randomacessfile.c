#include<stdio.h>
struct student{
    int id;
    char name[30];
    int grade;
};
int main(){
    int i,n;
    int record;
    struct student st;
    FILE*pstd;
    pstd=fopen("myfile","wb+");
    printf("Enter the no of student records:");
    scanf("%d",&n);
    printf("Enter the details of %d records:\n",n);
    for(i=0;i<n;i++){
        printf("Enter the id:");
        scanf("%d",&st.id);
        printf("Enter the name of the student:");
        scanf("%s",&st.name);
        printf("Enter the grade of the student:");
        scanf("%d",&st.grade);
        fwrite(&st,sizeof(st),1,pstd);
    }
    while(1){
        label:
        printf("Enter the record between 1 and %d:",n);
        scanf("%d",&record);
        if(record<1 || record>n){
        printf("Enter the record correctly");
        goto label;}
        else{
            fseek(pstd,(record-1)*sizeof(st),0);
            fread(&st,sizeof(st),1,pstd);
            printf("Id of student:%d\nName of student:%s\nGrade=%d\n",st.id,st.name,st.grade);

        }
    }
fclose(pstd);
return 0;

}