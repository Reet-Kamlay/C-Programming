#include<Stdio.h>
struct AR{
    int array[5];
};
void main(){
  struct AR a1,b1;
  printf("Enter the elements of the array: ");
  for(int i=0;i<5;i++){
    scanf("%d",&a1.array[i]);
  }
  b1=a1;
  printf("The elements of the array are: ");
  for(int j=0;j<5;j++){
    printf("%d",b1.array[j]);
  }  
}