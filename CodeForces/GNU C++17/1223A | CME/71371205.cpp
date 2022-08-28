#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
long long int n;
cin>>t;
for(int i=0;i<t;i++)
{
cin>>n;
if(n==2)
{
cout<<2<<endl;
continue;
}
if(n%2==0)
{
    cout<<0<<endl;
    continue;
}
else
{
    cout<<1<<endl;
    continue;
}
}
return 0;
}