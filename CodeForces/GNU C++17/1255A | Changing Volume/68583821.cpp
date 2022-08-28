#include <bits/stdc++.h>
using namespace std;
 
int main()
{
int t;
long long int a,b,ans;
cin>>t;
for(int i=0;i<t;i++)
{
    ans=0;
    cin>>a>>b;
    if(abs(a-b)/5>=1)
    {
     ans=ans+abs(a-b)/5;   
    }
    if(abs(a-b)%5==1||abs(a-b)%5==2)
    ans=ans+1;
    else if(abs(a-b)%5==3||abs(a-b)%5==4)
    ans=ans+2;
    cout<<ans<<endl;
}
return 0;
}