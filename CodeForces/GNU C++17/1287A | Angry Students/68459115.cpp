#include<iostream>
using namespace std;
 
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{
int k;
string s;
cin>>k>>s;
int count=0;
while(true)
{
    bool change=false;
    for (int i=0;i<k;i++)
    {
        if (i<k-1 && s[i]=='A' && s[i+1]=='P') 
        {
          change=true;
          s[i+1]='A';
          i++;
        }
    }
    if(change==false)
    break;
    count++;
}
cout<<count<<'\n';
}
return 0;
}