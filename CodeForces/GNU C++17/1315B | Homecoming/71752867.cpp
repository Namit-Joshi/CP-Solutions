#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,n,a,b,p;
string s;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>a>>b>>p;
    cin>>s;
    n=s.size();
    int cost =0;
    int ind=n;
    s='$'+s;
    for(int i=n-1;i>0;i--)
    {
        if(s[i-1]!=s[i])
        {
            if(s[i]=='A')
            cost+=a;
            else
            cost+=b;
        }
        else
        {
            continue;
        }
        if(cost<=p)
        ind=i;
        else
        break;
    }
    cout<<ind<<endl;
}
return 0;
}