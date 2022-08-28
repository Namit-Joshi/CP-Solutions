#include <bits/stdc++.h>
using namespace std;
int main()
{
int x,y,z,a,b,c;
cin>>x>>y>>z;
cin>>a>>b>>c;
 
if(a+b+c<x+y+z)
{
    cout<<"NO";
    return 0;
}
 
if(a<x)
{
    cout<<"NO";
    return 0;
}
 
a=a-x;
 
if(a+b<y)
{
    cout<<"NO";
    return 0;
}
 
cout<<"YES";
 
return 0;
}