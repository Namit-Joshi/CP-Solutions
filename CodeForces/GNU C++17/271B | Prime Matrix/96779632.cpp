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
 const int MA = 1e5 + 10;
 int n,m;
 cin>>n>>m;
 
 int a[n][m];
 
 int b[MA];
 
 for(int i=0;i<MA;i++)
 {
  b[i] = 1;
 }
 
 b[0] = 0;
 b[1] = 0;
 
 vector<int> p;
 
 for(int i=2;i<MA;i++)
 {
  if(b[i]==1)
  {
   p.pb(i);
 
   for(int j=i;j<MA;j+=i)
   {
    b[j] = 0;
   }
  }
 }
 
 // cout<<p.size()<<endl;
 
 // for(auto x:p)
 // {
 //  cout<<x<<" ";
 // }
 
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
  {
   cin>>a[i][j];
 
   a[i][j] = *lower_bound(p.begin(),p.end(),a[i][j]) - a[i][j];
  }
 }
 
 int ans = INT_MAX;
 
 for(int i=0;i<n;i++)
 {
  int sum = 0;
 
  for(int j=0;j<m;j++)
  {
   sum+=a[i][j];
  }
 
  ans = min(ans,sum);
 }
 
 for(int i=0;i<m;i++)
 {
  int sum = 0;
 
  for(int j=0;j<n;j++)
  {
   sum+=a[j][i];
  }
 
  ans = min(ans,sum);
 }
 
 cout<<ans<<endl;
}
 
int main()
{   
fast_io();
cout << fixed << setprecision(15);
int t = 1;
 
//cin>>t;
 
for(int i = 0; i < t; i++)
{
 test();
}
return 0;
}