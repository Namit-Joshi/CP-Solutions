#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,a,b,x,y,ans;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>a>>b>>x>>y;
    x+=1;
    y+=1;
    ans=max(a*(b-y),a*(y-1));
    ans=max(ans,b*(a-x));
    ans=max(ans,b*(x-1));
    cout<<ans<<endl;
}
return 0;
}