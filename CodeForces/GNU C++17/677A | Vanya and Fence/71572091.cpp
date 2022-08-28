#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,h,c=0,a;
cin>>n>>h;
for(int i=0;i<n;i++)
{
    cin>>a;
    if(a>h)
    c+=2;
    else c+=1;
}
cout<<c;
return 0;
}