#include <bits/stdc++.h>
using namespace std;
 
int main()
{
int t,b,p,f,h,c,max,nh,nc;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>b>>p>>f;
    cin>>h>>c;
    
    max=b/2;
    if(h>c)
    {
        if(p<=max)
        {
        max=max-p;
        nh=p;
        
        if(f<=max)
        nc=f;
        else
        nc=max;
        }
        
        else
        {
        nh=max;
        nc=0;
        }
    }
    else
    {
       if(f<=max)
        {
        max=max-f;
        nc=f;
        
        if(p<=max)
        nh=p;
        else
        nh=max;
        }
        
        else
        {
        nc=max;
        nh=0; 
        }
    }
    cout<<h*nh+c*nc<<endl;
}
return 0;
}