#include <bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
set<int>a;
for(int i=0;i<s.length();i++)
{
    a.insert(s[i]);
}
if(a.size()%2==0)
    cout<<"CHAT WITH HER!";
else
    cout<<"IGNORE HIM!";
return 0;
}