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
    int N,index=0,i,j;
    scanf("%d",&N);
    char Name[30][20];
    for(i=0;i<N;i++)
    {
        char firstName[20],emailId[30],ID[11]="@gmail.com";
        scanf("%s %s",firstName,emailId);
        if(strstr(emailId,ID)!=NULL)
        {
            strcpy(Name[index],firstName);
            index++;
        }
    }
    for(i=0;i<index;i++)
    {
        for(j=i+1;j<index;j++)
        {
            if(strcmp(Name[i],Name[j])>0)
            {
                char temp[20];
                strcpy(temp,Name[i]);
                strcpy(Name[i],Name[j]);
                strcpy(Name[j],temp);
            }
        }
    }
    for(i=0;i<index;i++)
    {
        printf("%s\n",Name[i]);
    }
    
    
    return 0;
       
}