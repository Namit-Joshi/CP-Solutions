#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,a,b;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>a>>b;
    if(b>a)
    {
        if((b-a)%2==0)
        {
            cout<<2<<endl;
            continue;
        }
        else
        {
            cout<<1<<endl;
            continue;
        }
    }
    else if(a>b)
    {
        if((a-b)%2==0)
        {
            cout<<1<<endl;
            continue;
        }
        else
        {
            cout<<2<<endl;
            continue;
        }
    }
    else
    {
        cout<<0<<endl;
    }
    
}
return 0;
}