#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{
int fg=0;
int ans=0;
string s;
cin>>s;
s.insert(0,"#");
int end=s.size();
int pos=end;
for(int i=s.size()-1;s[i]!='#';i--)
{
    
    if(s[i]=='R')
    {
        fg=1;
        ans=max(ans,pos-i);
        pos=i;
        //cout<<end-i<<endl;
        //break;
    }
    
}
if(fg!=1)
{
cout<<end<<endl;
continue;
}
ans=max(ans,pos);
cout<<ans<<endl;
}
return 0;
}