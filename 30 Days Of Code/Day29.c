#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d\n",&t);
    while(t>0)
    {
        int n,k,i,j;
        int a[1000];
        
	scanf("%d %d",&n,&k);
        
	for(i=1;i<=n;i++)
        {
            a[i-1] = i;
        }
        
	int max=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if((a[i]&a[j])<k && (a[i]&a[j])>max)
                {
                    max = a[i]&a[j];
                }
            }
        }
        printf("%d\n",max);
        t--;
    }
    
    return 0;
}
