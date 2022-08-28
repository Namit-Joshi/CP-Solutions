#include <bits/stdc++.h>
using namespace std;
int ret(int n)
{
    if(n==1)
    return 1;
    else
    return ret(n-1)+4*(n-1);
}
int main()
{
int n;
cin>>n;
cout<<ret(n);
return 0;
}