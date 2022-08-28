#include<iostream>
#include<string.h>
using namespace std;
 
int main()
{
int i,n;
char s[105][105];
cin>>n;
for(i=0;i<n;i++)
{
    cin>>s[i];
}
for(i=0;i<n;i++)
{
    if(strlen(s[i])>10)
        cout<<s[i][0]<<strlen(s[i])-2<<s[i][strlen(s[i])-1]<<endl;
    else
    cout<<s[i]<<endl;
}
return 0;    
}