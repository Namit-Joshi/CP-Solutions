#include <bits/stdc++.h>
using namespace std;
int returnsort()
{   
    int n,m;
    bool sort=false;
   cin>>n>>m;
   int a[n+1];
   int p[m+1];
   for(int i=1;i<=n;i++)
   {
       cin>>a[i];
   }
   for(int i=1;i<=m;i++)
   {
       cin>>p[i];
   }
   while(sort!=true)
   {
   for(int i=1;i<n;i++)
   {int fg=0;
       if(a[i]>a[i+1])
       {
           for(int j=1;j<=m;j++)
           {
               if(i==p[j])
               {    fg=1;
                   swap(a[i],a[i+1]);
                   break;
               }
           }           
               if(fg==0)
               {
                   cout<<"NO"<<endl;
                   return 0;
               }
           
       }
   }
   sort=true;
   for(int i=1;i<n;i++)
   {
       if(a[i]>a[i+1])
       {
           sort=false;
       }
   }
   
   } //while close
   cout<<"YES"<<endl;
   return 0;
}
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{
returnsort();
}
return 0;
}