#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,m,q;
long long int y;
cin>>n>>m;
string s[n];
string t[m];
 
for(int i=0;i<n;i++)
cin>>s[i];
 
for(int i=0;i<m;i++)
cin>>t[i];
 
cin>>q;
for(int i=0;i<q;i++)
{   cin>>y;
    cout<<s[(y-1)%n]<<t[(y-1)%m]<<endl;
}
return 0;
}