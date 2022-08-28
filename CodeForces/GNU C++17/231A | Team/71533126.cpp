#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,a,b,c;
int ans=0;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>a>>b>>c;
    if(a+b+c>1)
    ans++;
}
cout<<ans;
return 0;
}