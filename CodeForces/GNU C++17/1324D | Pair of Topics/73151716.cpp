#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
long long int count=0;
cin>>n;
long long int a[n],b[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
    cin>>b[i];
    b[i]=a[i]-b[i];
}
sort(b,b+n);
for(int i=0;i<n;i++)
{
    if(b[i]>0)
    {
        count+=n-i-1;
    }
    else
    {
        count+=n-(upper_bound(b,b+n,-b[i])-b);
    }
}
cout<<count;
return 0;
}