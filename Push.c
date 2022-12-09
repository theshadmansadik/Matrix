#include <stdio.h>
int main(){
    int Matrix_1[3][4] , Matrix_2[3][4] , Sum_Matrix[3][4];
    for(int i=0;i<3;i++){
        for(int p=0;p<4;p++){
            printf("Matrix_1 Row [%d] Coloumn [%d] = " , i,p);
            scanf("%d",&Matrix_1[i][p]);
        }
    }
    printf("\n");
    for(int i=0;i<3;i++){
        for(int p=0;p<4;p++){
            printf("Matrix_2 Row [%d] Coloumn [%d] = " , i,p);
            scanf("%d",&Matrix_2[i][p]);
        }
    }
    printf("\n");
    for(int i=0;i<3;i++){
        for(int p=0;p<4;p++){
            Sum_Matrix[i][p] = Matrix_1[i][p] + Matrix_2[i][p];
        }
    }
    printf("\n");
    for(int i=0;i<3;i++){
        for(int p=0;p<4;p++){
            printf("%d ",Sum_Matrix[i][p]);
        }
        printf("\n");
    }
    return 0;
}