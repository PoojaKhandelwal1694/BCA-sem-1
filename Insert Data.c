#include<stdio.h>
#include<string.h>
void main()
{
    int arr [11];
    int i , data = 100, N = 10, p = 6;
    printf(" Array Elements are--\n\n");
    for (i = 0; i < N ; i++){
            scanf("%d",&arr[i]);
        printf("%d ",arr[i]);
    }
    for( i = N; i > p; i--)
        arr[i]  = arr[i-1];
    arr[p] = data;
    N = N+1;
     printf("\n\nAfter Insert A New Element, Array Elements are--\n\n");
    for( i = 0; i < N; i++){
        printf("%d ",arr[i]);
    }

}
