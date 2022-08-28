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
 int n,k;
 cin>>n>>k;
 
 int a[n], b[n];
 
 for(int i=0;i<n;i++)
 {
  b[i] = 0;
 }
 
 map<int,int> mp;
 vector<int> v;
 
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
 
  mp[a[i]]++;
 }
 
 for(int i=0;i<n;i++)
 {
  if(mp[a[i]]>1 && (k-a[i] == a[i]))
  {
   v.pb(a[i]);
   mp[a[i]] = 0;
  }
 
  if(mp[a[i]])
  {
   b[i] = 1;
   
   if(mp[k-a[i]])
    mp[k - a[i]] = 0;
  }
 }
 
 // for(auto x:v)
 // {
 //  cout<<x<<" ";
 // }
 // cout<<endl;
 
 for(auto x:v)
 { 
  int fg = 1;
 
  for(int i=0;i<n;i++)
  {
   if(a[i] != x)
    continue;
   
   if(fg == 1)
   {
    b[i] = 1;
    fg = 0;
   }
   else
   {
    b[i] = 0;
    fg = 1;
   }
  }
 }
 
 for(int i=0;i<n;i++)
 {
  cout<<b[i]<<" ";
 }
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