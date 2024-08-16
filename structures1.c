#include<stdio.h>
struct students{
	char name[30];
	int roll_no;
	float marks;
};
void main(){
	struct students s[5];
	for(int i=0;i<5;i++){
		printf("Enter your name: ");
		gets(s[i].name);
		scanf("Enter your roll no:%d",&s[i].roll_no);
		scanf("Enter your marks:%f",&s[i].marks);
	}
	for(int j=0;j<5;j++){
		printf("The name of the student is: ");
		puts(s[i].name);
		printf("The roll no of the student is:%d",s[i].roll_no);
		scanf("the marks of the student is:%f",s[i].marks);
	}
}