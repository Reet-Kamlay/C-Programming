#include<stdio.h>
int main(){
    int i,j,m,n,u,v,p,q,r,s,k,l;
    printf("Enter the values of m and n: ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    int b[m][n];
    int c[m][n];
    int d[m][n];
    printf("Enter the value of the elements of the matrix 1: \n");
    for(i=0;i<m;i++){
        printf("Row %d:",i+1);
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the value of the elements of the matrix 2: \n");
    for(k=0;k<m;k++){
        printf("Row %d:",k+1);
        for(l=0;l<n;l++){
            scanf("%d",&b[k][l]);
        }
    }
    for(u=0;u<m;u++){
        for(v=0;v<n;v++){
            c[u][v]=a[u][v]+b[u][v];
            d[u][v]=a[u][v]-b[u][v];
        }
    }
    printf("The matrix 1 is shown here:\n");
    for(p=0;p<m;p++){
        for(q=0;q<n;q++){
            printf("%d\t",c[p][q]);
        }
        printf("\n");
    }
    printf("\n");
    printf("The matrix 2 is shown here:\n");
    for(r=0;r<m;r++){
        for(s=0;s<n;s++){
            printf("%d\t",d[r][s]);
        }
        printf("\n");
    }
    return 0;
}