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
 int n,m;
 cin>>n>>m;
 
 ll ans=0;
 
 int a[n][m];
 
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
  {
   cin>>a[i][j];
  }
 }
 
 vector<vector<int>> v;
 
 
 int mid,fg;
 mid = (n+m-2)/2;
 
 if((n+m-2)%2!=0)
  fg = 1;
 else
  fg = 0;   
 
 for(int i=0;i<mid+1;i++)
 {
  v.pb(vector<int>());
 }
 
 if(fg==1)
 {
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
  { 
   if(i+j<=mid)
   v[i+j].pb(a[i][j]);
 
   else if(i+j>mid)
   v[n+m-2-i-j].pb(a[i][j]);
  }
 }
 }
 else
 {
  for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
  { 
   if(i+j<mid)
   v[i+j].pb(a[i][j]);
 
   else if(i+j>mid)
   v[n+m-2-i-j].pb(a[i][j]);
  }
 }
 }
 
 // for(int i=0;i<v.size();i++)
 // {
 //  for(int j=0;j<v[i].size();j++)
 //  {
 //   cout<<v[i][j];
 //  }
 //  cout<<endl;
 // }
 // cout<<endl;
 
 
 for(int i=0;i<v.size();i++)
 { 
  int z=0,o=0;
 
  for(int j=0;j<v[i].size();j++)
  {
   if(v[i][j]==0)
    z++;
   else
    o++;
  }
 
  ans+=min(z,o);
 }
 
 cout<<ans<<endl;
 // for(int i=0;i<n;i++)
 // {
 //  for(int j=0;j<m;j++)
 //  {
 //   cout<<a[i][j]<<" ";
 //  }
 //  cout<<endl;
 // }
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