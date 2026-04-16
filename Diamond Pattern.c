#include<stdio.h>
#include<string.h>
void main()
{
    int i, j, N=5, x=1, s=N;
    for(i=1; i<=N+N-1; i++){
        printf("%*c",s, ' ');
        for(j=1; j<=x; j++){
            printf("X ");
        }
        x = (i<N) ? ++x : --x;
        s = (i<N) ? --s : ++s;
        printf("\n");
    }
}
