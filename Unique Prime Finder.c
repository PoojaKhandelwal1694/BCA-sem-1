#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
void main()
{
    int arr[10];
    int i, j, N = 10, check;
    retry:
    system("cls");
    printf("Enter 10 Elements of Array --");
    for (i = 0; i < N; i++){
        scanf("%d",&arr[i]);
        printf("%d  ",arr[i]);
    }
    for (i = 1, check = arr[0]; i < N; i++){
        for (j = i; j < N; j++){
            if (arr[j] == check) {
                printf("There are repeated elements in array, Please try again..");
                goto retry;
            }
        }
        check = arr[i];
    }
    printf("\n\nAll prime numbers in the array are -- ");
    for (i = 0; i < N; i++){
        if (arr[i] <= 1)
            continue;
        for (j = 2; arr[i] % j != 0; j++);
        if (j == arr[i]){
         printf("%d ", arr[i]);
        }
    }
}

