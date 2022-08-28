#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
long long int x;
cin>>t;
for(int i=0;i<t;i++)
{
  cin>>n>>x;
  long long int a[n],max=0;
  int fg=0;
  for(long long int i=0;i<n;i++)
  {
      cin>>a[i];
      if(a[i]==x)
      {cout<<1<<endl;
      fg=1;
      }
      if(a[i]>max)
      max=a[i];
  }
  if(fg==1)
  continue;
  /*if(max==1)
    {         
    cout<<x<<endl;
    continue;
    }*/
  if(max>ceil(x/2))
  {cout<<2<<endl;
  continue;}    
    
  if(x%max==0)
  {
      cout<<x/max<<endl;
      continue;
  }
  long long int jump=(x/max)+1;
  cout<<jump<<endl;
  continue;
}
return 0;
}