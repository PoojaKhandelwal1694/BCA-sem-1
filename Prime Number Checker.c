#include<stdio.h>
void main()
{
    int n, i = 2, c = 0;
    printf("Enter a number--");
    scanf("%d",&n);
    while (i <= n){
        if (n % i == 0)
            c++;
        i++;
    }
    if (c ==1){
        printf("%d is a prime number\n\n",n);
    }
    else{
      printf("%d is a not prime number\n\n",n);
    }
}

