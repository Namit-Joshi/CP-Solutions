#include <bits/stdc++.h>
using namespace std;
void reverseStr(string& str) 
{ 
    int n = str.length(); 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
} 
int main()
{
int t,n,m;
cin>>n;
cin>>m;
string s[n],a,pal;
string pal1;
string pal2;
string palm;
 
for(int i=0;i<n;i++)
cin>>s[i];
 
for(int i=0;i<n;i++)
{
    a=s[i];
    reverseStr(a);
    for(int j=i;j<n;j++)
    {   if(i==j && a==s[j])
         {   
             palm=a;
         }
        else if(a==s[j])
        {
            pal1+=s[i];
            
            pal2+=s[i];
        }
    }
}
 
pal+=pal1;
pal+=palm;
reverseStr(pal2);
pal+=pal2;
cout<<pal.length()<<endl;
if(pal.length()==0)
cout<<endl;
else
cout<<pal;
return 0;
}