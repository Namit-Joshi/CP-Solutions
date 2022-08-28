#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,epos,spos,count,flag;
cin>>t;
for(int i=0;i<t;i++)
{
    string s;
    cin>>s;
    epos=0;
    spos=0;
    count=0;
    flag=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='1')
        {
            epos=i;
        }
    }
       for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='1')
        {
            spos=i;
            flag=-1;
            break;
        }
    }
    for(int i=spos;i<=epos;i++)
    {
        if(s[i]=='0')
        count++;
    }
    if(flag==0)
    cout<<'0'<<endl;
    else
    cout<<count<<endl;
}
return 0;
}