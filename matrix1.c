#include<stdio.h>
void read(int mat[4][4]);
int a,b;
int main(){
    int i,j;
    int mat[4][4];
    read(mat);
    for(i=0;i<4;i++){
        printf("Row %d: ",i+1);
        for(j=0;j<4;j++){
            printf("mat[%d][%d]=%d\t",i,j,mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void read(int mat[4][4]){
    for(a=0;a<4;a++){
        printf("Row %d: ",a+1);
        for(b=0;b<4;b++){
            scanf("%d",&mat[a][b]);
        }
    }
}