#include<stdio.h>
int main(){
    int i,j,k,m,n,o,a,b,c;
    printf("Enter the value of m,n and o: ");
    scanf("%d %d %d",&m,&n,&o);
    int array[m][n][o];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            for(k=0;k<o;k++){
                scanf("%d",&array[i][j][k]);
            }
        }
    }
    for(a=0;a<m;a++){
        for(b=0;b<n;b++){
            for(c=0;c<o;c++){
                printf("%d\t",array[a][b][c]);
            }
            printf("\n");
        }
    }
    return 0;
}