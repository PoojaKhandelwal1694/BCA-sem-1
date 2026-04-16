#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    int n ,i , m;
    char bin[20];
    printf("Enter A Decimal Number -- ");
    scanf("%d",&n);
    printf("Binary Of Given Number %d is --",n);
    for(i = 0; n > 0; n = n / 2 , i++){
        bin[i] = (n % 2) + 48;
    }
        bin[i] = '\0';
        strrev(bin);
        printf(" %s \n\n",bin);
}

