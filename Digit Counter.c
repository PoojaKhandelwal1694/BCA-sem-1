#include<stdio.h>
void main()
{
    int a;
    printf("Enter a Number-- ");
    scanf("%d",&a);
    if (a >=0 && a <=9){
        printf("One Digit Number\n");
    }
    else if (a >=10 && a <=99){
        printf("Two Digit Number\n");
    }
    else if (a >=100 && a <=999){
        printf("Three Digit Number\n");
    }
    else{
        printf("Wrong Input");
    }
}
