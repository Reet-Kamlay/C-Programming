  #include<stdio.h>
  int main(){
    int i,j,n,first;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        first=1;
        for(j=0;j<=i;j++){
            printf("%d",first);
            first=first*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
  }