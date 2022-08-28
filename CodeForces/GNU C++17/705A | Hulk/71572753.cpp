#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,i;
string s;
cin>>n;
for(i=0;i<n-1;i++)
{
    if(i%2==0)
    s+="I hate that ";
    else
    s+="I love that ";
}
if(i%2==0)
s+="I hate it";
else
s+="I love it";
cout<<s;
return 0;
}