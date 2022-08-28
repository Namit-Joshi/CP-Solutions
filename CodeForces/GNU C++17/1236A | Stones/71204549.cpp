#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,a,b,c,count;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>a>>b>>c;
    count=0;
    while(c>=2 && b>=1)
    {
        c-=2;
        b-=1;
        count+=3;
    }
    while(a>=1 && b>=2)
    {
        b-=2;
        a-=1;
        count+=3;
    }
    cout<<count<<endl;
}
return 0;
}