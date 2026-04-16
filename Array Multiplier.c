#include<stdio.h>
#include<string.h>
void main()
{
    int A[5][5], B[5][5], C[5][5];
    int i , j, k, R1,C1,R2,C2;
    printf("Matrix Multiplication--\n\n");
    printf("Enter Size of Array --(max size 5)--\n\n");
    printf("Enter First Matrix Size--\n");
    printf("Rows--");
    scanf("%d",&R1);
    printf("coloumns--");
    scanf("%d",&C1);
    printf("Enter Second Matrix Size--\n");
    printf("Rows--");
    scanf("%d",&R2);
    printf("coloumns--");
    scanf("%d",&C2);
    if ( C1 ==R2){
        printf("\n Enter First Array Elements--\n\n");
        for(i = 0; i < R1; i++){
            for(j = 0; j < C1; j++){
                scanf("%d",&A[i][j]);
            }
        }
        printf("\n Enter Second Array Elements--\n\n");
        for(i = 0; i < R2; i++){
            for(j = 0; j < C2; j++){
                scanf("%d",&B[i][j]);
            }
        }
        printf("\n  First Array Elements--\n\n");
        for(i = 0; i < R1; i++){
            for(j = 0; j < C1; j++){
                printf("%d ",A[i][j]);
            }
            printf("\n");
        }
        printf("\n Second Array Elements--\n\n");
        for(i = 0; i < R2; i++){
            for(j = 0; j < C2; j++){
                printf("%d ",B[i][j]);
            }
            printf("\n");
        }
        printf("\n After Multiplication Matrix Elements Are--\n\n");
        for(i = 0; i <R1; i++){
            for(j = 0; j < C2; j++){
                C[i][j] = 0;
                for(k = 0; k < C1; k++){
                    C[i][j] = C[i][j] + A[i][k] * B[k][j];
                }
                printf("%d ",C[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("\n You Enter A Invalid Array Size , Please Enter Valid Size");
    }
}
