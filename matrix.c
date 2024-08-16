#include<stdio.h>
void read(int mat[5][5]);
int k,m;
int main(){
    int i,j;
    int mat[5][5];
    read(mat);
    for(i=0;i<5;i++){
        printf("Row %d:",i+1);
        for(j=0;j<5;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void read(int mat[5][5]){
    for(k=0;k<5;k++){
        printf("Row %d:",k+1);
        for(m=0;m<5;m++){
            scanf("%d",&mat[k][m]);
        }
    }
}
