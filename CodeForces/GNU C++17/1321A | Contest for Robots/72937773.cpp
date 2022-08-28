#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,fg=0;
cin>>n;
int a[n],b[n],p[n];
for(int i=0;i<n;i++)
{
    p[i]=1;
}
vector<int> vect(p,p+n);
 
for(int i=0;i<n;i++)
{
    cin>>b[i];
}
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
    if(b[i]>a[i])
    {
       fg=1;
    }
}
if(fg==0)
{
    cout<<-1;
    return 0;
}
/*for(int i=0;i<n;i++)
{
    cout<<vect[i]<<' ';
}
cout<<endl;*/
while(1)
{
int suma=0,sumb=0;
for(int i=0;i<n;i++)
{
    suma=suma+a[i]*vect[i];
    sumb=sumb+b[i]*vect[i];
}
if(sumb>suma)
{
    cout<<*max_element(vect.begin(),vect.end());
    return 0;
}
else
{
for(int i=0;i<n;i++)
{
    if(b[i]>a[i])
    {
       vect[i]++; 
    }
}
}
}
return 0;
}