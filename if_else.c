#include<stdio.h>
int main(){
    int cp,sp,gain_or_loss;
    printf("Enter cost price: ");
    scanf("%d",&cp);
    printf("Enter a selling price: ");
    scanf("%d",&sp);
    if(cp>sp){
        printf("Loss");
    }
    if(sp>cp){
        printf("Profit");
    }
    if(sp==cp){
        printf("The seller has neither made profit nor gain");
    }
    return 0;
}