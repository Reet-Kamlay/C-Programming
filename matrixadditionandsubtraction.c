#include<stdio.h>
int main(){
    int n,m,i,j,k,l,p,q,r,s;
    printf("Enter the value of rows and columns: ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    int b[m][n];
    int c[m][n];
    int d[m][n];
    printf("Enter the elements of the first matrix:\n");
    for(i=0;i<m;i++){
        printf("Row %d:",i+1);
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for(k=0;k<m;k++){
        printf("Row %d:",k+1);
        for(l=0;l<n;l++){
            scanf("%d",&b[k][l]);
        }
    }
    for(p=0;p<m;p++){
        printf("Row %d:",p+1);
        for(q=0;q<n;q++){
            c[p][q]=a[p][q]+b[p][q];
            printf("%d\t\t",c[p][q]);            
        }
        printf("\n");
    }
    for(r=0;r<m;r++){
        printf("Row %d:",r+1);
        for(s=0;s<n;s++){
            d[r][s]=a[r][s]-b[r][s];
            printf("%d\t\t",d[r][s]);      
        }
        printf("\n");
    }

}