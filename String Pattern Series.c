#include<stdio.h>
#include<string.h>
void main()
{
    char str [10];
    char t [10];
    printf("Enter A String--");
    scanf("%s",&str);
    int i , j , x;
    for(i = 0; i < strlen(str); i++){
        for(j = i, x =0 ; j < strlen(str); j++){
            t[x++] = str[j];
            t[x] = '\0';
            printf("%s ",t);
        }
    }
}
