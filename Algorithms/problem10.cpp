#include <bits/stdc++.h>

using namespace std;

int main()
{
    int hh,mm,ss;
    char s[3];
    char ch;
    cin>>hh>>ch>>mm>>ch>>ss>>s;
    
    if(strcmp(s,"AM")==0 && hh==12)
    hh=00;
    if(strcmp(s,"PM")==0 && hh<12)
    hh=hh+12;
    cout<<setw(2)<<setfill('0')<<hh<<":"<<setw(2)<<setfill('0')<<mm<<":"<<setw(2)  <<setfill('0')<<ss;
    return 0;
}