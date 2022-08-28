#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int ce=0;
    int co=ce;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        ce++;
        else 
        co++;
    }
    if(co%2!=0 || (co%2==0 && ce>0 && co>0))
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
}
}