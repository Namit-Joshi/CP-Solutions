#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,a,b,c;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>a>>b>>c;
    int count=0;
    if(a>=4&&b>=4&&c>=4)
    {
        cout<<7<<endl;
        continue;
    }
     if(a>=3&&b>=3&&c>=3)
    {
        cout<<6<<endl;
        continue;
    }
    if(a>=2&&b>=2&&c>=2)
    {   
        if(a==2&&b==2&&c==2)
        {
            cout<<4<<endl;
            continue;
        }
        else
        {
        cout<<5<<endl;
        continue;
        }
    }
    if(a>0)
    {
        a--;
        count++;
    }
    if(b>0)
    {
        b--;
        count++;
    }
    if(c>0)
    {
        c--;
        count++;
    }
    if(a>0&&b>0)
    {
        count++;
        a--;
        b--;
    }
    if(a>0&&c>0)
    {
        count++;
        a--;
        c--;
    }
    if(b>0&&c>0)
      {
          count++;
          b--;
          c--;
      }  
    cout<<count<<endl;
}
return 0;
}