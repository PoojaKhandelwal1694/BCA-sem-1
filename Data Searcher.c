#include<stdio.h>
#include<string.h>
void main()
{
    int i , N = 10, C = 0 , data = 54;
    int arr [10] = {3,4,2,1,7,6,8,55,9,18};
    printf(" Array Elements are--\n\n");
    for ( i = 0; i < N; i++){
        printf("%d ",arr[i]);
    }
        printf("\n\n After Searching-- \n\n");
        for ( i = 0; i <= N; i++){
            if (arr[i] == data){
                printf(" Data Found ..%d\n\n", data);
                C = 1;
                break;

            }
        }
        if (C==0)
         printf(" Data Not Found ..\n\n");
    }

