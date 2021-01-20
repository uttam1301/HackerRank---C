#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main()
{   
    int n,i;
    string name,phno,key;
    cin>>n;
    map<string,string>phonebook;
    for(i=0;i<n;i++)
    {
        cin>>name>>phno;
        phonebook[name]=phno;
    }
    while(cin>>key)
    {
        if(phonebook.find(key)!=phonebook.end())
        {
            cout<<key<<"="<<phonebook.find(key)->second<<endl;
        }
        else{
            cout<<"Not found"<<endl;
        }
    }
    
    return 0;
}