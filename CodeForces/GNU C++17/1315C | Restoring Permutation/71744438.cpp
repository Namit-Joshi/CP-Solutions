#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
string s;
cin>>t;
for(int i=0;i<t;i++)
{
    
    int fg=0;
    int c=1;
    cin>>n;
    int b[n+1];
    int ans[2*n+1];
    int a[201];
    for(int i=0;i<=200;i++)
    {
        a[i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
        a[b[i]]=1;
    }
    for(int i=1;i<=n;i++)
    {
        ans[c]=b[i];
        c++;
        for(int j=b[i]+1;j<=2*n;j++)
        {
            if(a[j]==0)
            {
            ans[c]=j;
            c++;
            a[j]=1;
            break;
            }
        }
        
    }
    for(int i=1;i<=2*n;i++)
    {
        if(a[i]==0)
        {
            fg=1;
            break;
        }    
    }
    if(fg==1)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(int i=1;i<=2*n;i++)
        {   
            if(i==2*n)
            cout<<ans[i];
            else
            cout<<ans[i]<<' ';
        }
        cout<<endl;
    }
}
return 0;
}