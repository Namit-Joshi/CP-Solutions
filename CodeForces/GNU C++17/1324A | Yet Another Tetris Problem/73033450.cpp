#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int fg=0;
if(n==1)
{
    cout<<"YES"<<endl;
    continue;
}
for(int i=0;i<n;i++)
{
    if(a[i]%2!=0)
    {   if(fg==2)
        {
            cout<<"NO"<<endl;
            fg=-1;
            break;
        }
        fg=1;
    }
    if(a[i]%2==0)
    {   if(fg==1)
        {
            cout<<"NO"<<endl;
            fg=-1;
            break;
        }
        fg=2;
    }
}
if(fg!=-1)
cout<<"YES"<<endl;
}
return 0;
}