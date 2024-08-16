#include<stdio.h>
#include<stdlib.h>
int main(){
    int rows,columns,i,j,k,m,n,a,b;
    int**pmatrix;
    printf("Enter the no of rows: ");
    scanf("%d",&rows);
    printf("Enter the no of columns: ");
    scanf("%d",&columns);
    pmatrix=malloc(rows*sizeof(int));
    if(pmatrix==NULL){
        printf("Not enough memory space");
        exit(0);
    }
    for(i=0;i<rows;i++){
        pmatrix[i]=malloc(columns*sizeof(int));
    }
    printf("Enter the elements of %dX%d matrix: ",rows,columns);
    for(j=0;j<rows;j++){
        for(k=0;k<columns;k++){
            scanf("%d",&pmatrix[j][k]);
        }
    }
    for(m=0;m<rows;m++){
        for(n=0;n<columns;n++){
            printf("pmatrix[%d][%d]=%d\t",m,n,pmatrix[m][n]);
        }
        printf("\n");
    }
    for(a=0;a<rows;a++){
        for(b=0;b<columns;b++){
            printf("%d\t",pmatrix[a][b]);
        }
        printf("\n");
    }
}
