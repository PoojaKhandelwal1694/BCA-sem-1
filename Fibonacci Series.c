#include<stdio.h>
#include<string.h>
void main()

{
    int i, l , c, a = 0, b = 1;
    printf("Enter a limit--");
    scanf("%d",&l);
    for( i = 1; i <= l; i++){
        if( i <= 1){
            printf("%d  ",i);
        }
        else{
            c = a + b;
            printf("%d  ",c);
            a = b;
            b = c;
        }

    }
}

