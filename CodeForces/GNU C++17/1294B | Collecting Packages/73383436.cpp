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
 
#define endl '\n'
#define eb emplace_back
#define pb push_back
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define unique_sort(x) (sort(x.begin(), x.end()), x.resize(distance(x.begin(), unique(x.begin(), x.end()))))
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
struct position
 {
  int x;
  int y;
 };
 
bool f(position a,position b) 
 {
  if(a.x!=b.x)
   return a.x<b.x;
  if(a.y!=b.y)
   return a.y<b.y;
  return true;
 }
void test()
{
 
 int n,xp=0,yp=0;
 cin>>n;
 position s[n];
 string str;
 for (int i = 0; i < n; ++i)
 {
  cin>>s[i].x>>s[i].y;
 }
 sort(s,s+n,f);
 // for (int i = 0; i < n; ++i)
 // {
 //  cout<<s[i].x<<" "<<s[i].y<<endl;
 // }
 for (int i = 0; i < n; ++i)
 {
  if(s[i].x>=xp && s[i].y>=yp)
  {
   for(int j=0;j<s[i].x-xp;j++)
    str.pb('R');
   xp=s[i].x;
 
   for(int j=0;j<s[i].y-yp;j++)
    str.pb('U');
   yp=s[i].y;
  }
  else
  {
   cout<<"NO"<<endl;
   return;
  }
 }
 cout<<"YES"<<endl;
 cout<<str;
 cout<<endl;
 
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