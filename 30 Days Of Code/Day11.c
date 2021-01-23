#include<stdio.h>

int main()
{
    int A[6][6];
    int i,j,k,sum,max=0;
    
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            sum=0;
            
            sum += A[i][j];
            sum += A[i][j+1];
            sum += A[i][j+2]; 
                           
            sum += A[i+1][j+1];
                
            sum += A[i+2][j];
            sum += A[i+2][j+1];
            sum += A[i+2][j+2];
                
            if(sum>max || (i==0 && j==0))
            {
                max = sum;    
            }
        }
    }
    printf("%d",max);
    
    
    return 0;
}
