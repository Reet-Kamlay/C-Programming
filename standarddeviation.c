#include<stdio.h>
#include<math.h>
int main(){
    int x,y,z,i,j;
    double average=0.0,sum=0,sigma=0.0,v=0;
    float sample[]={12,13,14,16,13,15,13,17,15,18,15,16,21,13,14};
    x=sizeof(float);
    y=sizeof(sample);
    z=y/x;
    for(i=0;i<=z-1;i++){
        sum+=sample[i];
    }
    average=sum/z;
    for(j=0;j<z;j++){
        v+=((sample[j]-average)*(sample[j]-average));
    }
    sigma=sqrt(v/z-1);
    printf("The sum of all numbers in the array is %.3f\n",sum);
    printf("The average of all the numbers in the array is %.3f\n",average);
    printf("The standard deviation of all the numbers in the array is %.3f\n",sigma);
    return 0;
}