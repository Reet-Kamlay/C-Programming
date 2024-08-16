#include<stdio.h>
int main(){
    int x=0,z;
    printf("x\t\ty\t\tz\n");
    while(x<3){
        int y=0;
        while(y<=3){
            z=x*x*x+2*x*y+y*y*y;
            printf("%d\t\t%d\t\t%d\n",x,y,z);
            y++;
        }
        x++;
    }
    return 0;
}