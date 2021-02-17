#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A[100], B[100];
    int a=0,b=0,i;
    for(i=0;i<3;i++)
    {
        cin>>A[i];
        
    }
    for(i=0;i<3;i++)
    {
       cin>>B[i];
        
    }
    for(i=0;i<3;i++)
    {
        if(A[i]>B[i])
        a++;
        else if(A[i]<B[i])
        b++;
    }
    cout<<a<<" "<<b;
    return 0;

}