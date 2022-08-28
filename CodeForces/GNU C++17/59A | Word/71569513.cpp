#include <bits/stdc++.h>
using namespace std;
int main()
{
int uc=0,lc=0;
string s;
cin>>s;
for(int i=0;i<s.length();i++)
{
    if(s[i]>='A'&&s[i]<='Z')
    uc++;
    else
    lc++;
}
if(uc>lc)
for(int i=0;i<s.length();i++)
s[i]=toupper(s[i]);
else
for(int i=0;i<s.length();i++)
s[i]=tolower(s[i]);
cout<<s;
return 0;
}