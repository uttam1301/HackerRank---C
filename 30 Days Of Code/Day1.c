#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    
    int a;
    double dl;
    char st[100];
        
    scanf("%d",&a);
    scanf("%lf",&dl);
    scanf("%*[\n]%[^\n]",st);
    
    int sum = i + a;
    printf("%d",sum);
      
    double sumDouble = d + dl;
    printf("\n%0.1lf",sumDouble);
      
    printf("\n%s",s);
    printf("%s",st);

    return 0;
}