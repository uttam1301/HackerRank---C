#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int flag=0;
        if(n<2)
        {
            printf("Not prime\n");
        }
        else
        {
            for(int i=2;i<=sqrt(n);i++)
            {
                if(n%i==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                printf("Not prime\n");
            }
            else
            {
                printf("Prime\n");
            }
        }
    }
    return 0;
}