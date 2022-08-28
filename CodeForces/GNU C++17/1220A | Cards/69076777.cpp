#include <bits/stdc++.h>
using namespace std;
 
int main()
{
char a[100001];
int n,co,cz;
co=0;
cz=0;
cin>>n;
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
{
    if(a[i]=='n')
    co++;
    else if(a[i]=='z')
    cz++;
}
for(int i=0;i<co;i++)
{
    cout<<1<<" ";
}
for(int i=co;i<co+cz;i++)
{
    cout<<0<<" ";
}
return 0;
}