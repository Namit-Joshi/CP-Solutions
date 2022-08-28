#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{   int a[10];
    for(int i=0;i<10;i++)
    {
        a[i]=0;
    }
    while(n>0)
    {
        a[n%10]++;
        n=n/10;
    }
    
    for(int i=0;i<10;i++)
    {
        if(a[i]>1)
        return false;
    }
    return true;
}
int main()
{
int l,r;
cin>>l>>r;
for(int i=l;i<=r;i++)
{
   if(check(i))
   {
   cout<<i<<endl;
   return 0;
   }
}
cout<<-1<<endl;
return 0;
}
 