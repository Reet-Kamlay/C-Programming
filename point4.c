#include<stdio.h>
void func1(int[5]);
void func2(int*,size_t);
int func3(int*);
int main(){
    int k;
    int bill[]={10,20,30,40,50};
    int kim[]={2,4,6,8,10};
    printf("The sum of the elements of bill=%d\n",func3(bill));
    func1(kim);
    func2(bill,5);
    for(k=0;k<5;k++){
        printf("Bill[%d]=%d\tkim[%d]=%d\n1",k,bill[k],k,kim[k]);
    }
}
void func1(int array[5]){
    int j;
    for(j=0;j<5;j++){
        array[j]=3*array[j];
    }
}
void func2(int*ptra,size_t n){
    int i;
    for(i=0;i<n;i++){
        ptra[i]*=2;
    }
}
int func3(int*ptra){
    int sum=0,l;
    for(l=0;l<5;l++){
        sum+=ptra[l];
    }
    return sum;
}