#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
long long int x;
int co=0;
int ce=0;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>x;
    if(x%2==0)
    ce++;
    else 
    co++;
}
int s = co>ce?ce:co;
cout<<s;
}
 