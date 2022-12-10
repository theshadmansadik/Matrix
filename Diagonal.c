#include <stdio.h>
int main(){
    int Diagonal_Matrix[10][10],Summation_1=0,Summation_2=0;
    for(int i=0;i<3;i++){
        for(int p=0;p<3;p++){
            printf("Diagonal_Matrix Row [%d] Coloumn [%d] : ", i,p);
            scanf("%d",&Diagonal_Matrix[i][p]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++){
        for(int p=0;p<3;p++){
            if(i<p){
                Summation_1 = Summation_1 + Diagonal_Matrix[i][p];
            }if(i>p){
                Summation_2 = Summation_2 + Diagonal_Matrix[i][p];
            }
        }
    }
    printf("Upper Diagonal Number Summation : %d \n", Summation_1);
    printf("Lower Diagonal Number Summation : %d \n", Summation_2);
    return 0;
}