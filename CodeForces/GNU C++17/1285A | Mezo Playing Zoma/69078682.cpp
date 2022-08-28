#include <bits/stdc++.h>
using namespace std;
 
int main()
{
long int cl,cr,n;
cl=0;
cr=0;
string s;
cin>>n;
cin>>s;
for(int i=0;i<n;i++)
{
    if(s[i]=='L')
    cl++;
    else 
    cr++;
}
cout<<cl+cr+1;
return 0;
}