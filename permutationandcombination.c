#include<stdio.h>
int main(){
    int n,r,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);
    int nfact=1;
    int rfact=1;
    int nrfact=1;
    for(i=2;i<=n;i=i+1){
        nfact=nfact*i;
    }
    for(i=2;i<=r;i=i+1){
        rfact=rfact*i;
    }
    for(i=2;i<=n-r;i=i+1){
        nrfact=nrfact*i;
    }
    int ncr=nfact/(rfact*nrfact);
    printf("%d",ncr);
    return 0;
}