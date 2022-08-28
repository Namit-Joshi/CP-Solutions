#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{
int n,fg=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
    for(int j=i+2;j<n;j++)
    {
        if(a[i]==a[j])
        fg=1;
    }
}
if(fg==1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
return 0;
}