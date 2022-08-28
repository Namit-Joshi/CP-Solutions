#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
long long int i,n,g,b,c,j;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n>>g>>b;
    long long int tot=(n+1)/2;
    long long int ans=(tot/g)*(g+b);
    if(tot%g==0)
    {
        ans-=b;
    }
    else
    {
        ans+=tot%g;
    }
    cout<<max(n,ans)<<endl;
}
return 0;
}