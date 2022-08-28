#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,n,count,sum;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n;
    if(n%2==0)
    cout<<1;
    else
    cout<<7;
    count=n/2-1;
    while(count>0)
      {
          cout<<1;
          count--;
      }
    cout<<endl;
}
}
 