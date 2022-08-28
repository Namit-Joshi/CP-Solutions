#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int sum=1;
for(int i=1;i<n;i++)
{
   sum=sum+4*i;
}
cout<<sum<<endl;
return 0;
}