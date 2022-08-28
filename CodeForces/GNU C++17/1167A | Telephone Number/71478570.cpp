#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,n,fg;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n;
    string s;
    cin>>s;
    fg=0;
    if(n<11)
    {
        cout<<"NO"<<endl;
        continue;
    }
    for(int i=0;i<=n-11;i++)
    {
        if(s[i]=='8')
        {
            fg=1;
            break;
        }
    }
    if(fg==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
return 0;
}