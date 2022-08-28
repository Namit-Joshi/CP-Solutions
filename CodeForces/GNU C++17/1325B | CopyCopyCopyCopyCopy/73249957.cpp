#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{
int n;
cin>>n;
long long int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
set<int> s(a,a+n);
cout<<s.size()<<endl;
}
return 0;
}