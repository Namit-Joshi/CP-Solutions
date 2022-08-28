#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
long double sum = 0;
for(int i=1;i<=n;i++)
{
    sum = sum + (1.0/i);
}
cout<<fixed<<setprecision(12)<<sum;
}
 