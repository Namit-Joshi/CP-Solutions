#include <bits/stdc++.h>
using namespace std;
 
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    if(s.substr(0,2)=="op")
    cout<<"FILIPINO"<<endl;
    else if(s.substr(0,5)=="adinm")
    cout<<"KOREAN"<<endl;
    else
    cout<<"JAPANESE"<<endl;
}
return 0;
}