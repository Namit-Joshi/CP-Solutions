#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,n,steps,sum;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    steps=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            a[i]+=1;
            steps++;
        }
    }
    sum=0;
    for(int i=0;i<n;i++)
    {
        sum = sum + a[i]; 
    }
    if(sum==0)
    steps++;
    cout<<steps<<endl;
}
}