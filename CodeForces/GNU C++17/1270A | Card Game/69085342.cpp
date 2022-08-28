#include <bits/stdc++.h>
using namespace std;
int main()
{
int m1,m2,n,k1,k2,t,a[100],b[100];
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n>>k1>>k2;
    
    for(int i=0;i<k1;i++)
    cin>>a[i];
    m1 = *max_element(a,a+k1);
    
    for(int i=0;i<k2;i++)
    cin>>b[i];
    m2 = *max_element(b,b+k2);
    
    if(m1>m2)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
}
 