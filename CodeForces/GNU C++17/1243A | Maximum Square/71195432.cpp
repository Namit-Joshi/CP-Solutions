#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,n,c,count;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {   c=i;
        count=0;
        for(int j=1;j<=n;j++)
        {
            if(a[j]>=c)
            count++;
        }
        if(count<c)
        {
            c--;
            break;
        }
    }
    cout<<c<<endl;
}
return 0;
}