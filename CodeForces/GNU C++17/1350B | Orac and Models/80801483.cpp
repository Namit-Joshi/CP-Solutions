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
#define dbg(x) cout << #x << " = " << x << '\n'
#define dbg2(x,y) cout<<#x<<" = "<<x<<" & "<<#y<<" = "<<y<<endl;
 
int n;
int dp[100004];
int a[100004];
 
int func(int idx)
{
 if(idx>n)
  return 0;
 
 if(dp[idx]!=-1)
  return dp[idx];
 
 int count=0;
 
 for(int i=2*idx;i<=n;i+=idx)
 {
  if(a[i]>a[idx])
  {
   count=max(count,1+func(i));
  }
 }
 return dp[idx]=count;
}
 
void test()
{
 
 cin>>n;
 
 for(int i=1;i<=n;i++)
 {
  cin>>a[i];
  dp[i]=-1;
 }
 
 int mx=1;
 
 for(int i=1;i<=n;i++)
 {
  mx=max(mx,1+func(i));
 }
 cout<<mx<<endl;
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