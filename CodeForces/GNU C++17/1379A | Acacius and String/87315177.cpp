#include <bits/stdc++.h>
using namespace std;
 
typedef double db;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef complex<double> com;
 
#define MOD 1000000007
#define PI 3.14159265359
#define endl '\n'
#define eb emplace_back
#define pb push_back
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define unique_sort(x) (sort(x.begin(), x.end()), x.resize(distance(x.begin(), unique(x.begin(), x.end()))))
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define dbg(x) cout << #x << " = " << x << '\n'
#define dbg2(x,y) cout<<#x<<" = "<<x<<" & "<<#y<<" = "<<y<<endl;
 
void test()
{
 int n,fg,c=0;
 cin>>n;
 
 string s,t;
 cin>>s;
 
 t = "abacaba";
 
 for(int i=0;i<n-t.size()+1;i++)
 {
  fg = 0;
 
  for(int j=i;j<i+t.size();j++)
  {
   if(s[j]!=t[j-i])
   {
    fg = 1;
    break;
   }
  }
 
  if(fg==0)
   c++;
 }
 
 
 if(c==1)
 {
  cout<<"YES"<<endl;
  for(int i=0;i<n;i++)
  {
   if(s[i]!='?')
    cout<<s[i];
   else
    cout<<"x";
  } 
 
  cout<<endl;
  return;
 }
 
 if(c>1)
 {
  cout<<"NO"<<endl;
  return;
 }
 
 int j;
 
 string m = s;
 
 for(int i=0;i<n-t.size()+1;i++)
 {
  fg = 0;
 
  for(j=i;j<i+t.size();j++)
  {
   if(s[j]!=t[j-i] && s[j]!='?')
   {
    fg = 1;
    break;
   }
  }
 
  if(fg==0)
  {
    for(int k=i;k<i+t.size();k++)
    {
     s[k] = t[k-i];
    }
 
 
    for(int i=0;i<n;i++)
    {
     if(s[i]=='?')
      s[i]='x';
    }
 
    c = 0;
 
    for(int i=0;i<n-t.size()+1;i++)
    {
     fg = 0;
 
     for(int j=i;j<i+t.size();j++)
     {
      if(s[j]!=t[j-i])
      {
       fg = 1;
       break;
      }
     }
   
     if(fg==0)
      c++;
    }
 
    if(c==1)
    {
     cout<<"YES"<<endl;
 
     for(int i=0;i<n;i++)
     {
      if(s[i]=='?')
       s[i]='x';
     }
 
    cout<<s;
 
    cout<<endl;
    return;
    }
    else
    {
     s = m;
    }
  }
 }
 
 cout<<"NO"<<endl;
 
}
 
int main()
{   
fast_io();
cout << fixed << setprecision(15);
int t = 1;
 
cin>>t;
 
for(int i = 0; i < t; i++)
{
 test();
}
return 0;
}