#include<stdio.h>
struct vector{
    int x;
    int y;
    int z;
};
void display(struct vector v){
    printf("x-component=%d\ty-component=%d\tz-component=%d\n",v.x,v.y,v.z);
}
void main(){
    struct vector v1={3,4,5};
    struct vector v2={5,6,7};
    struct vector v3=v2;
    printf("components of v2 are:\n");
    display(v2);
    printf("Components of v3 are:\n");
    display(v3);
}