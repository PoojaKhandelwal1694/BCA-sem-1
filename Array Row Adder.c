#include<stdio.h>
#include<string.h>
void main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int i, j, s = 0;
    printf("Array Elements are --\n\n");
    for( i = 0; i< 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n Sum Of Array Elements Are--\n\n");
    for( i = 0; i < 3; i++){
        for(j = 0, s = 0; j < 3; j++){
            s = s + arr[i][j];
            printf("%d ",arr[i][j]);
        }
        printf("= %d\n",s);
    }
}
