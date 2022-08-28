#include <bits/stdc++.h>
using namespace std;
 
int main()
{
int t,n,x,a,b,dist;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n>>x>>a>>b;
    dist=std::min(n-1,abs(a-b)+x);
    cout<<dist<<endl;
}
return 0;
}