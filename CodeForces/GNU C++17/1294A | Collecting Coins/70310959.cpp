#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,sub,num,maxm;
cin>>t;
for(int i=0;i<t;i++)
{
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    
    /*if(a>b && a>c)
    sub=2*a-b-c;
    else if(b>a && b>c)
    sub=2*b-a-c;
    else
    sub=2*c-a-b;*/
    
    maxm = max(a,max(b,c));
    sub=maxm*3-a-b-c;
    num=n-sub;
    if(num%3==0 && n>=sub)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
}