#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char S[10000];
    int T,i,j;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%s",S);
        for(j=0;j<strlen(S);j=j+2)
        printf("%c",S[j]);
        printf(" ");
        for(j=1;j<strlen(S);j=j+2)
        printf("%c",S[j]);
        printf("\n");
    }
     
    return 0;
}
