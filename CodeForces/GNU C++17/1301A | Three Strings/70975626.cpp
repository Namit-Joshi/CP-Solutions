#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,flag;
string a,b,c;
cin>>t;
for(int i=0;i<t;i++)
{
    flag=0;
    cin>>a>>b>>c;
    for(int i=0;i<c.size();i++)
    {
        if(!(b[i]==c[i] || a[i]==c[i]))
        {
        flag=-1;
        break;
        }
    }
    if(flag==0)
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
}
return 0;
}
 