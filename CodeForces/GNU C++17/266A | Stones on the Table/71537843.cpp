#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,c=0,i,j;
cin>>n;
string s;
cin>>s;
for(i=0;i<n-1;)
{   j=i+1;
    while(s[j]==s[i])
    {
        c++;
        j++;
    }
    i=j;
}
//cout<<j<<' '<<i<<endl;
cout<<c;
return 0;
}