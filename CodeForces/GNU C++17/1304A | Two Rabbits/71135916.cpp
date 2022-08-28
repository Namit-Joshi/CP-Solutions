#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
long long int x,y,a,b;
cin>>t;
for(int m=0;m<t;m++)
{
 cin>>x>>y>>a>>b;
 if((y-x)%(a+b)==0)
 cout<<(y-x)/(a+b)<<endl;
 else
 cout<<-1<<endl;
}   
return 0;
}
 