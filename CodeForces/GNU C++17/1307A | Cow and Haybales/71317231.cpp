#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,n,d,fg;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n>>d;
    int a[n];
    fg=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
     if(n==1)
    {cout<<a[0]<<endl;
     continue;
    }
   
    
        for(int j=1;j<n;j++)
        {   
            if(fg==1)
            break;
            if(a[j]==0)
            continue;
            while(a[j]>0)
            {
            d=d-j;
            if(d<0)
            {
                cout<<a[0]<<endl;
                fg=1;
                break;
            }
            a[0]++;
            a[j]--;
            }
        }
        if(fg==0)
        cout<<a[0]<<endl;
}
return 0;
}