#include<iostream>
using namespace std;
 
int main()
{
long long int m,n,a,l,b;
cin>>n>>m>>a;
if(n%a==0)
l=n/a;
else l=n/a+1;
if(m%a==0)
b=m/a;
else b=m/a+1;
cout<<l*b;
return 0;    
}