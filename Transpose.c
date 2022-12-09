#include <stdio.h>
int main(){
    int Row , Coloumn ;
    printf("Enter Row Number Kindly : ");
    scanf("%d",&Row);
    printf("Enter Coloumn Number Kindly : ");
    scanf("%d",&Coloumn);
    printf("\n");
    int Real_Matrix[10][10] , Transpose_Matrix[10][10];
    for(int i=0;i<Row;i++){
        for(int k=0;k<Coloumn;k++){
            printf("Row [%d] Coloumn [%d] = ", i,k);
            scanf("%d",&Real_Matrix[i][k]);
        }
    }
    for(int i=0;i<Row;i++){
        for(int k=0;k<Coloumn;k++){
            Transpose_Matrix[i][k] = Real_Matrix[k][i];
        }
    }
    printf("\n");
    for(int i=0;i<Row;i++){
        for(int k=0;k<Coloumn;k++){
            printf("%d ",Transpose_Matrix[k][i]);
        }
        printf("\n");
    }
    return 0;
}