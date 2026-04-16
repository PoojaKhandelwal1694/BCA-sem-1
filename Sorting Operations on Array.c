#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void main()
{
    int arr[10] = {4,7,1,9,10,2,5,3,6,8};
    int i, j, t;
    char c;
    printf("\n Array Elements Are --\n\n");
    for(i = 0; i < 10; i++){
        printf("%d ",arr[i]);
    }
    printf("\n\nChoose Sorting Option..\n\n");
    printf("1. Selection Sort \n");
    printf("2. Bubble Sort \n");
    printf("3. Exit \n\n");
    printf("\nEnter Your Choice..\n");
    c = getch();
    if ( c == '1'){
        system("cls");
        printf("\n You Choose Selection Sort\n\n");
        for(i =0; i < 10 ; i++){
            for(j = i+1; j< 10;j++){
                if(arr[i] > arr[j]){
                    t = arr[i];
                    arr[i] = arr[j];
                    arr[j]=t;
                }
            }
        }
        printf("\n\n After Sorting--\n\n" );
        for(i = 0; i <10; i++){
            printf("%d ",arr[i]);
        }
    }
    else if (c=='2'){
        system("cls");
        printf("\n  You Choose Bubble Sort--\n\n");
        for(i =0; i < 10 -1; i++){
            for(j = 0; j<10-1;j++){
                if(arr[j]>arr[j+1]){
                    t = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1]=t;
                }
            }
        }
        printf("\n\n After Sorting--\n\n" );
        for(i = 0; i <10; i++){
            printf("%d ",arr[i]);
        }
    }
    else if (c=='3')
        system("cls");
        exit(0);
}

