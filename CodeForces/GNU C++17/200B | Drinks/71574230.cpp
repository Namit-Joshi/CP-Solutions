#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,sum=0,a;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>a;
    sum+=a;
}
float ans=(float(sum)/float(n));
cout<<fixed<<setprecision(12)<<ans;
return 0;
}