#include<iostream>
using namespace std;
 
int main()
{
int t,h,m,min;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>h>>m;
    min=(23-h)*60+(60-m);
    cout<<min<<endl;
}
return 0;
}