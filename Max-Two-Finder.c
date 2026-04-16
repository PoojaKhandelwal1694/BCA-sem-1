#include<stdio.h>
#include<string.h>
void main()
{
    int arr[10];
    int N = 10, i , m1, m2;
    m1 = m2 = 0;
    printf(" Array Elements are--\n\n");
    for (i = 0; i < N ; i++){
            scanf("%d",&arr[i]);
        printf("%d ",arr[i]);
    }
    printf("\n\n After Calculation--\n\n");
    for(i = 0; i < N; i++){
        if (arr[i] > m1){
            m2 = m1;
            m1 = arr[i];
        }
        else if ( arr[i] > m2 && arr [i] < m1){
            m2 = arr[i];
        }
    }
    printf("First Maximum is --%d\n\n",m1);
    printf("Second Maximum is --%d\n\n",m2);
}
