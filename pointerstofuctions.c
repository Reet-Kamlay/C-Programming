#include<stdio.h>
int function(int(*)(int,int),int,int,int);
int perimeter(int,int);
int surface_area(int,int);
void main(){
    int k=6,m=5,j=4;
    printf("Surface area and perimeter of rectangle:\n");
    printf("perimeter*4=%d\n",function(perimeter,k,m,j));
    printf("surface_area*4=%d\n",function(surface_area,k,m,j));
}
int function(int(*pf)(int i,int n),int k,int m,int j){
    return j*(*pf)(k,m);
}
int perimeter(int a,int b){
    return 2*(a+b);
}
int surface_area(int c,int d){
    return c*d;
}