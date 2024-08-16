#include<stdio.h>
struct health_data{
    int age_years;
    int height_cm;
    float weight_kg;
};
void main(){
    struct health_data s1={10,170,40.25};
    struct health_data s2={20,150,50.25};
    struct health_data s3={30,120,60.25};
    printf("Age of s1:%d\n",s1.age_years);
    printf("Height of s2:%d\n",s2.height_cm);
    printf("Weight of s3:%f\n",s3.weight_kg);
}