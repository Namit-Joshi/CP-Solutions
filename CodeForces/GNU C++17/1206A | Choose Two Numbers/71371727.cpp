#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n;
int a[n];
int am=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    if(a[i]>am)
    am=a[i];
}
cin>>m;
int b[m];
int bm=0;
for(int i=0;i<m;i++)
{
    cin>>b[i];
    if(b[i]>bm)
    bm=b[i];
}
cout<<am<<' '<<bm<<endl;
return 0;
}