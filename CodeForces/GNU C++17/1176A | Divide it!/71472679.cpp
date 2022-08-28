#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,fg,count;
unsigned long long int n;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n;
    fg=0;
    count=0;
    while(n>1)
    {
        if(n%2==0)
        {
            n=n/2;
            count++;
            continue;
        }
        else if(n%3==0)
        {
            n=2*n/3;
            count++;
            continue;
        }
        else if(n%5==0)
        {
            n=4*n/5;
            count++;
            continue;
        }
        else
        {
            fg=1;
            break;
        }
    }
    if(fg==1)
        cout<<-1<<endl;
    else
        cout<<count<<endl;
}
return 0;
}